/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C44DC
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180075C80 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800F0030 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180013C80 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180041938 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041E0C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004226C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(__int64 a1, __int64 *a2, CMILMatrix *a3, _OWORD *a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD **); // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v15; // eax
  CMILMatrix *v16; // rcx
  float v17; // xmm4_4
  float v18; // xmm5_4
  int v19; // eax
  _QWORD *v20; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v21[4]; // [rsp+48h] [rbp-69h] BYREF
  __int16 v22; // [rsp+88h] [rbp-29h]
  __int128 v23; // [rsp+98h] [rbp-19h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-9h] BYREF

  v4 = *a2;
  v20 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD **))(v4 + 48);
  v24 = 0LL;
  v10 = v8(a2, &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x5CDu, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, CMILMatrix *, __int128 *))(*v20 + 8LL))(v20, a3, &v24);
    if ( a4 )
      *a4 = v24;
    if ( a2 == (__int64 *)((*(_QWORD *)(a1 + 864) + 64LL) & -(__int64)(*(_QWORD *)(a1 + 864) != 0LL)) )
    {
      v15 = *(_DWORD *)(a1 + 676) - *(_DWORD *)(a1 + 692);
      v23 = 0LL;
      CMILMatrix::Translate(a3, (float)(*(_DWORD *)(a1 + 672) - *(_DWORD *)(a1 + 688)), (float)v15);
      CMILMatrix::Transform2DBoundsHelper<0>(v16, (__int64)&v24, (float *)&v23);
      if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(*(CCompositionSurfaceBitmap **)(a1 + 864)) == 1 )
      {
        if ( *(_BYTE *)(a1 + 917) )
          CMILMatrix::Translate(
            a3,
            (float)((float)(*(_DWORD *)(a1 + 680) - *(_DWORD *)(a1 + 688))
                  - (float)(*(_DWORD *)(a1 + 672) - *(_DWORD *)(a1 + 688)))
          - (float)(*((float *)&v23 + 2) - *(float *)&v23),
            0.0);
      }
      else
      {
        v17 = *((float *)&v23 + 2) - *(float *)&v23;
        v18 = (float)(*(_DWORD *)(a1 + 680) - *(_DWORD *)(a1 + 672));
        if ( (COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - (float)(*((float *)&v23 + 2) - *(float *)&v23)) & _xmm) > 0.00390625
           || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                             (float)(*(_DWORD *)(a1 + 684) - *(_DWORD *)(a1 + 676))
                           - (float)(*((float *)&v23 + 3) - *((float *)&v23 + 1))) & _xmm) > 0.00390625)
          && v17 > 0.0
          && (float)(*((float *)&v23 + 3) - *((float *)&v23 + 1)) > 0.0 )
        {
          v19 = *(_DWORD *)(a1 + 684) - *(_DWORD *)(a1 + 676);
          v21[3] = _xmm;
          v22 = 32085;
          v21[0] = _xmm;
          v21[1] = _xmm;
          v21[2] = _xmm;
          CMILMatrix::Scale(
            (CMILMatrix *)v21,
            v18 / v17,
            (float)v19 / (float)(*((float *)&v23 + 3) - *((float *)&v23 + 1)),
            1.0);
          CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v21, a3);
        }
      }
    }
  }
  if ( v20 )
  {
    v13 = (__int64)v20 + *(int *)(v20[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v12;
}
