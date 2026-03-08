/*
 * XREFs of ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BAD00
 * Callers:
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BAC20 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

struct CProcessAttribution *__fastcall CResource::GetProcessAttributionNoRef(CResource *this)
{
  struct CProcessAttribution *result; // rax

  result = (struct CProcessAttribution *)*((_QWORD *)this + 6);
  if ( result )
    return (struct CProcessAttribution *)*((_QWORD *)result + 6);
  return result;
}
