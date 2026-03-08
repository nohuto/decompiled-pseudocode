/*
 * XREFs of ?SetReferenceProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v7; // r8d
  int *v9; // rcx
  struct DirectComposition::CResourceMarshaler **v10; // rdx

  if ( !a3 )
  {
    v9 = (int *)(this + 2);
    v10 = this + 9;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v10, (__int64)a4, 1, 196, v9, 0, 0, a5);
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v9 = (int *)(this + 2);
    v10 = this + 10;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v10, (__int64)a4, 1, 196, v9, 0, 0, a5);
  }
  if ( v7 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             this + 11,
             (__int64)a4,
             1,
             42,
             (int *)this + 4,
             0,
             0,
             a5);
  else
    return 3221225485LL;
}
