/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180021760
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x180002D40 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x180005B5C (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x180006534 (RtlpCSparseBitmapLock.c)
 *     RtlpHpLfhContextCompact @ 0x180006E1C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180006EAC (RtlpHpLfhOwnerCompact.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18002F380 (RtlpHpLfhSubsegmentCreate.c)
 *     LdrpGetFromMUIMemCache @ 0x1800335B8 (LdrpGetFromMUIMemCache.c)
 *     RtlpCreateWnfNameSubscription @ 0x18004277C (RtlpCreateWnfNameSubscription.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180043280 (EtwpCheckForPrivatePreEnable.c)
 *     RtlpCreateSerializationGroup @ 0x180044D5C (RtlpCreateSerializationGroup.c)
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     LdrpAllocateTls @ 0x180054ACC (LdrpAllocateTls.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005F284 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     TpAllocPoolInternal @ 0x180062D04 (TpAllocPoolInternal.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180063E3C (RtlpWnfProcessCurrentDescriptor.c)
 *     TpTrimPools @ 0x1800651A0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x1800654C0 (RtlSleepConditionVariableSRW.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006D5A0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006D6D0 (RtlpComputeDllPath.c)
 *     SbAtomicCaptureContextGuid @ 0x18006FAE4 (SbAtomicCaptureContextGuid.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800710DC (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpFreeTls @ 0x1800714B8 (LdrpFreeTls.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180074680 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlpHpTagQueryTags @ 0x1800753C4 (RtlpHpTagQueryTags.c)
 *     _LdrpInitialize @ 0x180075C8C (_LdrpInitialize.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18007CDD0 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlCheckHeldCriticalSections @ 0x18007E000 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800822C0 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x180084A6C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180084FCC (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008B490 (RtlpWnfRetryTimerCallback.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008B61C (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpHpTagContextUpdate @ 0x18009CFB0 (RtlpHpTagContextUpdate.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800D521C (LdrpLockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8000 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E10DC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800ED868 (RtlPosixBarrier.c)
 *     RtlpFcWnfCallback @ 0x180101EB0 (RtlpFcWnfCallback.c)
 *     RtlpHpStackTraceAddStack @ 0x180108840 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180109280 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180109478 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1801094F4 (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x1801188A8 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801192D4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlBackoff @ 0x18005E2B8 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180064DB0 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x18007ABBC (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0F10 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 i; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 UniqueThread; // rcx
  unsigned __int64 Value; // rdi
  __int64 v7; // rbx
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  unsigned int v18[5]; // [rsp+44h] [rbp-14h] BYREF
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  UniqueThread = 17LL;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Value )
  {
    while ( 1 )
    {
      v7 = (Value >> 1) & 1;
      if ( (Value & 1) != 0 && (v7 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, i, v2, v3, v13) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v16 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v18[0] = 2;
        v15 = 0LL;
        if ( v7 )
        {
          v14 = 0LL;
          v17 = -1;
          UniqueThread = (unsigned __int8)Value;
          v13 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v13 | Value & 8 | 7;
          LOBYTE(UniqueThread) = (Value & 4) == 0;
        }
        else
        {
          v17 = -2;
          v14 = &v13;
          i = (unsigned __int64)&v13 + 3;
        }
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, i, Value);
        v9 = Value == v10;
        Value = v10;
        if ( !v9 )
          goto LABEL_14;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v2 = __rdtsc();
            v3 = v2 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              UniqueThread = v18[0];
              if ( (v18[0] & 2) == 0 )
                break;
              UniqueThread = v2;
              v12 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v12) << 32;
              v2 = v12;
              if ( v12 <= UniqueThread || v12 >= v3 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              UniqueThread = v18[0];
              if ( (v18[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v18, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v18[0] & 4) == 0 );
        }
      }
      else
      {
        v8 = (Value | 1) + 16;
        if ( v7 )
          v8 = Value | 1;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, Value) )
          return;
LABEL_14:
        RtlBackoff(&v19);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
