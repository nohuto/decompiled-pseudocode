/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0123E14
 * Callers:
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01238C8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0123C80 (xxxEmptyClipboard.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD v8[3]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+68h] [rbp-20h] BYREF
  __int64 v10; // [rsp+78h] [rbp-10h]
  unsigned __int64 LowLimit; // [rsp+90h] [rbp+8h] BYREF

  v8[2] = 0LL;
  LowLimit = 0LL;
  v2 = *((_QWORD *)a1 + 14);
  v9 = 0LL;
  v10 = 0LL;
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v8;
    v8[1] = v2;
    HMLockObject(v2);
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(v2, 0x307u, 0LL, 0LL, 2u, 0x1388u, (__int64 *)&LowLimit, 1, 0) )
        xxxSendNotifyMessage(v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 424LL), 0LL, 2LL, 0LL);
      v7 = v6;
      if ( v6 )
        PushW32ThreadLock(v6, &v9, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout(v2, a2, 0LL, 0LL, 0x40u, 0, (__int64 *)&LowLimit, 1, 0);
      if ( v7 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v9);
    }
    ThreadUnlock1(v5);
  }
}
