__int64 __fastcall DxgkSetGlobalRawmodeFlag(char a1)
{
  CCD_BTL *v2; // rax

  v2 = CCD_BTL::Global();
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v2, a1 != 0);
}
