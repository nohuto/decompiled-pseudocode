/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$6 @ 0x18014CE22
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ @ 0x18011B1D4 (--1-$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_2_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 2744) = *(_QWORD *)(a2 + 2848) + 160LL;
  std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(*(_QWORD *)(a2 + 2744));
}
