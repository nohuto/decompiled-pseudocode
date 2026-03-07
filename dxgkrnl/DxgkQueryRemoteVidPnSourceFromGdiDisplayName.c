__int64 __fastcall DxgkQueryRemoteVidPnSourceFromGdiDisplayName(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 CurrentProcess; // rax
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 440LL))(a1);
  CurrentProcess = PsGetCurrentProcess();
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  v4 = PsGetCurrentProcess();
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned int)L"0x%I64x 0x%I64x encountered exception",
        v5,
        v6,
        0LL,
        0,
        -1,
        L"0x%I64x 0x%I64x encountered exception",
        -1073741811LL,
        v4,
        0LL,
        0LL,
        0LL);
  }
  return 3221225485LL;
}
