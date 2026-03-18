/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01EC350
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     xxxSendPointerMessageWorker @ 0x1C01EB7E4 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  struct tagINPUTDEST *v3; // rax
  unsigned int v4; // edi
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-98h]
  _BYTE v13[112]; // [rsp+50h] [rbp-88h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  memset(v13, 0, sizeof(v13));
  v3 = CTouchProcessor::NotifyCaptureChangedIfCaptured(gpTouchProcessor, a1, (struct tagINPUTDEST *)v13);
  v4 = 0;
  if ( !v3 )
    return 1LL;
  v6 = (__int64 *)*((_QWORD *)v3 + 10);
  ThreadLock((__int64)v6, (__int64 *)&v11);
  v7 = xxxSendPointerMessageWorker((__int64)v6, 588LL, a1, *v6, 0LL, 183);
  ThreadUnlock1(v9, v8, v10);
  LOBYTE(v4) = v7 != 0;
  return v4;
}
