/*
 * XREFs of LdrpFindExistingModule @ 0x180060FD4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180060AD0 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180060E90 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180061A48 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800212F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindExistingModule(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, int a4, _QWORD *a5)
{
  _UNICODE_STRING *v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  *a5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(String1, v9, a3, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (a3 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      *(_DWORD *)(*a5 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
