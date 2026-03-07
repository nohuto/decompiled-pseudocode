__int64 __fastcall GetPTPShellTarget(__int64 a1)
{
  __int64 PTPShellListener; // rax
  _DWORD *v3; // rcx

  PTPShellListener = GetPTPShellListener();
  INPUTDEST_FROM_PWND(v3, PTPShellListener);
  return a1;
}
