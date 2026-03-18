/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C023B2D0
 * Callers:
 *     ?Create@CSharedCompositionPointLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C023B114 (-Create@CSharedCompositionPointLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 * Callees:
 *     ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0232990 (-Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionPointLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionPointLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = DirectComposition::CCompositionPointLightMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
    if ( result >= 0 )
      *((_QWORD *)this + 21) = a2;
  }
  return result;
}
