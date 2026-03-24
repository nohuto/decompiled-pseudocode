/*
 * XREFs of ?UninitializeInputSensors@@YAXXZ @ 0x1C01B1CF4
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01B1FC0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     CleanupSensorExplicitly @ 0x1C00A2AA0 (CleanupSensorExplicitly.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00A8F60 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C00B38A0 (IOCPDispatcher_Destroy.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UninitializeInputSensors(__int64 a1, unsigned int a2)
{
  struct IRegisterInputDispatcherObjects *v2; // rcx
  __int64 v3; // rdi
  int *v4; // rbx
  int v5; // eax

  v2 = gpIOCPDispatcher;
  if ( gpIOCPDispatcher )
    IOCPDispatcher::Close(gpIOCPDispatcher, 1);
  v3 = 3LL;
  v4 = (int *)&unk_1C0245020;
  do
  {
    v5 = *(v4 - 4);
    if ( v5 == 2 )
    {
      CleanupSensorExplicitly(*v4);
    }
    else if ( v5 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 356);
    }
    v4 += 12;
    --v3;
  }
  while ( v3 );
  IOCPDispatcher_Destroy((__int64)v2, a2);
}
