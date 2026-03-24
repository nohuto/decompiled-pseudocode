/*
 * XREFs of DxgkSubmitCommand @ 0x1C00FB090
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00FB130 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  struct DXGPROCESS *v10; // rdi
  unsigned int v11; // ebx
  struct DXGTHREAD *Current; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) != 0LL
    || (v10 = v9) != 0LL )
  {
    v11 = DxgkSubmitCommandInternal(a1, v10);
    if ( (int)(v11 + 0x80000000) >= 0
      && v11 != -1073741130
      && !g_DwmRenderDebugMode
      && *((_BYTE *)v10 + 346)
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
        v11,
        (const void *)&g_DwmRenderDebugMode);
      __debugbreak();
    }
    return v11;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v8, v7);
    v19 = PsGetCurrentProcess(v16, v15, v17, v18);
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    *(_QWORD *)(v14 + 24) = v19;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
