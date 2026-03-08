/*
 * XREFs of KseRegisterShimEx @ 0x140800EE0
 * Callers:
 *     KseRegisterShim @ 0x140800EC0 (KseRegisterShim.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KsepLogError @ 0x140303450 (KsepLogError.c)
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KsepLogInfo @ 0x14036F8F4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     KsepIsShimRegistered @ 0x140801090 (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x14080110C (KsepGetLoadedModulesList.c)
 *     KsepValidateShimProviderAndData @ 0x1408011B0 (KsepValidateShimProviderAndData.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  char v12; // bl
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v18; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C649B4 != 2 )
    return 3221225473LL;
  v18 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v18);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v18, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C649E0, 0LL);
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v10, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C649E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C649E0);
          KeAbPostRelease((ULONG_PTR)&qword_140C649E0);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          LoadedModulesList = -1073741771;
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v16] = -1073741771;
          KsepHistoryErrors[2 * v16] = 131310;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(2LL, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepLogError(2LL, (__int64)"KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepPoolFreePaged(Paged);
        }
        else
        {
          *((_DWORD *)Paged + 6) = 0;
          Paged[2] = a1;
          *((_DWORD *)Paged + 7) = a3;
          Paged[4] = a4;
          v11 = (_QWORD *)qword_140C649C8;
          if ( *(_UNKNOWN **)qword_140C649C8 != &unk_140C649C0 )
            __fastfail(3u);
          *Paged = &unk_140C649C0;
          Paged[1] = v11;
          *v11 = Paged;
          qword_140C649C8 = (__int64)Paged;
          v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C649E0, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C649E0);
          KeAbPostRelease((ULONG_PTR)&qword_140C649E0);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_140C649E8;
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v13]) = 0;
          LODWORD(KsepHistoryMessages[v13]) = 131353;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(2LL, "KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
          KsepLogInfo(2, "KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
        }
      }
      else
      {
        LoadedModulesList = -1073741670;
      }
    }
    else
    {
      LoadedModulesList = -1073741823;
      v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140C40404[2 * v15] = -1073741823;
      KsepHistoryErrors[2 * v15] = 131277;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2LL, (__int64)"KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v18 )
    KsepPoolFreePaged(v18);
  return (unsigned int)LoadedModulesList;
}
