/*
 * XREFs of NtUserDisableThreadIme @ 0x1C0110420
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 i; // rdi
  __int64 v4; // rcx
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rax

  EnterCrit(0LL, 0LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, gpsi);
    v2 = 0LL;
    goto LABEL_12;
  }
  v2 = 0LL;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 320LL); i; i = *(_QWORD *)(i + 664) )
    {
      *(_DWORD *)(i + 488) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v6 = *(unsigned __int64 **)(i + 784);
        if ( v6 )
          PostEventMessageEx((struct tagTHREADINFO *)i, *(struct tagQ **)(i + 432), 8u, 0LL, 0, *v6, 0LL, 0LL);
      }
    }
LABEL_9:
    v4 = *(_QWORD *)(gptiCurrent + 784LL);
    if ( v4 )
      xxxDestroyWindow((_QWORD *)v4);
LABEL_11:
    v2 = 1LL;
    goto LABEL_12;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x2000000u;
    goto LABEL_9;
  }
  v4 = PtiFromThreadId(a1);
  if ( v4 && *(_QWORD *)(v4 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    *(_DWORD *)(v4 + 488) |= 0x2000000u;
    v7 = *(unsigned __int64 **)(v4 + 784);
    if ( v7 )
      PostEventMessageEx((struct tagTHREADINFO *)v4, *(struct tagQ **)(v4 + 432), 8u, 0LL, 0, *v7, 0LL, 0LL);
    goto LABEL_11;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
