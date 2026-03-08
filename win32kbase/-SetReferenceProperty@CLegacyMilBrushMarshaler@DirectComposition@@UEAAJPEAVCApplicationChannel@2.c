/*
 * XREFs of ?SetReferenceProperty@CLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C025D360
 * Callers:
 *     ?SetReferenceProperty@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C025D290 (-SetReferenceProperty@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CLegacyMilBrushMarshaler::SetReferenceProperty(
        DirectComposition::CLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v6; // r8d
  int v7; // r8d
  struct DirectComposition::CResourceMarshaler **v9; // rdx
  int v10; // [rsp+30h] [rbp-28h]
  bool *v11; // [rsp+40h] [rbp-18h]

  *a5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 8,
             (__int64)a4,
             1,
             62,
             (int *)this + 4,
             64,
             0,
             a5);
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 3221225485LL;
    v11 = a5;
    v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 80);
    v10 = 256;
  }
  else
  {
    v11 = a5;
    v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 72);
    v10 = 128;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a2,
           v9,
           (__int64)a4,
           1,
           186,
           (int *)this + 4,
           v10,
           0,
           v11);
}
