/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C9AD0
 * Callers:
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A25A8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A6928 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C00A80EC (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00C97C0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DB90C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     QueueNotifyMessage @ 0x1C02192E0 (QueueNotifyMessage.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        void **a4,
        int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v15[8]; // [rsp+50h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-20h] BYREF
  __int64 v17; // [rsp+68h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  ThreadLock((__int64)a1, (__int64 *)&v16);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v11, v10, v12);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15, v13, v14);
}
