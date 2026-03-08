/*
 * XREFs of ?RemoveSasKey@@YA_NII@Z @ 0x1C00F4CD8
 * Callers:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C0039F6C (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall RemoveSasKey(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v7; // rcx

  v2 = 0;
  v4 = 0LL;
  v5 = a1;
  while ( *(_DWORD *)(v4 + SGDGetUserSessionState(a1) + 13804) != v5
       || *(_DWORD *)(v4 + SGDGetUserSessionState(a1) + 13800) != a2 )
  {
    ++v2;
    v4 += 8LL;
    if ( v2 >= 2 )
      return 0;
  }
  *(_DWORD *)(SGDGetUserSessionState(a1) + 13812) = 0;
  *(_DWORD *)(SGDGetUserSessionState(v7) + 13808) = 0;
  return 1;
}
