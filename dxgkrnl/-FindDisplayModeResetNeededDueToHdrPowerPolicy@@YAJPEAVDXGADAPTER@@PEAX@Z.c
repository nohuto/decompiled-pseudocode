__int64 __fastcall FindDisplayModeResetNeededDueToHdrPowerPolicy(struct DXGADAPTER *a1, _BYTE *a2)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+50h] [rbp-28h] BYREF
  struct DXGADAPTER *v8; // [rsp+58h] [rbp-20h]
  char v9; // [rsp+60h] [rbp-18h]

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 7095LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 7095LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = a1;
  v9 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( *((_DWORD *)a1 + 50) == 1
    && (Global = DXGGLOBAL::GetGlobal(), DmmNeedDisplayModeResetDueToHdrPowerPolicy(a1, *((_BYTE *)Global + 304780))) )
  {
    *a2 = 1;
    v5 = -2147483622;
  }
  else
  {
    v5 = 0;
  }
  if ( v9 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  return v5;
}
