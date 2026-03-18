/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00F38F4
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x1C00F3810 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1C0151400 (NtUserGetCIMSSM.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(int a1, struct tagINPUT_MESSAGE_SOURCE *a2)
{
  __int64 ThreadWin32Thread; // rbx
  BOOL v5; // edx
  BOOL v7; // [rsp+20h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 0x40000000) != 0;
  v5 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) < 0;
  if ( a1 )
  {
    if ( v5 || (**(_DWORD **)(ThreadWin32Thread + 448) & 8) != 0 )
      goto LABEL_4;
LABEL_8:
    *(_DWORD *)a2 = *(_DWORD *)(ThreadWin32Thread + 1272);
    *((_DWORD *)a2 + 1) = *(_DWORD *)(ThreadWin32Thread + 1276);
    return 1LL;
  }
  if ( !v7 && (**(_DWORD **)(ThreadWin32Thread + 448) & 6) == 0 )
    goto LABEL_8;
LABEL_4:
  SetUnavailableInputSource(a2);
  return 1LL;
}
