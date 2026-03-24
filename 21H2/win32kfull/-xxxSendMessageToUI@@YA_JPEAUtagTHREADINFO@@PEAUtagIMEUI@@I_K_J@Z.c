/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2F00
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E3150 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  struct tagIMEUI *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+50h] [rbp-78h]
  __int128 v14; // [rsp+70h] [rbp-58h] BYREF
  __int64 v15; // [rsp+80h] [rbp-48h]
  __int128 v16; // [rsp+88h] [rbp-40h] BYREF
  __int64 v17; // [rsp+98h] [rbp-30h]
  __int64 v19; // [rsp+F0h] [rbp+28h]

  v19 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, (__int64)&v16);
    KeAttachProcess(*a1[53]);
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (struct tagIMEUI *)MmUserProbeAddress;
  v13 = HMValidateHandleNoSecure(*((_QWORD *)v8 + 4), 1);
  if ( v13 )
  {
    v9 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v9);
    if ( v7 )
      KeDetachProcess();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v14 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v14;
    *((_QWORD *)&v14 + 1) = v13;
    HMLockObject(v13);
    _InterlockedIncrement(&glSendMessage);
    v19 = xxxSendTransformableMessageTimeout(v13, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v11);
    if ( v7 )
    {
      if ( ((_DWORD)a1[61] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)&v16);
        return v19;
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
  return v19;
}
