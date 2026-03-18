/*
 * XREFs of _RegisterShellHookWindow @ 0x1C00B5594
 * Callers:
 *     NtUserRegisterShellHookWindow @ 0x1C00B54E0 (NtUserRegisterShellHookWindow.c)
 * Callees:
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00E300C (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v1 + 20) < 0 || *(char *)(v1 + 19) < 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v3 + 8) + 240LL), 0LL, a1, 2u, v5) )
    {
      SetOrClrWF(1LL, a1, 1856LL, 1LL);
      return 1LL;
    }
  }
  return 0LL;
}
