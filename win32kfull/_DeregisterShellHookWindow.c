/*
 * XREFs of _DeregisterShellHookWindow @ 0x1C00EFC04
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     NtUserDeregisterShellHookWindow @ 0x1C00EFB50 (NtUserDeregisterShellHookWindow.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C003E2AC (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

__int64 __fastcall DeregisterShellHookWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(v5 + 8) + 240LL), a2, a1, a4, 0LL) )
    SetOrClrWF(0, (__int64 *)a1, 0x740u, 1);
  return 1LL;
}
