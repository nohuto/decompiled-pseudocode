/*
 * XREFs of ?InitializeFromSharedResource@CSharedMatrixTransformMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0239494
 * Callers:
 *     ?Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0239270 (-Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedMatrixTransformMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedMatrixTransformMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_DWORD *)this + 20) = 1065353216;
  *((_DWORD *)this + 23) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 13) = a2;
  return result;
}
