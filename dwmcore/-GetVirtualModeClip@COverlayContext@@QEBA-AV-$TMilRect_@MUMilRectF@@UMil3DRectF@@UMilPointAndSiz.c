/*
 * XREFs of ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18012B67A
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18012C2FE (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801DA5F4 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

float *__fastcall COverlayContext::GetVirtualModeClip(_QWORD *a1, float *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // xmm1_8
  float v6; // xmm0_4
  float *result; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 160LL))(*a1);
  v4 = *(_QWORD *)(v3 + 20);
  v5 = _mm_srli_si128(*(__m128i *)(v3 + 20), 8).m128i_u64[0];
  v6 = (float)(int)*(_OWORD *)(v3 + 20);
  result = a2;
  *a2 = v6;
  a2[1] = (float)SHIDWORD(v4);
  a2[2] = (float)(int)v5;
  a2[3] = (float)SHIDWORD(v5);
  return result;
}
