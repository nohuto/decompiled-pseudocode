__int64 __fastcall DxgkSetHwProtectionTeardownRecovery(__int64 *a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 CurrentProcess; // rax
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v7 = *a1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64 *))(*((_QWORD *)Current + 11) + 432LL))(&v7);
  CurrentProcess = PsGetCurrentProcess();
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  v3 = PsGetCurrentProcess();
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned int)L"0x%I64x 0x%I64x encountered exception",
        v4,
        v5,
        0LL,
        0,
        -1,
        L"0x%I64x 0x%I64x encountered exception",
        -1073741811LL,
        v3,
        0LL,
        0LL,
        0LL);
  }
  return 3221225485LL;
}
