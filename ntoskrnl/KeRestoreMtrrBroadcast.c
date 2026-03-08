/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140A8C444
 * Callers:
 *     PnprWakeProcessors @ 0x140A9AF9C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9C260 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140B5FED0 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C41590 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
