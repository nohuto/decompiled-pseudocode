/*
 * XREFs of MmReserveViewInSystemCache @ 0x140845490
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403A0520 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x140537EC0 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x14029FD70 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1);
  if ( !result )
    ++dword_140C6A320;
  return result;
}
