/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800DEF00
 * Callers:
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800DEB64 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800DEC98 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180045F98 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800DF030 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  bool v6; // zf
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 (__fastcall *v12)(CShape *, _QWORD, __int128 *); // rbx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  BOOL v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF

  v17 = 0;
  v6 = CShape::IsAxisAlignedRectangle(this) == 0;
  v7 = *(_QWORD *)this;
  if ( v6 )
  {
    *(_QWORD *)&v18 = 0LL;
    v12 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int128 *))(v7 + 24);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
    v13 = v12(this, 0LL, &v18);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x82u, 0LL);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v18 + 56LL))(
              v18,
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
              0LL);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x84u, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
  }
  else
  {
    v18 = 0LL;
    v8 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v7 + 48))(this, &v18, 0LL);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x7Bu, 0LL);
    else
      v17 = IsPointInRect(a2, (const struct MilRectF *)&v18);
  }
  *a3 = v17;
  return v10;
}
