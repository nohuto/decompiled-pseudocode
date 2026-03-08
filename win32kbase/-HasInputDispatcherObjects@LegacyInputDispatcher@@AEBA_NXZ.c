/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0033684
 * Callers:
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00317F0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00335F4 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00D3190 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 10);
  if ( v1 >= *((_DWORD *)this + 13) && v1 != 64 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3281LL);
  return *((_DWORD *)this + 10) != 64;
}
