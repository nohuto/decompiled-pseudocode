/*
 * XREFs of MmReserveViewInSystemCache @ 0x140842650
 * Callers:
 *     CcInitializePartitionVacbs @ 0x14039BA70 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x1405359F0 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140335220 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1);
  if ( !result )
    ++dword_140C69EA0;
  return result;
}
