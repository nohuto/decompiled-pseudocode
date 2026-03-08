/*
 * XREFs of VrpDecrementDiffHiveEntryHardRefCount @ 0x1407380D0
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1407375CC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1407379FC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

char __fastcall VrpDecrementDiffHiveEntryHardRefCount(__int64 a1)
{
  char v1; // r8
  signed __int64 v3; // rax
  signed __int64 i; // rdx
  signed __int64 v5; // rtt

  v1 = 0;
  if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
  {
    v1 = 1;
    _m_prefetchw((const void *)(a1 + 16));
    v3 = *(_QWORD *)(a1 + 16);
    for ( i = v3 - 1; ; i = v3 - 1 )
    {
      if ( i <= 0 )
      {
        if ( i )
          __fastfail(0xEu);
        __fastfail(0xEu);
      }
      v5 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), i, v3);
      if ( v5 == v3 )
        break;
    }
  }
  return v1;
}
