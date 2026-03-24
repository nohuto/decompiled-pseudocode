/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140718224
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405FC900 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x14067766C (EtwpRundownNotifications.c)
 *     EtwpQueueReply @ 0x14069E710 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406A3D70 (EtwpReceiveReplyDataBlock.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1407149E4 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1407150A4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14071802C (EtwpReceiveNotification.c)
 *     EtwpDisallowedGuidAddition @ 0x140933C54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140933F3C (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093F990 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
