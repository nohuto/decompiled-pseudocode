/*
 * XREFs of ?W32kCddStrokePathApiExt@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0196050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     W32kCddStrokePath @ 0x1C0271748 (W32kCddStrokePath.c)
 */

__int64 __fastcall W32kCddStrokePathApiExt(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8,
        struct _W32KCDD_ENG_CALLBACKS *a9)
{
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // esi
  int v12; // ebp
  int v13; // r14d

  v9 = 0;
  v10 = (int)a4;
  v11 = (int)a3;
  v12 = (int)a2;
  v13 = (int)a1;
  if ( qword_1C02D57A0 && (int)qword_1C02D57A0() >= 0 )
    return (unsigned int)W32kCddStrokePath(v13, v12, v11, v10, (__int64)a5, (__int64)a6, (__int64)a7, a8, (__int64)a9);
  return v9;
}
