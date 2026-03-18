/*
 * XREFs of DrvIsDisplayStateCurrent @ 0x1C0174768
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0158C20 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsDisplayStateCurrent(int a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (!a1 || *a2 == *((_DWORD *)gpGdiSharedMemory + 393252))
    && a2[1] == *((_DWORD *)gpGdiSharedMemory + 393258)
    && a2[2] == *((_DWORD *)gpGdiSharedMemory + 393256) )
  {
    return 1;
  }
  return v2;
}
