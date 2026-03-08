/*
 * XREFs of ?IsCompatibleOutputScaling@COverlayContext@@AEAA_NAEBVCMILMatrix@@@Z @ 0x180087468
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180087264 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5BE0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsCompatibleOutputScaling(COverlayContext *this, const struct CMILMatrix *a2)
{
  char v3; // bl
  float v5; // xmm2_4

  v3 = 1;
  if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 11) <= 1u) && !*((_DWORD *)this + 17) )
    return 0;
  if ( *((_BYTE *)this + 11297) )
    return 0;
  if ( *((_BYTE *)this + 11300) )
    return 0;
  if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
    return 0;
  if ( *((float *)a2 + 10) != 1.0 )
    return 0;
  if ( *(float *)a2 < 1.0 )
    return 0;
  v5 = *((float *)a2 + 5);
  if ( v5 < 1.0 || *(float *)a2 <= 1.0 && v5 <= 1.0 )
    return 0;
  return v3;
}
