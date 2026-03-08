/*
 * XREFs of RtlFindLowerBoundInSortedArray @ 0x1407AF6D0
 * Callers:
 *     CmpFindSecurityCellCacheIndex @ 0x14030DD50 (CmpFindSecurityCellCacheIndex.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140782330 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlFindLowerBoundInSortedArray(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int (__fastcall *a5)(__int64, unsigned __int64))
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rbx

  v5 = a3;
  v6 = a2;
  v7 = a2 + 16 * a3;
  if ( a2 < v7 )
  {
    do
    {
      v9 = v6 + 16 * (v5 >> 1);
      if ( a5(a1, v9) > 0 )
      {
        v6 = v9 + 16;
        v5 += -1LL - (v5 >> 1);
      }
      else
      {
        v5 >>= 1;
        v7 = v9;
      }
    }
    while ( v6 < v7 );
  }
  return v6;
}
