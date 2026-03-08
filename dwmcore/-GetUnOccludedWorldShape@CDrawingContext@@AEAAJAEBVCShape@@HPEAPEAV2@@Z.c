/*
 * XREFs of ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x18000F130
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000EFB4 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18000EFB4.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801D2240 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008470 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x1801E4098 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

__int64 __fastcall CDrawingContext::GetUnOccludedWorldShape(
        CDrawingContext *this,
        const struct CShape *a2,
        int a3,
        struct CShape **a4)
{
  __int64 v5; // r15
  unsigned int v9; // ebx
  CMILMatrix *TopByReference; // rax
  __int64 v12; // rax
  int v13; // r8d
  const struct CMILMatrix *v14; // rax
  __int64 (__fastcall *v15)(const struct CShape *, __int128 *, const struct CMILMatrix *, struct CShape **); // r11
  int v16; // eax
  unsigned int v17; // ecx
  __int128 v18; // [rsp+30h] [rbp-78h] BYREF
  __int128 v19; // [rsp+40h] [rbp-68h] BYREF
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 1009);
  v9 = -2003304309;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, 0LL) )
    {
      if ( a3 )
      {
        if ( !(**((unsigned __int8 (__fastcall ***)(char *))this + 3))((char *)this + 24) )
        {
          TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
          if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
          {
            v12 = *(_QWORD *)a2;
            v18 = 0LL;
            if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v12 + 48))(a2, &v18, 0LL) >= 0 )
            {
              v19 = 0LL;
              CDrawingContext::CalcWorldSpaceClippedBounds((__int64)this, (__int64)&v18, (float *)&v19);
              LOBYTE(v13) = 1;
              v20 = 0LL;
              if ( (unsigned __int8)COcclusionContext::GetLargestOccluder(
                                      v5,
                                      (unsigned int)&v19,
                                      v13,
                                      a3,
                                      (__int64)&v20) )
              {
                v14 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
                v16 = v15(a2, &v20, v14, a4);
                v9 = v16;
                if ( v16 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x148Au, 0LL);
              }
            }
          }
        }
      }
    }
  }
  return v9;
}
