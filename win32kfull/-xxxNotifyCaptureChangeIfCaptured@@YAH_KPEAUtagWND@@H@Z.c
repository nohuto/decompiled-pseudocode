/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C74C4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     xxxSendPointerMessageWorker @ 0x1C01C68A8 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct tagINPUTDEST *v5; // rax
  unsigned int v6; // edi
  __int64 *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-98h]
  _BYTE v15[112]; // [rsp+50h] [rbp-88h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v4 = SGDGetUserSessionState(v3);
  v5 = CTouchProcessor::NotifyCaptureChangedIfCaptured(*(CTouchProcessor **)(v4 + 3424), a1, (struct tagINPUTDEST *)v15);
  v6 = 0;
  if ( !v5 )
    return 1LL;
  v8 = (__int64 *)*((_QWORD *)v5 + 10);
  ThreadLock(v8, &v13);
  v9 = xxxSendPointerMessageWorker((__int64)v8, 588LL, a1, *v8, 0LL, 183);
  ThreadUnlock1(v11, v10, v12);
  LOBYTE(v6) = v9 != 0;
  return v6;
}
