/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1C00D3658
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetTimerCoalescingTolerance(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D6AA0;
  if ( qword_1C02D6AA0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D6AA0(a1);
  return result;
}
