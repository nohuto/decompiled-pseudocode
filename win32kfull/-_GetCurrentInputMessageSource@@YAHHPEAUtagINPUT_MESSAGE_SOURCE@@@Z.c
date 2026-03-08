/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00D7584
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x1C00D74A0 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1C01D1030 (NtUserGetCIMSSM.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(__int64 a1, struct tagINPUT_MESSAGE_SOURCE *a2)
{
  int v3; // esi
  struct tagTHREADINFO *v4; // rbx
  BOOL v5; // edx
  BOOL v7; // [rsp+20h] [rbp-18h]

  v3 = a1;
  v4 = PtiCurrentShared(a1);
  v7 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 0x40000000) != 0;
  v5 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) < 0;
  if ( v3 )
  {
    if ( v5 || (**((_DWORD **)v4 + 56) & 8) != 0 )
      goto LABEL_4;
LABEL_6:
    *(_DWORD *)a2 = *((_DWORD *)v4 + 322);
    *((_DWORD *)a2 + 1) = *((_DWORD *)v4 + 323);
    return 1LL;
  }
  if ( !v7 && (**((_DWORD **)v4 + 56) & 6) == 0 )
    goto LABEL_6;
LABEL_4:
  SetUnavailableInputSource(a2);
  return 1LL;
}
