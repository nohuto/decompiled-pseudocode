/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01DE3A0
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01DE5F0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  struct tagIMEUI *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *BugCheckParameter2; // [rsp+50h] [rbp-78h]
  __int128 v16; // [rsp+70h] [rbp-58h] BYREF
  __int64 v17; // [rsp+80h] [rbp-48h]
  __int128 v18; // [rsp+88h] [rbp-40h] BYREF
  __int64 v19; // [rsp+98h] [rbp-30h]
  __int64 v21; // [rsp+F0h] [rbp+28h]

  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, (__int64)&v18);
    KeAttachProcess(*a1[53]);
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (struct tagIMEUI *)MmUserProbeAddress;
  BugCheckParameter2 = (unsigned __int64 *)HMValidateHandleNoSecure(*((_QWORD *)v8 + 4), 1);
  if ( BugCheckParameter2 )
  {
    v9 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v9);
    if ( v7 )
      KeDetachProcess();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
    *((_QWORD *)&v16 + 1) = BugCheckParameter2;
    HMLockObject(BugCheckParameter2);
    _InterlockedIncrement(&glSendMessage);
    v21 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v12, v11, v13);
    if ( v7 )
    {
      if ( ((_DWORD)a1[61] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)&v18);
        return v21;
      }
      KeAttachProcess(*a1[53]);
    }
    _InterlockedDecrement(v9);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v21;
}
