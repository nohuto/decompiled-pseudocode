/*
 * XREFs of KdpSymbol @ 0x140AAD56C
 * Callers:
 *     KdpTrap @ 0x140AAD1CC (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x140416280 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140416350 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 *     KdpCopyContext @ 0x140AAD658 (KdpCopyContext.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140AAD6F0 (KdpReportLoadSymbolsStateChange.c)
 */

void __fastcall KdpSymbol(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6)
{
  bool v9; // al
  struct _KPRCB *CurrentPrcb; // rsi
  char v11; // r14
  int v12; // edx
  __int64 v13; // r8
  int v14; // ebx

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v9 = KdEnterDebugger(a6);
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v9;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v12);
    KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a5 + 48), a5);
    LOBYTE(v13) = a3;
    KdpReportLoadSymbolsStateChange(a1, a2, v13, CurrentPrcb->Context);
    v14 = *(_DWORD *)(a5 + 48);
    KdpCopyContext(a5, CurrentPrcb->ContextFlagsInit & v14, CurrentPrcb->Context);
    *(_DWORD *)(a5 + 48) = v14;
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KdExitDebugger(v11);
  }
}
