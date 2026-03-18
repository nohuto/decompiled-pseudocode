/*
 * XREFs of CreateSharedReadSurfaceMarshaler @ 0x1C023BD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadSurfaceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C023B928 (-Create@CSharedReadSurfaceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 */

__int64 __fastcall CreateSharedReadSurfaceMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedReadSurfaceMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadSurfaceMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 201 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedReadSurfaceMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
