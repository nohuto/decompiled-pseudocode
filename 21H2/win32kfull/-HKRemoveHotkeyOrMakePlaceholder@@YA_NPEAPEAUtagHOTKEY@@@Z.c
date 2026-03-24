/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C0033058
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C0032A80 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003313C (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

char __fastcall HKRemoveHotkeyOrMakePlaceholder(struct tagHOTKEY **a1)
{
  struct tagHOTKEY *v1; // rbx
  __int16 v3; // cx
  struct tagSASKEY near **v5; // rax
  unsigned int v6; // ecx

  v1 = *a1;
  if ( (*((_WORD *)*a1 + 13) & 0x100) == 0 )
  {
    NotifyHotKeyRegistrationChanged(*a1, 0LL, 0);
    if ( *((_QWORD *)v1 + 2) == 1LL )
      *((_QWORD *)v1 + 2) = 0LL;
    else
      HMAssignmentUnlock((char *)v1 + 16);
    if ( *((__int16 *)v1 + 13) < 0 )
    {
      v5 = &gSasKeyList;
      v6 = 0;
      while ( *((_DWORD *)v5 + 1) != *((_DWORD *)v1 + 7) || *(_DWORD *)v5 != *((unsigned __int16 *)v1 + 12) )
      {
        ++v6;
        ++v5;
        if ( v6 >= 2 )
          goto LABEL_5;
      }
      qword_1C0339C48 = 0LL;
    }
LABEL_5:
    v3 = *((_WORD *)v1 + 13);
    if ( (v3 & 0x200) == 0 || *((struct tagHOTKEY **)v1 + 6) == (struct tagHOTKEY *)((char *)v1 + 48) )
    {
      *a1 = (struct tagHOTKEY *)*((_QWORD *)v1 + 5);
      Win32FreePool(v1);
      return 1;
    }
    *(_QWORD *)v1 = 0LL;
    *((_WORD *)v1 + 13) = v3 | 0x100;
    *((_DWORD *)v1 + 8) = 0;
  }
  return 0;
}
