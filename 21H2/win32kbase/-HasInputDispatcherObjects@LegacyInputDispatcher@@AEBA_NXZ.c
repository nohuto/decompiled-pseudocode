/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0049250
 * Callers:
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00491C4 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00A9FE0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00B6E90 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v1; // eax
  unsigned int v3; // edx

  v1 = *((_DWORD *)this + 10);
  v3 = v1;
  if ( v1 >= *((_DWORD *)this + 13) && v1 != 64 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3129LL);
    v3 = *((_DWORD *)this + 10);
  }
  return v3 != 64;
}
