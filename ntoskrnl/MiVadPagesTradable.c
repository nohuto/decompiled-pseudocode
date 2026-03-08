/*
 * XREFs of MiVadPagesTradable @ 0x1403481F0
 * Callers:
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiProcessVaContiguityInformation @ 0x14065B3D4 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPagesTradable(__int64 a1)
{
  int v1; // eax
  int v2; // r8d
  unsigned int v4; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) == 0 )
    return !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000;
  v4 = 0;
  if ( !v2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
    return 0LL;
  LOBYTE(v4) = (*(_DWORD *)(a1 + 48) & 0x70) == 32;
  return v4;
}
