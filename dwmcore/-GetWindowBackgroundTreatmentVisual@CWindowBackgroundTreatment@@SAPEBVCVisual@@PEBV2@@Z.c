/*
 * XREFs of ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z @ 0x180013F44
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CVisual *__fastcall CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(
        const struct CVisual *a1)
{
  const struct CVisual *result; // rax

  for ( result = a1; result; result = (const struct CVisual *)*((_QWORD *)result + 11) )
  {
    if ( (**((_DWORD **)result + 29) & 0x200000) != 0 )
      break;
  }
  return result;
}
