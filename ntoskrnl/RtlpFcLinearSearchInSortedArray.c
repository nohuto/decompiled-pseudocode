/*
 * XREFs of RtlpFcLinearSearchInSortedArray @ 0x1409C0310
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140782330 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpFcLinearSearchInSortedArray(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  unsigned __int64 i; // rdi
  int v9; // eax

  for ( i = 0LL; i < a3; a2 += 16LL )
  {
    v9 = a5(a1, a2);
    if ( v9 < 0 )
      break;
    if ( !v9 )
      return a2;
    ++i;
  }
  return 0LL;
}
