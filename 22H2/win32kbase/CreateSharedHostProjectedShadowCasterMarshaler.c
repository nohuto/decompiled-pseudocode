/*
 * XREFs of CreateSharedHostProjectedShadowCasterMarshaler @ 0x1C01F9E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F9CF8 (-Create@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@SAJPEBVCSharedSystemResourc.c)
 */

__int64 __fastcall CreateSharedHostProjectedShadowCasterMarshaler(
        __int64 a1,
        __int64 a2,
        struct DirectComposition::CSharedHostProjectedShadowCasterMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedHostProjectedShadowCasterMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 12) != 130 )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), 1, 0) )
    return 3221225506LL;
  v5 = 0LL;
  result = DirectComposition::CSharedHostProjectedShadowCasterMarshaler::Create(
             (const struct DirectComposition::CSharedSystemResource *)a1,
             &v5);
  *a3 = v5;
  return result;
}
