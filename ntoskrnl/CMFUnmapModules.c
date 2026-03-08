/*
 * XREFs of CMFUnmapModules @ 0x140A004F0
 * Callers:
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFUnmapModules(__int16 a1)
{
  PVOID *v2; // rdi
  PVOID *v3; // rbx
  __int64 v4; // rbp
  PVOID v5; // rcx
  PVOID v6; // rcx

  if ( (a1 & 0x20) != 0 )
  {
    v2 = (PVOID *)CMFSegmentSectionPointer;
    _InterlockedExchange64((volatile __int64 *)&CMFSegmentSectionPointer, 0LL);
    if ( v2 )
    {
      v3 = v2;
      v4 = 30LL;
      do
      {
        if ( *v3 )
        {
          ObfDereferenceObject(*v3);
          *v3 = 0LL;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      ExFreePoolWithTag(v2, 0);
    }
  }
  if ( (a1 & 0x10) != 0 )
  {
    v5 = CMFDirectorySectionPointer;
    if ( CMFDirectorySectionPointer )
    {
      if ( v5 == (PVOID)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CMFDirectorySectionPointer,
                          0LL,
                          (signed __int64)CMFDirectorySectionPointer) )
        ObfDereferenceObject(v5);
    }
  }
  if ( (a1 & 0x100) != 0 )
  {
    v6 = CMFHitsSectionPointer;
    if ( CMFHitsSectionPointer )
    {
      if ( v6 == (PVOID)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CMFHitsSectionPointer,
                          0LL,
                          (signed __int64)CMFHitsSectionPointer) )
        ObfDereferenceObject(v6);
    }
  }
  return 0LL;
}
