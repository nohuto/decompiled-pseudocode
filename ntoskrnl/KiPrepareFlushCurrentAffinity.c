/*
 * XREFs of KiPrepareFlushCurrentAffinity @ 0x14056FB44
 * Callers:
 *     KeFlushMultipleRangeCurrentTb @ 0x140387610 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403876F4 (KeFlushCurrentTbOnly.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall KiPrepareFlushCurrentAffinity(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 result; // rax
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 2097153;
  result = (unsigned __int64)memset((void *)(a1 + 8), 0, 0x100uLL);
  Group = CurrentPrcb->Group;
  GroupSetMember = CurrentPrcb->GroupSetMember;
  if ( *(_WORD *)a1 <= (unsigned __int16)Group )
  {
    if ( *(_WORD *)(a1 + 2) <= (unsigned __int16)Group )
      return result;
    result = (unsigned int)(Group + 1);
    *(_WORD *)a1 = Group + 1;
  }
  *(_QWORD *)(a1 + 8 * Group + 8) |= GroupSetMember;
  return result;
}
