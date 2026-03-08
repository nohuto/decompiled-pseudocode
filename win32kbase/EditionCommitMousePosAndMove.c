/*
 * XREFs of EditionCommitMousePosAndMove @ 0x1C02717CC
 * Callers:
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C023CB20 (ApiSetEditionCommitMousePosAndMove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionCommitMousePosAndMove(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  if ( qword_1C02D7D40 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, __int64, int, int, int, int, __int64))qword_1C02D7D40)(
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
