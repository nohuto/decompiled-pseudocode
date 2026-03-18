/*
 * XREFs of ?InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00AF820
 * Callers:
 *     ?InitializeFromSharedResource@CSharedReadCompositionLightMarshaler@DirectComposition@@MEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00AF800 (-InitializeFromSharedResource@CSharedReadCompositionLightMarshaler@DirectComposition@@MEAAJPEBVC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedReadMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedReadMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
  {
    *((_QWORD *)this + 8) = a2;
    *((_DWORD *)this + 18) = *((_DWORD *)a2 + 3);
  }
  return result;
}
