/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C0039F6C
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00B6390 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     DestroyThreadsHotKeys @ 0x1C00B6540 (DestroyThreadsHotKeys.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003B140 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 *     ?RemoveSasKey@@YA_NII@Z @ 0x1C00F4CD8 (-RemoveSasKey@@YA_NII@Z.c)
 */

char __fastcall HKRemoveHotkeyOrMakePlaceholder(struct tagHOTKEY **a1)
{
  struct tagHOTKEY *v1; // rbx
  __int16 v3; // cx

  v1 = *a1;
  if ( (*((_WORD *)*a1 + 17) & 0x100) == 0 )
  {
    NotifyHotKeyRegistrationChanged(*a1, 0LL, 0);
    if ( *((_QWORD *)v1 + 2) == 1LL )
      *((_QWORD *)v1 + 2) = 0LL;
    else
      HMAssignmentUnlock((char *)v1 + 16);
    if ( *((__int16 *)v1 + 17) < 0 )
      RemoveSasKey(*((_DWORD *)v1 + 9), *((unsigned __int16 *)v1 + 16));
    v3 = *((_WORD *)v1 + 17);
    if ( (v3 & 0x200) == 0 || *((struct tagHOTKEY **)v1 + 7) == (struct tagHOTKEY *)((char *)v1 + 56) )
    {
      *a1 = (struct tagHOTKEY *)*((_QWORD *)v1 + 6);
      Win32FreePool(v1);
      return 1;
    }
    *(_QWORD *)v1 = 0LL;
    *((_WORD *)v1 + 17) = v3 | 0x100;
    *((_DWORD *)v1 + 10) = 0;
  }
  return 0;
}
