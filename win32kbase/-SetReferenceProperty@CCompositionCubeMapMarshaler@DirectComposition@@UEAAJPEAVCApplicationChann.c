/*
 * XREFs of ?SetReferenceProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CCompositionCubeMapMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rax
  bool *v10; // rcx
  char v11; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 != 3 )
    return 3221225485LL;
  v7 = *((unsigned int *)this + 18);
  if ( (unsigned int)v7 >= 6 * *((_DWORD *)this + 20) )
    return 3221225485LL;
  v9 = *((_QWORD *)this + 7);
  v11 = 0;
  result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)(v9 + 24 * v7),
             (__int64)a4,
             1,
             42,
             (int *)this + 4,
             64,
             0,
             &v11);
  if ( v11 )
  {
    v10 = a5;
    *((_DWORD *)this + 17) = 0;
    *v10 = 1;
  }
  return result;
}
