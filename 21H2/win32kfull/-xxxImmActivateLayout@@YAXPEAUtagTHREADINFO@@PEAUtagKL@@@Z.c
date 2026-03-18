/*
 * XREFs of ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C0121D98
 * Callers:
 *     EditionImmActivateLayout @ 0x1C0121D80 (EditionImmActivateLayout.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01DDA38 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01DDE1C (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxImmActivateLayout(struct tagTHREADINFO *a1, struct tagKL *a2)
{
  char *v2; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-28h] BYREF

  v13[2] = 0LL;
  v2 = (char *)a1 + 440;
  if ( *((struct tagKL **)a1 + 55) != a2 )
  {
    if ( *((_QWORD *)a1 + 98) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v6 = *((_QWORD *)a1 + 98);
      v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v13;
      v13[1] = v6;
      HMLockObject(v6);
      v7 = *((_QWORD *)a2 + 5);
      v8 = (unsigned __int64 *)*((_QWORD *)a1 + 98);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v8, 0x287u, 0x19uLL, v7, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v10, v9, v11);
    }
    v12[0] = v2;
    v12[1] = a2;
    HMAssignmentLock(v12, 0LL);
  }
}
