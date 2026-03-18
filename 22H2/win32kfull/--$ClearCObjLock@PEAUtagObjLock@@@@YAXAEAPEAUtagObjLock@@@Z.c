/*
 * XREFs of ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C013100C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     NtUserScheduleDispatchNotification @ 0x1C011CF40 (NtUserScheduleDispatchNotification.c)
 *     ??$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDisposition@@P6AHPEBX1@ZP6AXAEAU0@@Z@Z @ 0x1C011D40C (--$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDispositi.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearCObjLock<tagObjLock *>(_QWORD *a1)
{
  *a1 = 0LL;
}
