/*
 * XREFs of ?SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0032450
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C002D3BC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C002D3BC.c)
 *     ?SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0030FF0 (-SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCRe.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v7; // rdx
  int *v8; // rcx
  int v9; // [rsp+30h] [rbp-28h]
  bool *v10; // [rsp+40h] [rbp-18h]

  switch ( a3 )
  {
    case 1:
      v7 = this + 9;
      v10 = a5;
      v8 = (int *)(this + 2);
      v9 = 64;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               v7,
               (unsigned int *)a4,
               1,
               17,
               v8,
               v9,
               0,
               v10);
    case 2:
      v7 = this + 10;
      v10 = a5;
      v8 = (int *)(this + 2);
      v9 = 256;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               v7,
               (unsigned int *)a4,
               1,
               17,
               v8,
               v9,
               0,
               v10);
    case 3:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               this + 8,
               (unsigned int *)a4,
               1,
               67,
               (int *)this + 4,
               128,
               0,
               a5);
    default:
      return DirectComposition::CShapeMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
}
