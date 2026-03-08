/*
 * XREFs of CmpWorkItemQueueWork @ 0x14038897C
 * Callers:
 *     CmpNotifyMachineHiveLoaded @ 0x1403887C0 (CmpNotifyMachineHiveLoaded.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140614CE8 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x140614E50 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x140614E70 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408185D0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140818CE8 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A24FA4 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
