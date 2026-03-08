/*
 * XREFs of ?W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0195F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     W32kCddLineTo @ 0x1C02716AC (W32kCddLineTo.c)
 */

__int64 __fastcall W32kCddLineToApiExt(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9,
        struct _W32KCDD_ENG_CALLBACKS *a10)
{
  unsigned int v10; // ebx
  int v12; // esi
  int v13; // ebp
  int v14; // r14d

  v10 = 0;
  v12 = (int)a3;
  v13 = (int)a2;
  v14 = (int)a1;
  if ( qword_1C02D5790 && (int)qword_1C02D5790() >= 0 )
    return (unsigned int)W32kCddLineTo(v14, v13, v12, a4, a5, a6, a7, (__int64)a8, a9, (__int64)a10);
  return v10;
}
