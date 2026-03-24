/*
 * XREFs of MiInitializeHotPatches @ 0x140A565A0
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1)
{
  __int64 result; // rax

  MiHotPatchGeneration = 1;
  *(_QWORD *)&MiGlobalHotPatchList = 0LL;
  MiUserSidPatchLists = 0LL;
  MiSecureImageActivePatches = 0LL;
  MiHotPatchListLock = 0LL;
  result = *(_QWORD *)(a1 + 240);
  dword_140C4CCB0 = (*(_DWORD *)(result + 3464) + 4095) & 0xFFFFF000;
  MiUserHotPatchReserveSize = dword_140C4CCB0;
  return result;
}
