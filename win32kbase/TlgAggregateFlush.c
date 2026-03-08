/*
 * XREFs of TlgAggregateFlush @ 0x1C02745A4
 * Callers:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0086BD0 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 * Callees:
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0274560 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     LookUpTableFlushComplete @ 0x1C0301AEC (LookUpTableFlushComplete.c)
 */

void TlgAggregateFlush()
{
  __int64 v0; // rbx
  volatile signed __int16 *v1; // rdx
  struct _EX_TIMER *v2; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C02C40C0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = qword_1C02C40C8;
    if ( KeGetCurrentIrql() >= 2u || (unsigned int)KeIsExecutingDpc() )
    {
      v1 = *(volatile signed __int16 **)(v0 + 264);
      v2 = *(struct _EX_TIMER **)(v0 + 360);
      *(_BYTE *)(v0 + 372) = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(v2, v1);
    }
    else
    {
      LookUpTableFlushComplete(v0);
    }
  }
}
