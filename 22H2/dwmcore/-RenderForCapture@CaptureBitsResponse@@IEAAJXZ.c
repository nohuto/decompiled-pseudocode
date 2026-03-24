/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180042FFC
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180043334 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180016774 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18003E07C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x18003E34C (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041E0C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004226C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800432F4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x1800754F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007A778 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x18008FA40 (-CleanTree@CDesktopTree@@UEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008FC84 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DF12C (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F96D0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v1; // rbx
  CDesktopTree *v3; // r14
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rcx
  unsigned __int8 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // edi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int128 *, char *); // rbx
  struct IDeviceTarget *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rcx
  CRenderTargetBitmap *v32; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v33[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v34; // [rsp+88h] [rbp-80h]
  _BYTE v35[64]; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+D8h] [rbp-30h]
  __int128 v37; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-10h] BYREF
  __int128 *v39; // [rsp+100h] [rbp-8h]
  __int128 v40; // [rsp+108h] [rbp+0h] BYREF
  int v41; // [rsp+118h] [rbp+10h]
  int v42; // [rsp+11Ch] [rbp+14h]

  v1 = 0LL;
  v38 = 0LL;
  v33[0] = _xmm;
  v3 = 0LL;
  v33[2] = _xmm;
  v33[1] = _xmm;
  v37 = 0LL;
  v34 = 32085;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 417));
  v33[3] = _xmm;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 418));
  v6 = *((_QWORD *)this + 6);
  v32 = 0LL;
  v36 = 0;
  v7 = *(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 200LL);
  LODWORD(v39) = _mm_cvtepi32_ps(v4).m128_u32[0];
  HIDWORD(v39) = _mm_cvtepi32_ps(v5).m128_u32[0];
  if ( v7(v6) )
    v3 = (CDesktopTree *)*((_QWORD *)this + 6);
  CComposition::ShowHideCursors(g_pComposition, 0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 414) - 1.0) & _xmm) >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)v33, *((float *)this + 414), *((float *)this + 414), 1.0);
  CMILMatrix::Translate(
    (CMILMatrix *)v33,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 415)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 416)) ^ _xmm));
  v8 = (_QWORD *)*((_QWORD *)this + 6);
  if ( *(_BYTE *)(v8[7] + 88LL) )
  {
    if ( v3 )
    {
      v23 = *((_QWORD *)v3 + 2) + 520LL;
      AcquireSRWLockExclusive((PSRWLOCK)v23);
      *(_DWORD *)(v23 + 8) = GetCurrentThreadId();
      v11 = CDesktopTree::CleanTree(v3);
      v24 = *((_QWORD *)v3 + 2) + 520LL;
      *(_DWORD *)(v24 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v24);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v11, 0x184u, 0LL);
        goto LABEL_17;
      }
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 208LL))(v8);
      v11 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x188u, 0LL);
        goto LABEL_17;
      }
    }
  }
  v9 = CDrawingContext::Create(&v32);
  v11 = v9;
  if ( v9 >= 0 )
  {
    *((_BYTE *)g_pComposition + 1129) = 1;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v35, (const struct CMILMatrix *)v33) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v35);
      v12 = *((_QWORD *)this + 6);
      v38 = 1LL;
      v13 = *(__int64 (__fastcall **)(__int64, __int128 *, char *))(*(_QWORD *)v12 + 216LL);
      v39 = &v37;
      gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>((__int64 *)&v40, &v38);
      v13(v12, &v40, (char *)this + 72);
    }
    else
    {
      v37 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v14 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    v1 = v32;
    v15 = CDrawingContext::BeginFrame(v32, v14, (const struct CMILMatrix *)v33, &stru_1802ACF30, 0LL);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1A5u, 0LL);
    }
    else
    {
      ++dword_180347288;
      v41 = 0;
      v42 = 0;
      v40 = v37;
      v17 = CDrawingContext::DrawVisualTree(v1, 2, 0);
      v11 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1AEu, 0LL);
      }
      else
      {
        if ( !v3
          || (v19 = *((_QWORD *)v3 + 739)) == 0
          || (v28 = CComposeTop::FullRender(v19, v1, v33, &v37), v11 = v28, v28 >= 0) )
        {
          v20 = CDrawingContext::EndFrame(v1);
          v11 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1C1u, 0LL);
          }
          else if ( g_LockAndReadOffscreenTarget )
          {
            v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
            v31 = *(int *)(*(_QWORD *)(v30 + 8) + 16LL) + v30 + 8;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 24LL))(
              v31,
              ((unsigned __int64)v1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64));
          }
          goto LABEL_16;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x1BCu, 0LL);
      }
      CDrawingContext::EndFrame(v1);
    }
LABEL_16:
    *((_BYTE *)g_pComposition + 1129) = 0;
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x18Cu, 0LL);
  v1 = v32;
LABEL_17:
  CComposition::RestoreCursors(g_pComposition);
  if ( v1 )
    CRenderTargetBitmap::Release(v1);
  return (unsigned int)v11;
}
