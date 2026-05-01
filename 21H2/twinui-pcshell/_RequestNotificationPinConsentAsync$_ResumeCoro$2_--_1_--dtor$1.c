/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$1 @ 0x18014CEA7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800CEA60 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_2_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 2704) = *(_QWORD *)(a2 + 2848) + 64LL;
  std::wstring::~wstring(*(_QWORD **)(a2 + 2704));
}
