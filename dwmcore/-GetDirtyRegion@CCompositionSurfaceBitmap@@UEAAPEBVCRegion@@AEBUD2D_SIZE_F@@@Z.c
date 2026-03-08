/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x18000C820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUMilRectF@@@Z @ 0x18000C7C8 (-GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUMilRectF@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x18000D178 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180041458 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct CRegion *__fastcall CCompositionSurfaceBitmap::GetDirtyRegion(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2)
{
  CCompositionSurfaceBitmap *v2; // rdi
  _DWORD **v5; // rbx
  char LetterboxingMargins; // al
  struct IBitmapRealization *RenderingRealization; // rax
  __int64 v8; // rcx
  char v9; // al
  CRegion *v10; // rcx
  char v11; // bl
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  int *v16; // rax
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  int v20; // edi
  _DWORD *v21; // rdx
  _DWORD *v22; // r8
  __int64 v24; // rcx
  _QWORD *v25; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v26[64]; // [rsp+30h] [rbp-59h] BYREF
  int v27; // [rsp+70h] [rbp-19h]
  __int128 v28; // [rsp+80h] [rbp-9h] BYREF
  __int128 v29; // [rsp+90h] [rbp+7h]
  __int128 v30; // [rsp+A0h] [rbp+17h] BYREF
  _BYTE v31[16]; // [rsp+B0h] [rbp+27h] BYREF

  v2 = (CCompositionSurfaceBitmap *)((char *)this - 96);
  v5 = 0LL;
  LetterboxingMargins = CCompositionSurfaceBitmap::GetLetterboxingMargins(
                          (CCompositionSurfaceBitmap *)((char *)this - 96),
                          (struct MilRectF *)v31);
  if ( *((_QWORD *)this + 2) || LetterboxingMargins )
  {
    RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization(v2);
    if ( RenderingRealization )
    {
      v8 = *(int *)(*((_QWORD *)RenderingRealization + 1) + 4LL);
      v25 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))((char *)RenderingRealization + v8 + 8))(
             (__int64)RenderingRealization + v8 + 8,
             &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
             &v25) < 0
        || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25) )
      {
        v27 = 0;
        v29 = 0LL;
        v9 = CCompositionSurfaceBitmap::CalcImageTransform(v2, a2, (CMILMatrix *)v26);
        v10 = (CRegion *)*((_QWORD *)this + 2);
        v11 = v9;
        if ( v10 )
        {
          v28 = 0uLL;
          CRegion::GetBoundingRect(v10, (struct MilRectU *)&v28);
          *((float *)&v28 + 2) = (float)SDWORD2(v28);
          *((float *)&v28 + 1) = (float)SDWORD1(v28);
          *((float *)&v28 + 3) = (float)SHIDWORD(v28);
          *(float *)&v28 = (float)(int)v28;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v28);
          v12 = *(float *)&v28;
          if ( *(float *)&v29 > *(float *)&v28 )
          {
            LODWORD(v28) = v29;
            v12 = *(float *)&v29;
          }
          v13 = *((float *)&v28 + 1);
          if ( *((float *)&v29 + 1) > *((float *)&v28 + 1) )
          {
            DWORD1(v28) = DWORD1(v29);
            v13 = *((float *)&v29 + 1);
          }
          v14 = *((float *)&v28 + 2);
          if ( *((float *)&v28 + 2) > *((float *)&v29 + 2) )
          {
            DWORD2(v28) = DWORD2(v29);
            v14 = *((float *)&v29 + 2);
          }
          v15 = *((float *)&v28 + 3);
          if ( *((float *)&v28 + 3) > *((float *)&v29 + 3) )
          {
            HIDWORD(v28) = HIDWORD(v29);
            v15 = *((float *)&v29 + 3);
          }
          if ( v14 <= v12 || v15 <= v13 )
            v28 = 0uLL;
        }
        else
        {
          v28 = v29;
        }
        if ( v11 )
        {
          v30 = 0LL;
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v26, (struct MilRectF *)&v28);
          v28 = v30;
        }
        v5 = (_DWORD **)((char *)this + 24);
        if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v28)
          || (v16 = (int *)PixelAlign(&v30, &v28), v17 = v16[2], v18 = *v16, *v16 >= v17)
          || (v19 = v16[1], v20 = v16[3], v19 >= v20) )
        {
          **v5 = 0;
        }
        else
        {
          v21 = *v5;
          v22 = *v5 + 7;
          *v21 = 2;
          *v22 = v18;
          v22[1] = v17;
          v21[1] = v18;
          v21[4] = (_DWORD)v22 - ((_DWORD)v21 + 12);
          v21[2] = v17;
          v21[3] = v19;
          v21[6] = (_DWORD)v22 - ((_DWORD)v21 + 20) + 8;
          v21[5] = v20;
        }
      }
      if ( v25 )
      {
        v24 = (__int64)v25 + *(int *)(v25[1] + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  return (const struct CRegion *)v5;
}
