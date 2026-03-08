/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1406909A0
 * Callers:
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x1406907F4 (EtwpReceiveNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x140693BC0 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140695580 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x140695998 (EtwpRundownNotifications.c)
 *     EtwpReceiveReplyDataBlock @ 0x1407741A4 (EtwpReceiveReplyDataBlock.c)
 *     EtwpQueueReply @ 0x140783E98 (EtwpQueueReply.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E46E0 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409E9FE0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
