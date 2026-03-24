/*
 * XREFs of MiVadPagesTradable @ 0x140314D20
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MiProcessVaContiguityInformation @ 0x140552200 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPagesTradable(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x100000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( !v2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 || (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 )
      return 0LL;
  }
  else if ( v2 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000) )
  {
    return 0LL;
  }
  return 1LL;
}
