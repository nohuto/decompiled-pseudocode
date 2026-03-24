/*
 * XREFs of CreateSharedWriteRemoteAppRenderTargetMarshaler @ 0x1C01F9310
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F91A4 (-Create@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResour.c)
 */

__int64 __fastcall CreateSharedWriteRemoteAppRenderTargetMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
