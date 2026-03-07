__int64 __fastcall DxgIsSessionUsingWddmMonitors(__int64 a1)
{
  unsigned int v1; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v4; // rsi
  struct DXGPROCESS *v5; // rax
  __int64 v6; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v11 = 0;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v4 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v5 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v5 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v5 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v5 )
        goto LABEL_4;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v5 = v4;
  if ( !v4 )
    return 1LL;
LABEL_4:
  v6 = *((_QWORD *)v5 + 11);
  if ( !v6 )
    return 1LL;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v6 + 224))(0LL, 0LL, &v11) || v11 )
    return 1;
  return v1;
}
