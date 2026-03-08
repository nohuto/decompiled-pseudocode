/*
 * XREFs of ?GetLightInfo@CCompositionEnvironmentLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180107190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionEnvironmentLight::GetLightInfo(
        CCompositionEnvironmentLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  *(_DWORD *)a4 = 4;
  return 0LL;
}
