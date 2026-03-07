struct DXGPROCESS *__fastcall DXGPROCESS::GetCurrent(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v3; // rbx
  struct DXGPROCESS *result; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v3 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    return (struct DXGPROCESS *)v3;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    result = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( result )
      return result;
    return (struct DXGPROCESS *)v3;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !result )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    return (struct DXGPROCESS *)v3;
  }
  return result;
}
