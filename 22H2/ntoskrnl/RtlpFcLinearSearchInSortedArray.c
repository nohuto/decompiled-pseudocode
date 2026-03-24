/*
 * XREFs of RtlpFcLinearSearchInSortedArray @ 0x14091A1A4
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14091A310 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpFcLinearSearchInSortedArray(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  unsigned __int64 i; // rdi
  int v10; // eax

  for ( i = 0LL; i < a3; a2 += a4 )
  {
    v10 = a5(a1, a2);
    if ( v10 < 0 )
      break;
    if ( !v10 )
      return a2;
    ++i;
  }
  return 0LL;
}
