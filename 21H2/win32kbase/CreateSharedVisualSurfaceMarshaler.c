/*
 * XREFs of CreateSharedVisualSurfaceMarshaler @ 0x1C023BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedVisualSurfaceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C023BACC (-Create@CSharedVisualSurfaceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV1.c)
 */

__int64 __fastcall CreateSharedVisualSurfaceMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedVisualSurfaceMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedVisualSurfaceMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedVisualSurfaceMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
