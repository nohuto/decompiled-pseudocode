/*
 * XREFs of ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0080690
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C0142BC0 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C0142F28 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00808F0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C008092C (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ForegroundBoost::SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (struct _EX_PUSH_LOCK *)&unk_1C02970E0);
  v7 = *(_QWORD *)(a1 + 424);
  v8 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      v8 = ((*(_DWORD *)(v7 + 12) & 0x800) != 0) + 1;
    else
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  }
  anonymous_namespace_::SetForegroundPriorityProcess(v7, a1, v8);
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
}
