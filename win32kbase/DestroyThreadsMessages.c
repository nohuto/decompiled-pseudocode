/*
 * XREFs of DestroyThreadsMessages @ 0x1C00B9B48
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DestroyThreadsMessages(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C02D6668;
  if ( qword_1C02D6668 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02D6668(a1, a2);
  return result;
}
