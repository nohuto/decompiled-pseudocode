/*
 * XREFs of zzzMoveShadow @ 0x1C023DCF0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E8B8 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00BBE88 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1C94 (zzzUpdateLayeredWindow.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+50h] [rbp-28h] BYREF
  struct tagPOINT v8; // [rsp+88h] [rbp+10h] BYREF

  v7[2] = 0LL;
  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v8 = *(struct tagPOINT *)(*(_QWORD *)(v2 + 40) + 88LL);
    v4 = *((_QWORD *)result + 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v7[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v7;
    v7[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    zzzUpdateLayeredWindow(*((struct tagWND **)v3 + 1), 0LL, &v8, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v6);
  }
  return result;
}
