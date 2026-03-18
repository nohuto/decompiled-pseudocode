/*
 * XREFs of PopFxRegisterPluginEx @ 0x1405CD5BC
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1405CA8D0 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x14098CDA0 (PoFxRegisterPlugin.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PopFxInitializeWorkPool @ 0x14085B454 (PopFxInitializeWorkPool.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140992720 (PopDiagTraceFxPluginRegistration.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int v7; // ebx
  bool v8; // cf
  __int16 v10; // ax
  __int64 Pool2; // rax
  _DWORD *v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rbp
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v19; // edx
  int v20; // r9d

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  switch ( v3 )
  {
    case 3u:
      v8 = a3[1] < 0x60u;
      break;
    case 2u:
      v8 = a3[1] < 0x58u;
      break;
    case 0u:
      return (unsigned int)-1073741811;
    default:
      goto LABEL_11;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
LABEL_11:
  if ( a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v10 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v10 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  Pool2 = ExAllocatePool2(64LL, 424LL, 1297630800LL);
  v12 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = PopFxInitializeWorkPool(Pool2 + 120, Pool2);
    if ( v7 >= 0 )
    {
      v12[4] = *a1;
      *((_QWORD *)v12 + 3) = a2;
      *((_QWORD *)v12 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v12 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v12 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxPluginLock, 0LL);
      v14 = (_QWORD *)PopFxDeviceRegisterHead;
      v15 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *(_QWORD *)v12 = v15;
      *((_QWORD *)v12 + 1) = v14;
      *(_QWORD *)(v15 + 8) = v12;
      *v14 = v12;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v12;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&PopFxPluginLock);
      v16 = KeGetCurrentThread();
      if ( (unsigned __int64)&PopFxPluginLock - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      _disable();
      p_Process = (__int64)&v16[1].Process;
      v19 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopFxPluginLock & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v19;
        p_Process += 96LL;
        if ( v19 >= 6 )
          goto LABEL_43;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( !p_Process )
      {
LABEL_43:
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&PopFxPluginLock, SessionId, 0LL);
        _enable();
        goto LABEL_51;
      }
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v20 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v16->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v20 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16, (__int64)&PopFxPluginLock, v20);
LABEL_51:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PopDiagTraceFxPluginRegistration(v12, a2, 0LL);
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      v8 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v12;
      if ( !v8 )
      {
        *((_QWORD *)a3 + 7) = PopFxProcessorIdleVeto;
        *((_QWORD *)a3 + 8) = PopFxPlatformIdleVeto;
        *((_QWORD *)a3 + 9) = PopFxUpdateProcessorIdleState;
        *((_QWORD *)a3 + 10) = PopFxUpdatePlatformIdleState;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = PopFxRequestCommon;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            PopFxAcpiPepRegistered = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v12, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
