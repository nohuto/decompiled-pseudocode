/*
 * XREFs of ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x1800D8B74
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800D89A0 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVectorShape@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D8CE0 (-ConvertInnerToOuterBounds@CVectorShape@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShapeBoundingContext::PostSubgraph(CShapeBoundingContext *this, bool *a2)
{
  __int64 v3; // rsi
  bool v4; // zf
  __int64 v5; // rbx
  __int64 *v6; // rcx
  unsigned __int64 v7; // xmm0_8
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_MATRIX_3X2_F v12; // [rsp+30h] [rbp-20h] BYREF

  *a2 = 1;
  v3 = *((_QWORD *)this + 1);
  v4 = *(_BYTE *)(v3 + 97) == 0;
  v11 = *(_OWORD *)(v3 + 80);
  if ( !v4 )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(__int64 **)(v3 + 72);
    if ( *((_BYTE *)this + 72) && v6 )
    {
      if ( v5 )
        v7 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      else
        v7 = *((_QWORD *)this + 8);
      v8 = *v6;
      *(_QWORD *)&v11 = v7;
      (*(void (__fastcall **)(__int64 *, __int128 *, struct D2D_MATRIX_3X2_F *))(v8 + 208))(v6, &v11, &v12);
      CVectorShape::ConvertInnerToOuterBounds((CVectorShape *)v3, &v12);
      v11 = *(_OWORD *)(v3 + 80);
    }
    if ( v5 )
    {
      v4 = *(_BYTE *)(v5 + 97) == 0;
      *(_OWORD *)&v12.m11 = *(_OWORD *)(v5 + 80);
      if ( v4 )
        *(_OWORD *)&v12.m11 = v11;
      else
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v12.m11, (float *)&v11);
      v9 = *(_OWORD *)&v12.m11;
      *(_WORD *)(v5 + 96) = 256;
      *(_OWORD *)(v5 + 80) = v9;
    }
  }
  *((_BYTE *)this + 72) = 1;
  return 0LL;
}
