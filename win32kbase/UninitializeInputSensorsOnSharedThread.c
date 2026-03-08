/*
 * XREFs of UninitializeInputSensorsOnSharedThread @ 0x1C0218CC8
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C021CC00 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     CleanupSensorExplicitly @ 0x1C0031540 (CleanupSensorExplicitly.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0093DD0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C0095480 (IOCPDispatcher_Destroy.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall UninitializeInputSensorsOnSharedThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    IOCPDispatcher::Close(*(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 1);
  v5 = 3LL;
  v8 = (_DWORD *)(SGDGetUserSessionState(v4, a2, a3, a4) + 3296);
  do
  {
    if ( (unsigned int)(*v8 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1185);
    if ( *v8 == 2 )
      CleanupSensorExplicitly((unsigned int)v8[4], v6, v9, v10);
    v8 += 12;
    --v5;
  }
  while ( v5 );
  return IOCPDispatcher_Destroy(v7, v6);
}
