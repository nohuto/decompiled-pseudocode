__int64 __fastcall ForceGpupTdr(struct _D3DKMT_DRT_ESCAPE_HEAD *a1)
{
  __int64 v1; // rdi
  const wchar_t *v2; // r9
  struct DXGGLOBAL *Global; // rax

  if ( *((_DWORD *)a1 + 1) < 0x10u )
  {
    v1 = 205LL;
    WdLogSingleEntry1(2LL, 205LL);
    v2 = L"Invalid command size for D3DKMT_DRT_TEST_COMMAND_GPUP_TDR";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v2, v1, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *((_DWORD *)a1 + 3) )
  {
    v1 = 211LL;
    WdLogSingleEntry1(2LL, 211LL);
    v2 = L"Invalid flags for D3DKMT_DRT_TEST_COMMAND_GPUP_TDR";
    goto LABEL_3;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))ForceGpupTdrCallback,
    0LL,
    0);
  return 0LL;
}
