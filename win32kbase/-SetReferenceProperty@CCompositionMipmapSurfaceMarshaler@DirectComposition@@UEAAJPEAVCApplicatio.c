/*
 * XREFs of ?SetReferenceProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026E4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  __int64 v6; // rax
  __int64 result; // rax
  bool *v8; // rcx
  char v9; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 != 3 )
    return 3221225485LL;
  v6 = *((unsigned int *)this + 16);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 19) )
    return 3221225485LL;
  v9 = 0;
  result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 24 * v6),
             (__int64)a4,
             1,
             42,
             (int *)this + 4,
             64,
             0,
             &v9);
  if ( v9 )
  {
    v8 = a5;
    *((_DWORD *)this + 22) |= 1 << *((_BYTE *)this + 64);
    *v8 = 1;
  }
  return result;
}
