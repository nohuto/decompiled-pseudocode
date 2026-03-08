/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000C460
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v7; // r8d
  int v8; // r8d
  char *v9; // rcx
  char *v10; // rdx
  char *v12; // rcx
  char *v13; // rdx
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-28h]
  bool *v16; // [rsp+40h] [rbp-18h]
  bool *v17; // [rsp+40h] [rbp-18h]

  if ( !a3 )
  {
    v12 = (char *)this + 16;
    v17 = a5;
    v13 = (char *)this + 88;
    v15 = 256;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v13, a4, 1LL, 17, v12, v15, 0, v17);
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v12 = (char *)this + 16;
    v17 = a5;
    v13 = (char *)this + 96;
    v15 = 1024;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v13, a4, 1LL, 17, v12, v15, 0, v17);
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return 3221225485LL;
    v9 = (char *)this + 16;
    v16 = a5;
    v10 = (char *)this + 72;
    v14 = 128;
  }
  else
  {
    v9 = (char *)this + 16;
    v16 = a5;
    v10 = (char *)this + 80;
    v14 = 512;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v10, a4, 1LL, 196, v9, v14, 0, v16);
}
