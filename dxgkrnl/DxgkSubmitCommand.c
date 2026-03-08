/*
 * XREFs of DxgkSubmitCommand @ 0x1C0190160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0190840 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v4; // rcx
  struct DXGPROCESS *v5; // rdi
  struct DXGPROCESS *v6; // rsi
  unsigned int v7; // ebx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v5 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v6 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v6 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v6 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v6 )
        goto LABEL_4;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v6 = v5;
  if ( !v5 )
  {
    v12 = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, v12, -1073741811LL);
    v14 = PsGetCurrentProcess(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
LABEL_4:
  v7 = DxgkSubmitCommandInternal(a1, v6);
  if ( (int)(v7 + 0x80000000) >= 0
    && v7 != -1073741130
    && !g_DwmRenderDebugMode
    && (*((_DWORD *)v6 + 106) & 4) != 0
    && !KdRefreshDebuggerNotPresent() )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "An unexpected render failure 0x%x from DWM has been detected.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "To disable debug breaks for DWM render failures, run \"?? dxgmms2!g_DwmRenderDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      v7,
      (const void *)&g_DwmRenderDebugMode);
    __debugbreak();
  }
  return v7;
}
