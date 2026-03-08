/*
 * XREFs of MmManagePartitionUpdateAttributes @ 0x140A42E88
 * Callers:
 *     NtManagePartition @ 0x140705650 (NtManagePartition.c)
 * Callees:
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x140A44D34 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 */

__int64 __fastcall MmManagePartitionUpdateAttributes(__int64 *a1, __int64 *a2, char a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *a2;
  if ( *a2 )
  {
    if ( (result & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
    {
      v5 = *a1;
      if ( (result & 4) != 0 )
      {
        if ( (result & 0xFFFFFFFFFFFFFFFBuLL) == 0 && (*(_DWORD *)(v5 + 4) & 0x80u) != 0 )
          return MiUpdateSpecialPurposeMemoryCacheEligibility(v5, a4);
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 4) & 0x80u) != 0 || !a4 )
          return 3221225659LL;
        if ( (unsigned __int16 *)v5 != MiSystemPartition )
          return a3 != 0 ? -1073741727 : -1073741637;
      }
    }
    return 3221225485LL;
  }
  return result;
}
