void read_obj()
{
  TString roostr = "";
  
  TH2D *h2d_basic = new TH2D("h2d_basic", "", 10, 0.1, 10, 10, 0.1, 100);
  h2d_basic->SetStats(0);
  
  TCanvas *canv_test = new TCanvas("canv_test", "canv_test", 900, 650);      
  canv_test->Update();

  TGraph2D *g3d = new TGraph2D();
  g3d->SetHistogram(h2d_basic);
  
  g3d->SetPoint(0,5,10,500);
  g3d->SetPoint(1,6,20,500);
  g3d->SetPoint(2,7,30,500);
  g3d->SetPoint(3,8,40,500);
  g3d->SetPoint(4,9,50,500);

  g3d->SetMinimum(0.1);
  g3d->SetMaximum(1e3);
  g3d->Draw("p0 line");

  
}
