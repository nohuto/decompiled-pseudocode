/*
 * XREFs of CleanupSensorExplicitly @ 0x1C00A2AA0
 * Callers:
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C01B1CF4 (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0042ABC (isInputVirtualizationEnabled.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0046904 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00A2B2C (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ @ 0x1C01BA188 (-ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ.c)
 */

void __fastcall CleanupSensorExplicitly(int a1)
{
  __int64 v1; // rdi
  CBaseInput *v2; // rbx

  v1 = 6LL * a1;
  v2 = *(&qword_1C0245018 + 6 * a1);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 773LL);
    v2 = *(&qword_1C0245018 + v1);
  }
  if ( CBaseInput::ExecutingOnSensorHostingThread(v2) )
  {
    if ( isInputVirtualizationEnabled() )
      CBaseInput::ivUnregisterChildLifetimeNotifications(v2);
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v2 + 40LL))(v2);
    CRIMBase::CleanupHandles(v2);
    *((_QWORD *)v2 + 159) = 0LL;
  }
}
