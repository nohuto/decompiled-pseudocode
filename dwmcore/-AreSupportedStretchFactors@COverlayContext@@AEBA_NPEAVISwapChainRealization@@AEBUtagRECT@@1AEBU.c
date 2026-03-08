/*
 * XREFs of ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1AEBUDXGI_MULTIPLANE_OVERLAY_GROUP_CAPS@@_N@Z @ 0x1801D84E0
 * Callers:
 *     ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801DA8EC (-IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801DAF38 (-IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBV-$TMilRect@I.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012A09C (McTemplateU0xq_EventWriteTransfer.c)
 */

char __fastcall COverlayContext::AreSupportedStretchFactors(
        COverlayContext *this,
        struct ISwapChainRealization *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct DXGI_MULTIPLANE_OVERLAY_GROUP_CAPS *a5,
        bool a6)
{
  char v6; // bl
  int v7; // r10d
  int v8; // ecx
  __m128i v9; // xmm2
  int v10; // eax
  float v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  _QWORD *v14; // rax
  COverlayContext *v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = this;
  v6 = 0;
  v7 = a3->right - a3->left;
  v8 = a3->bottom - a3->top;
  v9 = _mm_cvtsi32_si128(a4->right - a4->left);
  v10 = v8;
  if ( !a6 )
    v10 = a3->right - a3->left;
  LODWORD(v11) = _mm_cvtepi32_ps(v9).m128_u32[0];
  if ( !a6 )
    v7 = v8;
  LODWORD(v12) = COERCE_UNSIGNED_INT(v11 / (float)v10) & _xmm;
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)(a4->bottom - a4->top) / (float)v7) & _xmm;
  if ( *((float *)a5 + 3) >= fmaxf(v12, v13) && fminf(v12, v13) >= *((float *)a5 + 4) )
    return 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
  {
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, COverlayContext **))(*(_QWORD *)a2 + 40LL))(
                      a2,
                      &v16);
    McTemplateU0xq_EventWriteTransfer(
      *(unsigned int *)v14,
      (__int64)&EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
      *(unsigned int *)v14 | (unsigned __int64)((__int64)(int)HIDWORD(*v14) << 32),
      4);
  }
  return v6;
}
