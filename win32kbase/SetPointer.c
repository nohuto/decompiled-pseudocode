/*
 * XREFs of SetPointer @ 0x1C00D47A8
 * Callers:
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetPointer(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D6B60;
  if ( qword_1C02D6B60 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D6B60(a1);
  return result;
}
