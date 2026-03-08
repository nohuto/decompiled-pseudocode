/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007B454
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007A8C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x18000D1AC (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(__int64 a1, __int64 *a2, CMILMatrix *a3, _OWORD *a4)
{
  __int64 v4; // rax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  __int64 v12; // rcx
  CCompositionSurfaceBitmap *v14; // rdi
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  _QWORD *v20; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v21[80]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v22; // [rsp+98h] [rbp-19h]
  __int128 v23; // [rsp+A8h] [rbp-9h] BYREF

  v4 = *a2;
  v20 = 0LL;
  v23 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD **))(v4 + 64))(a2, &v20);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x573u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, CMILMatrix *, __int128 *))(*v20 + 8LL))(v20, a3, &v23);
    if ( a4 )
      *a4 = v23;
    if ( *(_BYTE *)(a1 + 896) )
    {
      v14 = (CCompositionSurfaceBitmap *)CPtrArrayBase::operator[](a1 + 784, 0LL);
      if ( a2 == (__int64 *)(((unsigned __int64)v14 + 72) & -(__int64)(v14 != 0LL)) )
      {
        v15 = (float)*(int *)(a1 + 748);
        v16 = (float)*(int *)(a1 + 744);
        v22 = 0LL;
        CMILMatrix::Translate(a3, v16, v15);
        CMILMatrix::Transform2DBoundsHelper<0>(a3, (struct MilRectF *)&v23);
        if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v14) == 1 )
        {
          if ( *(_BYTE *)(a1 + 892) )
            CMILMatrix::Translate(
              a3,
              (float)(*(_DWORD *)(a1 + 752) - *(_DWORD *)(a1 + 744)) - (float)(*((float *)&v22 + 2) - *(float *)&v22),
              0.0);
        }
        else if ( (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)(*(_DWORD *)(a1 + 752) - *(_DWORD *)(a1 + 744))
                                - (float)(*((float *)&v22 + 2) - *(float *)&v22)) & _xmm) > 0.00390625
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)(*(_DWORD *)(a1 + 756) - *(_DWORD *)(a1 + 748))
                                - (float)(*((float *)&v22 + 3) - *((float *)&v22 + 1))) & _xmm) > 0.00390625)
               && (float)(*((float *)&v22 + 2) - *(float *)&v22) > 0.0 )
        {
          v17 = *((float *)&v22 + 3) - *((float *)&v22 + 1);
          if ( (float)(*((float *)&v22 + 3) - *((float *)&v22 + 1)) > 0.0 )
          {
            CMILMatrix::SetToIdentity((CMILMatrix *)v21);
            CMILMatrix::Scale(
              (CMILMatrix *)v21,
              v19 / v18,
              (float)(*(_DWORD *)(a1 + 756) - *(_DWORD *)(a1 + 748)) / v17,
              1.0);
            CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v21, a3);
          }
        }
      }
    }
  }
  if ( v20 )
  {
    v12 = (__int64)v20 + *(int *)(v20[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v11;
}
