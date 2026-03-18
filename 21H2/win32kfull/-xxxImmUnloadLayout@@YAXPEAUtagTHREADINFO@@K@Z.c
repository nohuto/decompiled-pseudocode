/*
 * XREFs of ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DE0F0
 * Callers:
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C0113468 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01DDA38 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxImmUnloadLayout(struct tagTHREADINFO *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  v10[2] = 0LL;
  v11 = 0LL;
  v3 = a2;
  if ( *((_QWORD *)a1 + 98) )
  {
    v4 = *((_QWORD *)a1 + 55);
    if ( v4 )
    {
      if ( a2 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v6 = *((_QWORD *)a1 + 98);
        v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v10;
        v10[1] = v6;
        HMLockObject(v6);
        xxxSendTransformableMessageTimeout(
          *((unsigned __int64 **)a1 + 98),
          0x287u,
          0x11uLL,
          v3,
          8u,
          gdwHungAppTimeout,
          (unsigned __int64 *)&v11,
          1,
          0);
        ThreadUnlock1(v8, v7, v9);
      }
    }
  }
}
