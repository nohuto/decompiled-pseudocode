/*
 * XREFs of EditionPostInputMessage @ 0x1C0007444
 * Callers:
 *     ApiSetEditionPostInputMessage @ 0x1C00072A4 (ApiSetEditionPostInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  if ( qword_1C02D7548 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, int, __int64, __int64, int, __int64, __int64))qword_1C02D7548)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11);
  else
    return 0LL;
}
