/*
 * XREFs of CreateSharedReadLegacyAnimationTriggerMarshaler @ 0x1C01F9080
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadLegacyAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F8FA0 (-Create@CSharedReadLegacyAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResour.c)
 */

__int64 __fastcall CreateSharedReadLegacyAnimationTriggerMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadLegacyAnimationTriggerMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadLegacyAnimationTriggerMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedReadLegacyAnimationTriggerMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
