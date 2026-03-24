/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x1402DE588
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x1402DE4EC (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140714C70 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1304) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1304) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1304) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}
