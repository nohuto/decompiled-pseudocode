/*
 * XREFs of CreateSharedManipulationTransformMarshaler @ 0x1C0095450
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0095490 (-Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 */

__int64 __fastcall CreateSharedManipulationTransformMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedManipulationTransformMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedManipulationTransformMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedManipulationTransformMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
