/*
 * XREFs of ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00D3190
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0033684 (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall LegacyInputDispatcher::PurgeInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v2; // edi

  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this) )
  {
    v2 = *((_DWORD *)this + 13) - *((_DWORD *)this + 10);
    if ( !v2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3063LL);
    memset((void *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 10)), 0, 8LL * v2);
    memset((void *)(*((_QWORD *)this + 4) + 16LL * *((unsigned int *)this + 10)), 0, 16LL * v2);
    *((_DWORD *)this + 13) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 10) = 64;
  }
}
