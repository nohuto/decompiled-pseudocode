/*
 * XREFs of ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01325BC
 * Callers:
 *     _RegisterHotKey @ 0x1C0032BD4 (_RegisterHotKey.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003309C (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

char __fastcall HKAddChildHotkey(
        struct tagTHREADINFO *a1,
        struct tagHOTKEY *a2,
        struct tagWND *a3,
        int a4,
        unsigned __int16 a5)
{
  char *v9; // rbx
  char *i; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  char *v13; // rax
  char **v14; // rcx
  struct tagTHREADINFO *v16; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a5 & 0xBFFF) == 0 )
  {
    v9 = (char *)a2 + 48;
    for ( i = (char *)*((_QWORD *)a2 + 6); ; i = *(char **)i )
    {
      if ( i == v9 )
      {
        v11 = Win32AllocPoolZInit(40LL, 1802007381LL);
        v12 = v11;
        if ( !v11 )
          return 0;
        v17[1] = a3;
        v17[0] = v11 + 8;
        HMAssignmentLock(v17);
        *(_QWORD *)v12 = a1;
        v13 = (char *)(v12 + 24);
        *(_DWORD *)(v12 + 20) = a4;
        *(_WORD *)(v12 + 16) = a5;
        v14 = (char **)*((_QWORD *)v9 + 1);
        if ( *v14 != v9 )
          __fastfail(3u);
        *(_QWORD *)(v12 + 32) = v14;
        *(_QWORD *)v13 = v9;
        *v14 = v13;
        *((_QWORD *)v9 + 1) = v13;
        NotifyHotKeyRegistrationChanged(a2, (struct tagCHILDHOTKEY *const)v12, 1u);
        return 1;
      }
      v16 = (struct tagTHREADINFO *)*((_QWORD *)i - 3);
      if ( *((struct tagWND **)i - 2) == a3 )
        break;
      if ( v16 == a1 )
        return 0;
    }
    if ( v16 == a1 && *((_DWORD *)i - 1) == a4 && *((_WORD *)i - 4) != a5 )
    {
      *((_WORD *)i - 4) = a5;
      return 1;
    }
  }
  return 0;
}
