/*
 * XREFs of InbvSolidColorFill @ 0x14054E790
 * Callers:
 *     DisplayBootBitmap @ 0x1403A9958 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall InbvSolidColorFill(__int64 a1, __int64 a2, unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140C6AC58;
  if ( qword_140C6AC58 )
  {
    result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_140C6AC58 + 32);
    if ( result )
      return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, a3);
  }
  return result;
}
