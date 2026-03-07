void __fastcall DxgkEnableClockCalibration(unsigned __int8 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::EnableClockCalibration(Global, a1);
}
