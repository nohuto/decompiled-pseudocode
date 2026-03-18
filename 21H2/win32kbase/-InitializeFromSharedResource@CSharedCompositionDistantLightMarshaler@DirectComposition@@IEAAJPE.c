/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionDistantLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00B3640
 * Callers:
 *     ?Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00B3360 (-Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionDistantLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionDistantLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 96) = 1;
  *((_DWORD *)this + 34) = -1082130432;
  *(_OWORD *)((char *)this + 104) = xmmword_1C025A658;
  *((_DWORD *)this + 35) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 18) = a2;
  return result;
}
