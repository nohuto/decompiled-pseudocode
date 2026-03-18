/*
 * XREFs of ?InitializeFromSharedResource@CSharedVisualSurfaceMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C023BC68
 * Callers:
 *     ?Create@CSharedVisualSurfaceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C023BACC (-Create@CSharedVisualSurfaceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedVisualSurfaceMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedVisualSurfaceMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_DWORD *)this + 24) = 2;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 13) = a2;
  return result;
}
