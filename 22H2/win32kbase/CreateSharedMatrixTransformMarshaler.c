/*
 * XREFs of CreateSharedMatrixTransformMarshaler @ 0x1C01F88D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F8608 (-Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEA.c)
 */

__int64 __fastcall CreateSharedMatrixTransformMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedMatrixTransformMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedMatrixTransformMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedMatrixTransformMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
