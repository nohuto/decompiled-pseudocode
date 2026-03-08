/*
 * XREFs of ?SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00B9CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  _DWORD *v6; // rbx
  __int64 result; // rax
  char v8; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
    return 3221225485LL;
  v6 = this + 2;
  v8 = 0;
  result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             this + 7,
             (__int64)a4,
             1,
             196,
             (int *)this + 4,
             32,
             0,
             &v8);
  if ( v8 )
  {
    if ( this[7] )
    {
      *v6 |= 0x400u;
      *((_BYTE *)this + 92) = 0;
    }
    *a5 = 1;
  }
  return result;
}
