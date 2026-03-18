/*
 * XREFs of FxDriverGlobalsInitializeDebugExtension @ 0x1C0056E84
 * Callers:
 *     FxRegistrySettingsInitialize @ 0x1C0057AF0 (FxRegistrySettingsInitialize.c)
 * Callees:
 *     memset @ 0x1C001D540 (memset.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C0058184 (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryStateSeparationDetection @ 0x1C005838C (FxVerifierQueryStateSeparationDetection.c)
 *     FxVerifierQueryTrackPower @ 0x1C0058434 (FxVerifierQueryTrackPower.c)
 */

void __fastcall FxDriverGlobalsInitializeDebugExtension(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *Key)
{
  FxDriverGlobalsDebugExtension *PoolWithTag; // rax
  FxDriverGlobalsDebugExtension *v5; // rbx

  PoolWithTag = (FxDriverGlobalsDebugExtension *)ExAllocatePoolWithTag(
                                                   ExDefaultNonPagedPoolType,
                                                   0x1C8uLL,
                                                   FxDriverGlobals->Tag);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(FxDriverGlobalsDebugExtension));
    v5->AllocatedTagTrackersLock.m_Lock = 0LL;
    v5->AllocatedTagTrackersLock.m_DbgFlagIsInitialized = 1;
    v5->StateSeparationDetection = FxStateSeparationDetectionNone;
    v5->AllocatedTagTrackersListHead.Blink = &v5->AllocatedTagTrackersListHead;
    v5->AllocatedTagTrackersListHead.Flink = &v5->AllocatedTagTrackersListHead;
    v5->TrackPower = FxTrackPowerNone;
    FxDriverGlobals->DebugExtension = v5;
    if ( Key )
    {
      v5->ObjectDebugInfo = FxVerifierGetObjectDebugInfo(Key, FxDriverGlobals);
      FxVerifierQueryTrackPower(Key, &v5->TrackPower);
      FxVerifierQueryStateSeparationDetection(Key, &v5->StateSeparationDetection);
    }
    v5->AllocatedMdlsLock = 0LL;
  }
}
