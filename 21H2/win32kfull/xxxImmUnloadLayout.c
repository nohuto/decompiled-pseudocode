/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01E3BB0
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C012A5B8 (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3500 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int16 __fastcall xxxImmUnloadLayout(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  struct _LARGE_STRING *v4; // rdi
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned __int64 LowLimit; // [rsp+80h] [rbp+8h] BYREF

  v2 = &retaddr;
  v10[2] = 0LL;
  LowLimit = 0LL;
  v4 = (struct _LARGE_STRING *)a2;
  if ( *(_QWORD *)(a1 + 784) )
  {
    v5 = *(_QWORD *)(a1 + 440);
    if ( v5 )
    {
      if ( a2 != 1 || (*gpsi & 4) != 0 || (LOWORD(v2) = *(_WORD *)(v5 + 42) & 0xF000, (_WORD)v2 == 0xE000) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v7 = *(_QWORD *)(a1 + 784);
        v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v10;
        v10[1] = v7;
        HMLockObject(v7);
        xxxSendTransformableMessageTimeout(
          *(_QWORD *)(a1 + 784),
          0x287u,
          0x11uLL,
          v4,
          8u,
          gdwHungAppTimeout,
          (__int64 *)&LowLimit,
          1,
          0);
        LOWORD(v2) = ThreadUnlock1(v8);
      }
    }
  }
  return (__int16)v2;
}
