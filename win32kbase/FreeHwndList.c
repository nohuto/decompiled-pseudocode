/*
 * XREFs of FreeHwndList @ 0x1C00D4410
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeHwndList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D68E0;
  if ( qword_1C02D68E0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D68E0(a1);
  return result;
}
