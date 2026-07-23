/*
 * XREFs of PsSetSystemPagePriorityThread @ 0x14028F880
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x14028F83C (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsSetSystemPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v6; // eax

  --*(_WORD *)(a1 + 486);
  v2 = *(unsigned __int8 *)(a1 + 1305);
  v3 = *(_DWORD *)(a1 + 1304);
  v4 = a2 << 9;
  if ( (v2 & 1) != 0 )
  {
    v5 = (v2 >> 1) & 7;
    v6 = v3 & 0xFFFFF1FF;
  }
  else
  {
    v5 = -1;
    v6 = v3 | 0x100;
  }
  *(_DWORD *)(a1 + 1304) = v4 | v6;
  KiLeaveGuardedRegionUnsafe(a1);
  return v5;
}
