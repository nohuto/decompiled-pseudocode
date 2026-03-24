/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F18E8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F0CD8 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  unsigned int v2; // edi
  struct tagINPUTDEST *v4; // rax
  __int64 *v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v11[112]; // [rsp+50h] [rbp-88h] BYREF

  v2 = 0;
  v10[2] = 0LL;
  memset(v11, 0, sizeof(v11));
  v4 = CTouchProcessor::NotifyCaptureChangedIfCaptured(gpTouchProcessor, a1, (struct tagINPUTDEST *)v11);
  if ( !v4 )
    return 1LL;
  v6 = (__int64 *)*((_QWORD *)v4 + 10);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v10;
  v10[1] = v6;
  if ( v6 )
    HMLockObject(v6);
  v8 = xxxSendPointerMessageWorker((__int64)v6, 588LL, a1, *v6, 0LL, 183);
  ThreadUnlock1(v9);
  LOBYTE(v2) = v8 != 0;
  return v2;
}
