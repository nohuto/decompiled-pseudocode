/*
 * XREFs of ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z @ 0x1801DAF98
 * Callers:
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801D9CA8 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::IsQualcommRotationWorkaroundNeeded(COverlayContext *this, const struct CMILMatrix *a2)
{
  bool result; // al
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4

  result = 0;
  if ( *((_BYTE *)this + 11300) )
  {
    v3 = *(float *)a2;
    v4 = *(float *)a2 <= 1.0 ? 1.0 - v3 : v3 - 1.0;
    if ( v4 > 0.0000011920929 )
    {
      v5 = v3 <= -1.0 ? -1.0 - v3 : v3 - -1.0;
      if ( v5 > 0.0000011920929 )
        return 1;
    }
    v6 = *((float *)a2 + 5);
    v7 = v6 <= 1.0 ? 1.0 - v6 : v6 - 1.0;
    if ( v7 > 0.0000011920929 )
    {
      v8 = v6 <= -1.0 ? -1.0 - v6 : v6 - -1.0;
      if ( v8 > 0.0000011920929 )
        return 1;
    }
  }
  return result;
}
