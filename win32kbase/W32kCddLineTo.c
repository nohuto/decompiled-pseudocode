/*
 * XREFs of W32kCddLineTo @ 0x1C02716AC
 * Callers:
 *     ?W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0195F90 (-W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddLineTo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  if ( qword_1C02D5798 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int, int, __int64, int, __int64))qword_1C02D5798)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  else
    return 0LL;
}
