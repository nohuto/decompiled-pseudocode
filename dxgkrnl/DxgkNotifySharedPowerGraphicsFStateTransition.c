void __fastcall DxgkNotifySharedPowerGraphicsFStateTransition(__int64 *a1, unsigned int a2, unsigned int a3, char a4)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(Global, a1, a2, a3, a4);
}
