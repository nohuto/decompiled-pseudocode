/*
 * XREFs of ?ReleaseAllReferences@CCompositionSurfaceBitmapMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C7170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    DxgkReleaseCompositionObjectReference(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
}
