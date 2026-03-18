/*
 * XREFs of ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x1C00409B8
 * Callers:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0043264 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C00437DC (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

char __fastcall HKAddChildHotkey(
        struct tagTHREADINFO *a1,
        struct tagHOTKEY *a2,
        struct tagWND *a3,
        int a4,
        unsigned __int16 a5,
        HWND a6)
{
  char *v10; // rbx
  char *i; // rax
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  char *v15; // rax
  char **v16; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a5 & 0xBF7F) == 0 )
  {
    v10 = (char *)a2 + 56;
    for ( i = (char *)*((_QWORD *)a2 + 7); ; i = *(char **)i )
    {
      if ( i == v10 )
      {
        v13 = Win32AllocPoolZInit(48LL, 1802007381LL);
        v14 = v13;
        if ( !v13 )
          return 0;
        v18[1] = a3;
        v18[0] = v13 + 8;
        HMAssignmentLock(v18, 0LL);
        v15 = (char *)(v14 + 32);
        *(_QWORD *)(v14 + 24) = a6;
        *(_QWORD *)v14 = a1;
        *(_DWORD *)(v14 + 20) = a4;
        *(_WORD *)(v14 + 16) = a5;
        v16 = (char **)*((_QWORD *)v10 + 1);
        if ( *v16 != v10 )
          __fastfail(3u);
        *(_QWORD *)(v14 + 40) = v16;
        *(_QWORD *)v15 = v10;
        *v16 = v15;
        *((_QWORD *)v10 + 1) = v15;
        NotifyHotKeyRegistrationChanged(a2, (struct tagCHILDHOTKEY *const)v14, 1);
        return 1;
      }
      v12 = (struct tagTHREADINFO *)*((_QWORD *)i - 4);
      if ( *((struct tagWND **)i - 3) == a3 )
        break;
      if ( v12 == a1 )
        return 0;
    }
    if ( v12 == a1 && *((_DWORD *)i - 3) == a4 && *((_WORD *)i - 8) != a5 )
    {
      *((_WORD *)i - 8) = a5;
      return 1;
    }
  }
  return 0;
}
