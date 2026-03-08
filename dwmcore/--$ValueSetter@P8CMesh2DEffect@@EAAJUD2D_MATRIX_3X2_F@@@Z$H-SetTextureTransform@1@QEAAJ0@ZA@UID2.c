/*
 * XREFs of ??$ValueSetter@P8CMesh2DEffect@@EAAJUD2D_MATRIX_3X2_F@@@Z$H?SetTextureTransform@1@QEAAJ0@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x1802BB240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ValueSetter<long (CMesh2DEffect::*)(D2D_MATRIX_3X2_F),{public: long CMesh2DEffect::SetTextureTransform(D2D_MATRIX_3X2_F),0},ID2D1EffectImpl>(
        CMesh2DEffect *a1,
        __int128 *a2,
        int a3)
{
  __int64 v4; // xmm1_8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  if ( a3 != 24 )
    return 2147942487LL;
  v4 = *((_QWORD *)a2 + 2);
  v5 = *a2;
  v6 = v4;
  return CMesh2DEffect::SetTextureTransform(a1, (struct D2D_MATRIX_3X2_F *)&v5);
}
