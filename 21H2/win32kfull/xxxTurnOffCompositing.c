/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01E85B0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxInternalEnumWindow @ 0x1C01D2394 (xxxInternalEnumWindow.c)
 */

struct tagBWL *__fastcall xxxTurnOffCompositing(__int64 a1, int a2)
{
  struct tagBWL *result; // rax
  struct tagWND *v4; // rbx
  char v5; // si
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v9 = 0LL;
  v4 = (struct tagWND *)a1;
  v8 = 0LL;
  v5 = 1;
  if ( a2 )
  {
    v4 = *(struct tagWND **)(a1 + 112);
    if ( !v4 )
      return result;
    v5 = 3;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v8 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v8;
    *((_QWORD *)&v8 + 1) = v4;
    HMLockObject(v4);
  }
  result = xxxInternalEnumWindow(v4, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v5);
  if ( a2 )
    return (struct tagBWL *)ThreadUnlock1(v7);
  return result;
}
