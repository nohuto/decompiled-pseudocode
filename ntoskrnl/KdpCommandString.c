void __fastcall KdpCommandString(char **a1, char **a2, char a3, __int64 a4, __int64 a5)
{
  bool v8; // al
  struct _KPRCB *CurrentPrcb; // rdi
  char v10; // bp
  int v11; // edx
  int v12; // ebx

  if ( !a3 && !(_BYTE)KdDebuggerNotPresent )
  {
    v8 = KdEnterDebugger(a5);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v8;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v11);
    KdpCopyContext((char *)CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a4 + 48), (_BYTE *)a4);
    KdpReportCommandStringStateChange(a1, a2, (__int64)CurrentPrcb->Context);
    v12 = *(_DWORD *)(a4 + 48);
    KdpCopyContext((char *)a4, CurrentPrcb->ContextFlagsInit & v12, CurrentPrcb->Context);
    *(_DWORD *)(a4 + 48) = v12;
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KdExitDebugger(v10);
  }
}
