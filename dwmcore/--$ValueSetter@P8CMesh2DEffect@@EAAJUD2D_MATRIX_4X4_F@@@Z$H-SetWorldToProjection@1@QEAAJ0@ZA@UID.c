/*
 * XREFs of ??$ValueSetter@P8CMesh2DEffect@@EAAJUD2D_MATRIX_4X4_F@@@Z$H?SetWorldToProjection@1@QEAAJ0@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x1802BB290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ValueSetter<long (CMesh2DEffect::*)(D2D_MATRIX_4X4_F),{public: long CMesh2DEffect::SetWorldToProjection(D2D_MATRIX_4X4_F),0},ID2D1EffectImpl>(
        CMesh2DEffect *a1,
        _OWORD *a2,
        int a3)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( a3 != 64 )
    return 2147942487LL;
  v4 = a2[1];
  v7[0] = *a2;
  v5 = a2[2];
  v7[1] = v4;
  v6 = a2[3];
  v7[2] = v5;
  v7[3] = v6;
  return CMesh2DEffect::SetWorldToProjection(a1, (struct D2D_MATRIX_4X4_F *)v7);
}
