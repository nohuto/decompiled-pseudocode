/*
 * XREFs of ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x1C00EDE60
 * Callers:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003B140 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 *     Feature_ReportShellHotKey__private_IsEnabledDeviceUsage @ 0x1C012C740 (Feature_ReportShellHotKey__private_IsEnabledDeviceUsage.c)
 */

char __fastcall HKAddChildHotkey(
        struct tagTHREADINFO *a1,
        struct tagHOTKEY *a2,
        struct tagWND *a3,
        int a4,
        unsigned __int16 a5,
        HWND a6)
{
  bool v10; // zf
  char *v11; // rbx
  char *i; // rax
  struct tagTHREADINFO *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  char *v16; // rax
  char **v17; // rcx
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(a1) )
    v10 = (a5 & 0xBF7F) == 0;
  else
    v10 = (a5 & 0xBFFF) == 0;
  if ( v10 )
  {
    v11 = (char *)a2 + 56;
    for ( i = (char *)*((_QWORD *)a2 + 7); ; i = *(char **)i )
    {
      if ( i == v11 )
      {
        v14 = Win32AllocPoolZInit(48LL, 1802007381LL);
        v15 = v14;
        if ( !v14 )
          return 0;
        v19[1] = a3;
        v19[0] = v14 + 8;
        HMAssignmentLock(v19, 0LL);
        v16 = (char *)(v15 + 32);
        *(_QWORD *)(v15 + 24) = a6;
        *(_QWORD *)v15 = a1;
        *(_DWORD *)(v15 + 20) = a4;
        *(_WORD *)(v15 + 16) = a5;
        v17 = (char **)*((_QWORD *)a2 + 8);
        if ( *v17 != v11 )
          __fastfail(3u);
        *(_QWORD *)(v15 + 40) = v17;
        *(_QWORD *)v16 = v11;
        *v17 = v16;
        *((_QWORD *)a2 + 8) = v16;
        NotifyHotKeyRegistrationChanged(a2, (struct tagCHILDHOTKEY *const)v15, 1u);
        return 1;
      }
      v13 = (struct tagTHREADINFO *)*((_QWORD *)i - 4);
      if ( *((struct tagWND **)i - 3) == a3 )
        break;
      if ( v13 == a1 )
        return 0;
    }
    if ( v13 == a1 && *((_DWORD *)i - 3) == a4 && *((_WORD *)i - 8) != a5 )
    {
      *((_WORD *)i - 8) = a5;
      return 1;
    }
  }
  return 0;
}
