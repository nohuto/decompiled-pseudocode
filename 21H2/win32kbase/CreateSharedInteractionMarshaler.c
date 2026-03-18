/*
 * XREFs of CreateSharedInteractionMarshaler @ 0x1C0083FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0083FE0 (-Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 */

__int64 __fastcall CreateSharedInteractionMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedInteractionMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedInteractionMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedInteractionMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
