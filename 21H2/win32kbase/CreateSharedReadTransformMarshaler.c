/*
 * XREFs of CreateSharedReadTransformMarshaler @ 0x1C00A6C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00A6C98 (-Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV1.c)
 */

__int64 __fastcall CreateSharedReadTransformMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadTransformMarshaler **a3)
{
  unsigned int v5; // edx
  struct DirectComposition::CSharedReadTransformMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) == 104 )
    goto LABEL_2;
  if ( *((_DWORD *)a1 + 3) == 107 )
  {
    if ( a2 == 104 )
      return (unsigned int)-1073741811;
    goto LABEL_2;
  }
  v5 = -1073741811;
  if ( *((_DWORD *)a1 + 3) == 108 )
  {
    v5 = a2 != 186 ? 0xC000000D : 0;
    if ( a2 == 186 )
    {
LABEL_2:
      v7 = 0LL;
      v5 = DirectComposition::CSharedReadTransformMarshaler::Create(a1, &v7);
      *a3 = v7;
    }
  }
  return v5;
}
