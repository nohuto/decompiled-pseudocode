/*
 * XREFs of EditionParseDesktop @ 0x1C00AA47C
 * Callers:
 *     ApiSetEditionParseDesktop @ 0x1C00AA310 (ApiSetEditionParseDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionParseDesktop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // r9

  if ( !qword_1C02D6A50 )
    return 3221225659LL;
  v11 = a8;
  LOBYTE(v11) = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, __int64, __int64, __int64, __int64, __int64))qword_1C02D6A50)(
           a1,
           a2,
           a3,
           v11,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
