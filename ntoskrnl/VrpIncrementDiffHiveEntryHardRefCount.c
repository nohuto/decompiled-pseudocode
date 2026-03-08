/*
 * XREFs of VrpIncrementDiffHiveEntryHardRefCount @ 0x140738468
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1407375CC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1407379FC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

void __fastcall VrpIncrementDiffHiveEntryHardRefCount(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  if ( ++*(_QWORD *)(a1 + 32) <= 1uLL )
  {
    _m_prefetchw((const void *)(a1 + 16));
    v1 = *(_QWORD *)(a1 + 16);
    for ( i = v1 + 1; ; i = v1 + 1 )
    {
      if ( i <= 1 )
      {
        if ( i != 1 )
          __fastfail(0xEu);
        __fastfail(0xEu);
      }
      v3 = v1;
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), i, v1);
      if ( v3 == v1 )
        break;
    }
  }
}
