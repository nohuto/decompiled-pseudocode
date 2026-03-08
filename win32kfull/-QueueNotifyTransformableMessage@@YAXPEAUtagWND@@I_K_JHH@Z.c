/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00FEC48
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A560C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00FDA70 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     QueueNotifyMessage @ 0x1C01FE820 (QueueNotifyMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagTHREADINFO **a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  __int128 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  ThreadLock(a1, &v14);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v11, v10, v12);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
}
