/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407BD104
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403C2F88 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404EAEB4 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return v1 << 25 >> 16;
  ++dword_140C4F820;
  return 0LL;
}
