/*
 * XREFs of _RegisterShellHookWindow @ 0x1C00ED7F4
 * Callers:
 *     NtUserRegisterShellHookWindow @ 0x1C00ED740 (NtUserRegisterShellHookWindow.c)
 * Callees:
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C003C318 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v1 + 20) < 0 || *(char *)(v1 + 19) < 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v3 + 8) + 240LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1, (__int64 *)a1, 0x740u, 1);
      return 1LL;
    }
  }
  return 0LL;
}
