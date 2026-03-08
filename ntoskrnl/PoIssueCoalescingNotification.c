/*
 * XREFs of PoIssueCoalescingNotification @ 0x14058B2F4
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x14079508C (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x140983F50 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *i; // rdi
  signed __int64 *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  char v9; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+21h] [rbp-17h]
  char v11; // [rsp+23h] [rbp-15h]
  int v12; // [rsp+24h] [rbp-14h]
  __int64 v13; // [rsp+28h] [rbp-10h]

  v12 = a2;
  v10 = 0;
  v11 = 0;
  v13 = 0LL;
  v9 = *(_BYTE *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopCoalRegistrationListLock, 0LL);
  for ( i = (signed __int64 *)PopCoalRegistrationList;
        i != (signed __int64 *)&PopCoalRegistrationList;
        i = (signed __int64 *)*i )
  {
    v4 = i + 2;
    v5 = ExReferenceCallBackBlock(i + 2);
    v6 = v5;
    if ( v5 )
    {
      if ( *((_BYTE *)i - 16) != v9 )
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, char *, __int64))v5[1].Count)(v5, &v9, v13);
      _m_prefetchw(v4);
      v7 = *v4;
      while ( ((unsigned __int64)v6 ^ v7) < 0xF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v4, v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_9;
      }
      ExReleaseRundownProtection_0(v6);
    }
LABEL_9:
    ;
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
}
