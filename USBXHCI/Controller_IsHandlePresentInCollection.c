/*
 * XREFs of Controller_IsHandlePresentInCollection @ 0x1C0034130
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035620 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036230 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x1C0034180 (Controller_IsHandlePresentInCollectionLocked.c)
 */

char __fastcall Controller_IsHandlePresentInCollection(__int64 a1, __int64 a2)
{
  DynamicLock_Acquire(*(_QWORD *)(a1 + 672));
  LOBYTE(a2) = Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(a1 + 688), a2);
  DynamicLock_Release(*(_QWORD *)(a1 + 672));
  return a2;
}
