/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x18004B038
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3440 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002ED9C (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004B1A0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180087890 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??1?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801B2C90 (--1-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@deta.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int128 **v7; // rdx
  __int128 *v8; // rdi
  __int128 *v9; // rbx
  _OWORD *v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rdi
  _BYTE *i; // rax
  __int64 v14; // rdx
  int WorldTransform; // eax
  unsigned int v16; // ebx
  __int128 v17; // xmm1
  _BYTE *v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-E0h]
  _OWORD v28[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+70h] [rbp-90h]
  _BYTE v30[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v31; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  _BYTE v34[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v35; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  CMILMatrix::SetToIdentity((CMILMatrix *)v28);
  CMILMatrix::SetToIdentity((CMILMatrix *)v30);
  v8 = v7[1];
  v9 = *v7;
  v32 = v34;
  v31 = v34;
  v33 = &v35;
  v10 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                    &v31,
                    0LL,
                    v8 - v9);
  while ( v9 != v8 )
  {
    v11 = *v9++;
    *v10++ = v11;
  }
  v12 = *(_QWORD *)(*a2 + 8LL);
  for ( i = (_BYTE *)a2[1]; ; i = v32 )
  {
    v14 = *((_QWORD *)i - 1);
    if ( v14 == v12 )
      break;
    WorldTransform = CVisual::GetWorldTransform(a1, v14, 3LL, v30, 0LL, 0LL);
    v16 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v26 = 1739LL;
LABEL_18:
      v25 = (unsigned int)WorldTransform;
      goto LABEL_19;
    }
    CMILMatrix::Multiply((CMILMatrix *)v28, (const struct CMILMatrix *)v30);
    a1 = *((_QWORD *)v32 - 2);
    if ( ((v32 - v31) & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
    {
      v16 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\visualtreepath.cpp",
        (const char *)0x8000FFFFLL,
        v27);
      v25 = 2147549183LL;
      v26 = 1746LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
        (const char *)v25,
        v27);
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::~vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>(&v31);
      return v16;
    }
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v31,
      (v32 - 16 - v31) >> 4,
      1LL);
  }
  WorldTransform = CVisual::GetWorldTransform(a1, v14, 3LL, v30, 0LL, 0LL);
  v16 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    v26 = 1757LL;
    goto LABEL_18;
  }
  CMILMatrix::Multiply((CMILMatrix *)v28, (const struct CMILMatrix *)v30);
  v17 = v28[1];
  v18 = v31;
  v19 = v29;
  v20 = v32 - v31;
  *(_OWORD *)a4 = v28[0];
  v21 = v28[2];
  *(_OWORD *)(a4 + 16) = v17;
  v22 = v28[3];
  *(_OWORD *)(a4 + 32) = v21;
  v23 = v20 >> 4;
  *(_OWORD *)(a4 + 48) = v22;
  *(_DWORD *)(a4 + 64) = v19;
  if ( v23 )
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v31,
      0LL,
      v23);
    v18 = v31;
  }
  v31 = 0LL;
  if ( v18 == v34 )
    v18 = 0LL;
  operator delete(v18);
  return 0LL;
}
