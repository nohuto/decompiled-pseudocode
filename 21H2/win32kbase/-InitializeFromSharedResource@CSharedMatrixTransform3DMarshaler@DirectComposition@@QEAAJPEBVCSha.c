/*
 * XREFs of ?InitializeFromSharedResource@CSharedMatrixTransform3DMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0239430
 * Callers:
 *     ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C02390D8 (-Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_DWORD *)this + 20) = 1065353216;
  *((_DWORD *)this + 25) = 1065353216;
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 35) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 18) = a2;
  return result;
}
