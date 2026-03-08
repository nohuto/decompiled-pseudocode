/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0200230
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00F130C (xxxEmptyClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FF7D8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int128 v9; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp-28h]
  __int128 v11; // [rsp+68h] [rbp-20h] BYREF
  __int64 v12; // [rsp+78h] [rbp-10h]
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 14);
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( v2 )
  {
    ThreadLockAlways(v2, &v11);
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (struct tagWND *)v2,
              0x307u,
              0LL,
              0LL,
              2u,
              0x1388u,
              (unsigned __int64 *)&v13,
              1,
              0) )
        xxxSendNotifyMessage((struct tagTHREADINFO **)v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v7 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 424LL), 0LL, 2LL, 0LL);
      v8 = v7;
      if ( v7 )
        PushW32ThreadLock(v7, &v9, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout((struct tagWND *)v2, a2, 0LL, 0LL, 0x40u, 0, (unsigned __int64 *)&v13, 1, 0);
      if ( v8 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v9);
    }
    ThreadUnlock1(v5, v4, v6);
  }
}
