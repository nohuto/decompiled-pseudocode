/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C0246C30
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0020274 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C00202D0 (PhkNextValid.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 fnHkINLPCWPRETEXSTRUCT()
{
  __int64 v0; // rcx
  __int64 Valid; // rax

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v0 = *(_QWORD *)(gptiCurrent + 688LL);
  if ( v0 && (Valid = PhkNextValid(v0)) != 0 && *(_DWORD *)(Valid + 48) != 12 )
    return 0LL;
  else
    return xxxCallNextHookEx();
}
