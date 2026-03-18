/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C00B7C94
 * Callers:
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00B7AE0 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00B7B60 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00B7C14 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 10);
  v5 = v3;
  if ( v3 >= *((_DWORD *)this + 13) && v3 != 64 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v3, a3);
    v5 = *((_DWORD *)this + 10);
  }
  return v5 != 64;
}
