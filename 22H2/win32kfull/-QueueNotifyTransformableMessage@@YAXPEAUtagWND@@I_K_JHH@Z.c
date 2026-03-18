/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C004AA20
 * Callers:
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00CDFB0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00F1BB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     QueueNotifyMessage @ 0x1C01FBCA0 (QueueNotifyMessage.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE v12[8]; // [rsp+50h] [rbp-28h] BYREF
  __int128 v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  ThreadLock(a1, &v13);
  xxxSendMessageCallback(a1, a2, a3, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v10, v9, v11);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
}
