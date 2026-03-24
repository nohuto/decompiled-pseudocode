/*
 * XREFs of DestroyThreadsObjects @ 0x1C00347E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     DestroyCacheDCEntries @ 0x1C00088C8 (DestroyCacheDCEntries.c)
 *     ThreadUnlock1 @ 0x1C002F910 (ThreadUnlock1.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0043ABC (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0043DC4 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0043E10 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C0046BAC (HMAssignmentUnlockWorker.c)
 *     IsCleanupW32ThreadLocksSupported @ 0x1C0098FB8 (IsCleanupW32ThreadLocksSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rbp
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  char *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries((__int64)gptiCurrent);
  while ( *((_QWORD *)v0 + 52) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 && qword_1C0256840 )
    qword_1C0256840(v0);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  if ( *((_QWORD *)v0 + 134) )
  {
    if ( qword_1C0256848 && (int)qword_1C0256848() >= 0 && qword_1C0256850 )
      qword_1C0256850(*((_QWORD *)v0 + 134), 1LL);
    *((_QWORD *)v0 + 134) = 0LL;
  }
  if ( *((_QWORD *)v0 + 135) )
  {
    if ( qword_1C0256858 && (int)qword_1C0256858() >= 0 && qword_1C0256860 )
      qword_1C0256860(*((_QWORD *)v0 + 135), 1LL);
    *((_QWORD *)v0 + 135) = 0LL;
  }
  GetDomainLockRef(14);
  v1 = giheLast;
  if ( giheLast >= 0LL )
  {
    v2 = 24LL * giheLast;
    v3 = 32LL * giheLast;
    do
    {
      v4 = (char *)qword_1C024FA38 + v3;
      v5 = *((unsigned __int8 *)qword_1C024FA38 + v3 + 24);
      if ( (_BYTE)v5 )
      {
        if ( (*((_BYTE *)&unk_1C020946C + 24 * v5) & 2) != 0 )
        {
          if ( (_BYTE)v5 == 2 )
          {
            v6 = *(_QWORD *)((char *)gpKernelHandleTable + v2) + 80LL;
            if ( *(_QWORD *)v6 )
            {
              if ( *(struct tagTHREADINFO **)(*(_QWORD *)v6 + 16LL) == v0 )
                HMAssignmentUnlockWorker(v6, v5, v4, gpKernelHandleTable);
            }
          }
        }
        else if ( *(struct tagTHREADINFO **)((char *)gpKernelHandleTable + v2 + 8) == v0 && (v4[25] & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C024FA38 + v3));
        }
      }
      v3 -= 32LL;
      v2 -= 24LL;
      --v1;
    }
    while ( v1 >= 0 );
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
}
