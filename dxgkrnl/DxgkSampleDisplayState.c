__int64 __fastcall DxgkSampleDisplayState(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax

  if ( !a1 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 392LL))(a1);
  v6 = v4;
  if ( v4 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry2(2LL, ProcessSessionId, v6);
    v10 = PsGetCurrentProcess(v9);
    v11 = PsGetProcessSessionId(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to sample display state in session 0x%I64x, (Status = 0x%I64x).",
      v11,
      v6,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v6;
}
