void __fastcall DpiSuspendAdapterDpc(
        struct _KDPC *Dpc,
        int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  WdLogSingleEntry3(5LL, DeferredContext, DeferredContext[1040], DeferredContext[1041]);
  if ( DeferredContext[1040] != 4 && DeferredContext[1041] == 1 )
    DpiRequestDevicePowerState(*((_QWORD *)DeferredContext + 3), 4LL);
}
