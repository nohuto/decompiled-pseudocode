/*
 * XREFs of sub_1800B9164 @ 0x1800B9164
 * Callers:
 *     sub_1800B78D0 @ 0x1800B78D0 (sub_1800B78D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_1800B9164(__int64 a1, _DWORD *a2, _BYTE *a3))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  if ( a3 )
    *a3 = 0;
  if ( a2 )
    *a2 = 0;
  result = qword_18019FA08;
  if ( qword_18019FA08 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_18019FA08(a1, a2, a3, 64LL);
  return result;
}
