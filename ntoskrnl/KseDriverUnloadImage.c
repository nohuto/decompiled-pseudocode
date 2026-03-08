/*
 * XREFs of KseDriverUnloadImage @ 0x1407F7364
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x14036F8F4 (KsepLogInfo.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     KsepDbFreeDriverShims @ 0x14079E360 (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x14079E588 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  unsigned int *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  void (__fastcall *v10)(_QWORD); // rax
  __int64 v11; // rbp
  __int64 *v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rbx
  void *v24; // rcx
  __int64 v25; // rax
  void *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF

  v28 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C649B4 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( MmIsSessionAddress(v2) )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, v2, &v28) && v28 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C649E0, 0LL);
    v5 = (_QWORD *)v28;
    v6 = 0LL;
    v7 = (unsigned int *)(v28 + 24);
    v8 = *(_DWORD *)(v28 + 24);
    if ( v8 )
    {
      do
      {
        v9 = *(_QWORD *)(v5[4] + 80 * v6 + 72);
        if ( (*(_DWORD *)(v9 + 28) & 4) == 0 )
        {
          v10 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(v9 + 16) + 32LL);
          if ( v10 )
            v10(*(_QWORD *)(a1 + 48));
        }
        v8 = *v7;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *v7 );
    }
    v11 = 0LL;
    if ( v8 )
    {
      do
      {
        v12 = *(__int64 **)(v5[4] + 80 * v11 + 72);
        if ( !*((_DWORD *)v12 + 6) )
        {
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v13] = -1073740768;
          KsepHistoryErrors[2 * v13] = 460180;
          if ( (KsepDebugFlag & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x594u, 0LL);
        }
        v14 = *((_DWORD *)v12 + 7);
        v15 = *((_DWORD *)v12 + 6) - 1;
        *((_DWORD *)v12 + 6) = v15;
        if ( (v14 & 4) != 0 && !v15 )
        {
          v16 = (__int64 *)*v12;
          if ( *(__int64 **)(*v12 + 8) != v12 )
            goto LABEL_43;
          v17 = (__int64 **)v12[1];
          if ( *v17 != v12 )
            goto LABEL_43;
          *v17 = v16;
          v16[1] = (__int64)v17;
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *v7 );
      v5 = (_QWORD *)v28;
    }
    v18 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v19 = (_QWORD *)v5[1], (_QWORD *)*v19 != v5) )
LABEL_43:
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C649E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C649E0);
    KeAbPostRelease((ULONG_PTR)&qword_140C649E0);
    KeLeaveCriticalRegion();
    v20 = *v7;
    v21 = 0LL;
    if ( *v7 )
    {
      v22 = v28;
      do
      {
        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 80 * v21 + 72);
        v24 = *(void **)(v23 + 32);
        if ( v24 )
          ObfDereferenceObject(v24);
        if ( (*(_DWORD *)(v23 + 28) & 4) != 0 && !*(_DWORD *)(v23 + 24) )
        {
          KsepPoolFreePaged((void *)v23);
          v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v25]) = 0;
          LODWORD(KsepHistoryMessages[v25]) = 460237;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v23);
          KsepLogInfo(5, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v23);
        }
        v20 = *v7;
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < *v7 );
    }
    v26 = (void *)v28;
    KsepDbFreeDriverShims(*(_QWORD **)(v28 + 32), v20);
    KsepPoolFreePaged(v26);
    v27 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v27]) = 0;
    LODWORD(KsepHistoryMessages[v27]) = 460245;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5, "KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
