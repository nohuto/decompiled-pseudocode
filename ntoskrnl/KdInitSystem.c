/*
 * XREFs of KdInitSystem @ 0x140AAE040
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x14056537C (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x140566F70 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x140A84010 (KiSystemStartup.c)
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 *     KiSetProcessorSignature @ 0x140A8B504 (KiSetProcessorSignature.c)
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     KdPollBreakIn @ 0x1402C7DA0 (KdPollBreakIn.c)
 *     MmGetPagedPoolCommitPointer @ 0x1403031E8 (MmGetPagedPoolCommitPointer.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     DbgLoadImageSymbols @ 0x14036C6D0 (DbgLoadImageSymbols.c)
 *     KeIsKernelCetEnabled @ 0x140384804 (KeIsKernelCetEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _strupr @ 0x1403D2DE0 (_strupr.c)
 *     strncmp @ 0x1403D3310 (strncmp.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     atol @ 0x1403D3700 (atol.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     KdDisableDebuggerWithLock @ 0x140565128 (KdDisableDebuggerWithLock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     KdRegisterDebuggerDataBlock @ 0x140AAE5A4 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  char v6; // r15
  unsigned int i; // edi
  __int64 Pool2; // rax
  char v10; // r14
  __int64 v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // rcx
  char *v14; // rbp
  char v15; // si
  char *v16; // rax
  const char *v17; // rdi
  unsigned __int64 v18; // rax
  char v19; // dl
  const char *j; // rcx
  const char *v21; // rdi
  __int64 v22; // rdx
  bool v23; // zf
  unsigned int v24; // ebp
  __int64 *k; // rdi
  __int64 v26; // rdx
  char *v27; // r9
  unsigned int v28; // r8d
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  char SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a1 != -1 )
  {
    if ( a1 )
    {
      KeQueryPerformanceCounter(&KdPerformanceCounterRate);
      if ( !KdPitchDebugger )
      {
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          Pool2 = ExAllocatePool2(64LL, 0x1000uLL, 0x6F49644Bu);
          if ( Pool2 )
          {
            _InterlockedOr(v33, 0);
            KdLogBuffer[i] = Pool2;
          }
        }
      }
      KdpLoaderDebuggerBlock = 0LL;
      return 1;
    }
    if ( (_BYTE)KdDebuggerEnabled )
      goto LABEL_70;
    LOWORD(KdDebuggerEnabled) = 0;
    KdpDebugRoutineSelect = 0;
    if ( !KdPitchDebugger || (v10 = 1, !KdLocalDebugEnabled) )
      v10 = 0;
    if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
      KdTransportMaxPacketSize = 1152;
    if ( !KdpDebuggerDataListHead )
    {
      *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
      qword_140C02310 = (__int64)MmGetPagedPoolCommitPointer();
      KdpPowerSpinLock = 0LL;
      qword_140C56B78 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      qword_140C56B88 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      KdRegisterDebuggerDataBlock(v11, &KdDebuggerDataBlock);
      WORD1(KdVersionBlock) = NtBuildNumber;
      LOWORD(KdVersionBlock) = (unsigned int)NtBuildNumber >> 28;
      qword_140C099C0 = (__int64)&KdpDebuggerDataListHead;
      WORD3(KdVersionBlock) |= 1u;
      *((_QWORD *)&xmmword_140C099B0 + 1) = &PsLoadedModuleList;
      *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->Context )
    {
      CurrentPrcb->ContextFlagsInit = 1048587;
      CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
    }
    if ( a2 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
      off_140C02478 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = a2 + 16;
      v14 = *(char **)(a2 + 216);
      *(_QWORD *)&xmmword_140C099B0 = v13;
      if ( v14 )
      {
        strupr(v14);
        KdPrintBufferAllocateSize = 0;
        v15 = 0;
        v16 = strstr(v14, "DBGPRINT_LOG_SIZE=");
        if ( v16 )
        {
          v32 = (atol(v16 + 18) + 4095) & 0xFFFFF000;
          KdPrintBufferAllocateSize = v32;
          if ( v32 <= 0x1000000 )
          {
            if ( v32 <= 0x1000 )
              KdPrintBufferAllocateSize = 0;
          }
          else
          {
            KdPrintBufferAllocateSize = 0x1000000;
          }
        }
        if ( strstr(v14, "NODEBUG") )
        {
          KdPitchDebugger = 1;
          KdPageDebuggerSection = 1;
          KdpBootedNodebug = 1;
        }
        else if ( strstr(v14, "DEBUGPORT=LOCAL") )
        {
          KdPitchDebugger = 1;
          v10 = 1;
          KdPageDebuggerSection = 1;
          LOBYTE(KdDebuggerNotPresent) = 1;
          KdLocalDebugEnabled = 1;
          KdpBootedNodebug = 0;
        }
        else
        {
          v17 = v14;
          do
          {
            v18 = (unsigned __int64)strstr(v17, " DEBUG=");
            if ( !v18 )
            {
              v18 = (unsigned __int64)strstr(v17, " DEBUG");
              if ( !v18 )
                break;
            }
            v19 = *(_BYTE *)(v18 + 6);
            if ( v19 == 61 || (v19 & 0xDF) == 0 )
            {
              KdpBootedNodebug = 0;
              v15 = 1;
              if ( *(_BYTE *)(v18 + 6) == 61 )
              {
                for ( j = (const char *)(v18 + 7); ; j = v21 + 1 )
                {
                  LOBYTE(v18) = *j;
                  v21 = j;
                  while ( (_BYTE)v18 )
                  {
                    if ( (unsigned __int8)v18 <= 0x2Cu )
                    {
                      v22 = 0x100100000200LL;
                      if ( _bittest64(&v22, v18) )
                        break;
                    }
                    LOBYTE(v18) = *++v21;
                  }
                  v18 = (unsigned int)((_DWORD)v21 - (_DWORD)j);
                  if ( (_DWORD)v21 == (_DWORD)j )
                    break;
                  switch ( (_DWORD)v18 )
                  {
                    case 0xA:
                      LODWORD(v18) = strncmp(j, "AUTOENABLE", 0xAuLL);
                      if ( !(_DWORD)v18 )
                      {
                        v5 = 1;
                        KdAutoEnableOnEvent = 1;
                        v6 = 0;
                      }
                      break;
                    case 7:
                      LODWORD(v18) = strncmp(j, "DISABLE", 7uLL);
                      if ( !(_DWORD)v18 )
                      {
                        v5 = 1;
                        KdAutoEnableOnEvent = 0;
                        v6 = 1;
                      }
                      break;
                    case 6:
                      LODWORD(v18) = strncmp(j, "NOUMEX", 6uLL);
                      if ( !(_DWORD)v18 )
                        KdIgnoreUmExceptions = 1;
                      break;
                  }
                  if ( *v21 != 44 )
                    break;
                }
              }
              break;
            }
            v17 = (const char *)(v18 + 6);
          }
          while ( v18 != -6LL );
        }
        if ( strstr(v14, "NOEVENT") )
        {
          KdEventLoggingEnabled = 0;
        }
        else if ( strstr(v14, "EVENT") )
        {
          KdEventLoggingEnabled = 1;
          v15 = 1;
          KdPageDebuggerSection = 0;
        }
      }
      else
      {
        KdPitchDebugger = 1;
        v15 = 0;
        KdPageDebuggerSection = 1;
      }
    }
    else
    {
      v15 = 1;
      *(_QWORD *)&xmmword_140C099B0 = PsNtosImageBase;
    }
    qword_140C021B8 = xmmword_140C099B0;
    if ( !v10 )
    {
      if ( a2 && *(_DWORD *)(a2 + 12) < 2u || !v15 )
      {
        LOBYTE(KdDebuggerNotPresent) = 1;
        goto LABEL_70;
      }
      if ( (int)KdInitialize(0LL, a2, &KdpContext, a4) < 0 )
      {
        KdPitchDebugger = 0;
        v15 = 0;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 1;
      }
      else
      {
        KdpDebugRoutineSelect = 1;
      }
    }
    if ( !KdpDebuggerStructuresInitialized )
    {
      BYTE4(KdpContext) = 0;
      LODWORD(KdpContext) = 20;
      KeInitializeDpc(&KdpTimeSlipDpc, (PKDEFERRED_ROUTINE)KdpTimeSlipDpcRoutine, 0LL);
      KeInitializeTimerEx(&KdpTimeSlipTimer, NotificationTimer);
      KdpTimeSlipWorkItem.Parameter = 0LL;
      KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
      KdpTimeSlipWorkItem.List.Flink = 0LL;
      KdpDebuggerStructuresInitialized = 1;
    }
    KdTimerStart = 0LL;
    if ( KdEventLoggingEnabled && KdpBootedNodebug )
    {
      KdPitchDebugger = 1;
      KdEventLoggingPresent = v15;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 0;
    }
    else
    {
      v23 = KdLocalDebugEnabled == 0;
      LOBYTE(KdDebuggerEnabled) = 1;
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 1;
      if ( !v23 )
        goto LABEL_70;
    }
    if ( !KdEventLoggingEnabled || (_BYTE)KdDebuggerEnabled )
    {
      KdPitchDebugger = 0;
      if ( !v5 )
      {
        if ( !a2 )
        {
          DbgLoadImageSymbols(0LL, qword_140C021B8, 0xFFFFFFFFLL);
          return 1;
        }
        if ( KeIsKernelCetEnabled() && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        {
          LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 4;
          __writemsr(0x6A2u, __readmsr(0x6A2u) | 2);
        }
        v24 = 0;
        for ( k = *(__int64 **)(a2 + 16); k != (__int64 *)(a2 + 16); ++v24 )
        {
          if ( v24 >= 3 )
            break;
          DestinationString = 0LL;
          LODWORD(v26) = 0;
          v27 = (char *)k[10];
          v28 = *((unsigned __int16 *)k + 36) >> 1;
          if ( v28 >= 0x100 )
            v28 = 255;
          do
          {
            v29 = *v27;
            v27 += 2;
            v30 = (unsigned int)v26;
            v26 = (unsigned int)(v26 + 1);
            SourceString[v30] = v29;
          }
          while ( (unsigned int)v26 < v28 );
          if ( (unsigned int)v26 >= 0x100uLL )
            _report_rangecheckfailure();
          SourceString[v26] = 0;
          RtlInitAnsiString(&DestinationString, SourceString);
          DbgLoadImageSymbols((__int64)&DestinationString, k[6], 0xFFFFFFFFLL);
          k = (__int64 *)*k;
        }
        BYTE1(KdDebuggerEnabled) = KdPollBreakIn();
LABEL_71:
        v31 = *(_QWORD *)(a2 + 240);
        if ( v31 )
          memset((void *)(v31 + 2464), 0, 0x20uLL);
        return 1;
      }
      KdDisableDebuggerWithLock();
      KdBlockEnable = v6;
    }
LABEL_70:
    if ( !a2 )
      return 1;
    goto LABEL_71;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 8) != 0 )
    __debugbreak();
  return 1;
}
