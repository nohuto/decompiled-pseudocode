/*
 * XREFs of KsepGetShimsForDriver @ 0x14079E39C
 * Callers:
 *     KseDriverLoadImage @ 0x14079EAC4 (KseDriverLoadImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x14036F8F4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     KsepDbFreeDriverShims @ 0x14079E360 (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x14079E588 (KsepIsModuleShimmed.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbGetDriverShims @ 0x14079EDE8 (KsepDbGetDriverShims.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140800708 (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  int ShimsFromRegistry; // edi
  _QWORD *v12; // r14
  unsigned int v13; // ebx
  _QWORD *Paged; // rax
  _QWORD *v15; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v21 = 0LL;
  v20 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v22 = 0LL;
  if ( !(unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v22) )
  {
    ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v21, &v20);
    if ( ShimsFromRegistry == -1073741275 )
      ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v21, (__int64)&v20);
    if ( ShimsFromRegistry < 0 )
      goto LABEL_5;
    v12 = v21;
    v13 = v20;
    ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v21, v20);
    if ( ShimsFromRegistry >= 0 )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      v15 = Paged;
      if ( Paged )
      {
        Paged[4] = v12;
        *((_DWORD *)Paged + 6) = v13;
        Paged[2] = a3;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C649E0, 0LL);
        v17 = (_QWORD *)qword_140C649D8;
        if ( *(_UNKNOWN **)qword_140C649D8 != &unk_140C649D0 )
          __fastfail(3u);
        *v15 = &unk_140C649D0;
        v15[1] = v17;
        *v17 = v15;
        qword_140C649D8 = (__int64)v15;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C649E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C649E0);
        KeAbPostRelease((ULONG_PTR)&qword_140C649E0);
        KeLeaveCriticalRegion();
LABEL_5:
        *a5 = v21;
        *a6 = v20;
        goto LABEL_6;
      }
      ShimsFromRegistry = -1073741670;
    }
    if ( !v12 )
      return (unsigned int)ShimsFromRegistry;
    if ( v13 )
      KsepDbFreeDriverShims(v12, v13);
LABEL_6:
    if ( ShimsFromRegistry >= 0 )
    {
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v18]) = 0;
      LODWORD(KsepHistoryMessages[v18]) = 459119;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
      KsepLogInfo(7, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    }
    return (unsigned int)ShimsFromRegistry;
  }
  v19 = v22;
  *a5 = *(_QWORD *)(v22 + 32);
  *a6 = *(_DWORD *)(v19 + 24);
  return 0LL;
}
