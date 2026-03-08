/*
 * XREFs of AMLIInitialize @ 0x1C00AAAB0
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00A92D4 (ACPIInitializeAMLI.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     InitializeNativeNamespace @ 0x1C0049FD4 (InitializeNativeNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2A8 (AMLIAddNamespaceOverride.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     SetLogSize @ 0x1C004E6AC (SetLogSize.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     NewGlobalHeap @ 0x1C004EFA4 (NewGlobalHeap.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     InitMutex @ 0x1C00509FC (InitMutex.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 *     AMLIGetEmOverride @ 0x1C00AB588 (AMLIGetEmOverride.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00AB6A0 (InitIllegalIOAddressListFromHAL.c)
 */

__int64 __fastcall AMLIInitialize(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  PVOID v5; // r14
  unsigned int v6; // ebx
  int v8; // edi
  unsigned int NameSpaceObject; // ebx
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int8 **v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rbx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v23; // [rsp+80h] [rbp+40h] BYREF
  int v24; // [rsp+90h] [rbp+50h]
  unsigned int v25; // [rsp+98h] [rbp+58h] BYREF

  v25 = a4;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  v23 = 0;
  v24 = 0;
  dword_1C006F938 = 0;
  pszDest[0] = 0;
  gAmliMethodCounter = 0LL;
  AMLIGetEmOverride();
  if ( gpnsNameSpaceRoot )
  {
    NameSpaceObject = -1072431085;
    LogError(-1072431085);
    AcpiDiagTraceAmlError(0LL, -1072431085);
    v10 = 66;
LABEL_3:
    PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    LODWORD(gdwGlobalHeapBlkSize) = a2;
    MemoryInfo = (__int64)v5;
    LODWORD(gdwCtxtBlkSize) = 2048;
    gdwfAMLIInit = v8;
    if ( (v8 & 8) != 0 )
      gdwfAMLI |= 4u;
    v11 = 1024;
    if ( v6 <= 0x400 )
    {
      v11 = v6;
      if ( v6 <= 0x10 )
        v11 = 16;
    }
    gdwcCTObjsMax = v11;
    _InterlockedOr(&gDebugger, 0x8000u);
    SetLogSize();
    KeInitializeSpinLock(&gdwGHeapSpinLock);
    KeInitializeSpinLock(&gdwGContextSpinLock);
    if ( (gdwfAMLIInit & 8) != 0
      || (gdwfAMLIInit & 0x10) == 0
      && (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_MULTITHREADED_EXECUTION, &v23) >= 0
      && v23 == 2 )
    {
      gdwfAMLI |= 4u;
    }
    ExInitializeNPagedLookasideList(
      &AMLIContextLookAsideList,
      0LL,
      0LL,
      0x200u,
      (unsigned int)gdwCtxtBlkSize,
      0x436C6D41u,
      gdwcCTObjsMax);
    NameSpaceObject = NewGlobalHeap(&gpheapGlobal);
    if ( !NameSpaceObject )
    {
      a5 = 0LL;
      *(_QWORD *)(gpheapGlobal + 16) = gpheapGlobal;
      NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "\\", 0LL, 0LL, 0LL, 0);
      if ( !NameSpaceObject )
      {
        v12 = 0;
        v13 = (unsigned __int8 **)apszDefinedRootObjs;
        while ( 1 )
        {
          NameSpaceObject = CreateNameSpaceObject(
                              gpheapGlobal,
                              *v13,
                              0LL,
                              0LL,
                              &AmliGlobalPreDefinedRootObjects[v12],
                              0);
          if ( NameSpaceObject )
            break;
          ++v12;
          ++v13;
          if ( v12 >= 5 )
          {
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_REV", 0LL, 0LL, &a5, 0);
            if ( !NameSpaceObject )
            {
              v14 = a5;
              *(_WORD *)(a5 + 66) = 1;
              *(_QWORD *)(v14 + 80) = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
              NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OS", 0LL, 0LL, &a5, 0);
              if ( !NameSpaceObject )
              {
                v15 = a5;
                *(_WORD *)(a5 + 66) = 2;
                *(_DWORD *)(v15 + 88) = 21;
                v16 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0x15u);
                *(_QWORD *)(v15 + 96) = v16;
                if ( !v16 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v10 = 68;
                  goto LABEL_3;
                }
                memmove(v16, "Microsoft Windows NT", *(unsigned int *)(v15 + 88));
                NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OSI", 0LL, 0LL, &a5, 0);
                if ( !NameSpaceObject )
                {
                  v17 = a5;
                  *(_WORD *)(a5 + 66) = 8;
                  *(_DWORD *)(v17 + 88) = 202;
                  v18 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xCAu);
                  *(_QWORD *)(v17 + 96) = v18;
                  if ( !v18 )
                  {
                    NameSpaceObject = -1073741670;
                    LogError(-1073741670);
                    AcpiDiagTraceAmlError(0LL, -1073741670);
                    v10 = 69;
                    goto LABEL_3;
                  }
                  memset(v18, 0, *(unsigned int *)(v17 + 88));
                  *(_BYTE *)(*(_QWORD *)(v17 + 96) + 193LL) |= 1u;
                  v19 = *(_QWORD *)(v17 + 96);
                  *(_WORD *)(v19 + 194) = OSIAML;
                  *(_BYTE *)(v19 + 196) = 104;
                  NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_GL", 0LL, 0LL, &a5, 0);
                  if ( !NameSpaceObject )
                  {
                    v20 = a5;
                    *(_WORD *)(a5 + 64) = 2;
                    NameSpaceObject = InitMutex(0LL, gpheapGlobal, v20, 0, 1);
                    if ( !NameSpaceObject )
                    {
                      NameSpaceObject = InitializeNativeNamespace();
                      if ( !NameSpaceObject )
                      {
                        AMLIAddNamespaceOverride();
                        KeInitializeSpinLock(&SpinLock);
                        NewIrql = 0;
                        qword_1C0070068 = (__int64)DispatchCtxtQueue;
                        qword_1C0070058 = 0LL;
                        qword_1C0070070 = (__int64)&gReadyQueue;
                        qword_1C0070088 = (__int64)&qword_1C0070080;
                        qword_1C0070080 = (__int64)&qword_1C0070080;
                        qword_1C0070040 = (__int64)&qword_1C0070038;
                        qword_1C0070038 = (__int64)&qword_1C0070038;
                        KeInitializeSpinLock(&gmutCtxtList);
                        byte_1C00701C8 = 0;
                        KeInitializeSpinLock(&gmutOwnerList);
                        byte_1C0070300 = 0;
                        KeInitializeSpinLock(&gmutHeap);
                        byte_1C00702F0 = 0;
                        KeInitializeSpinLock(&gmutSleep);
                        byte_1C00702E0 = 0;
                        v24 = 9;
                        ExAllocateTimerInternal2((PEX_RUNDOWN_REF)SleepQueueDpc);
                        SleepTimer = v21;
                        qword_1C00702C8 = (__int64)&SleepQueue;
                        SleepQueue = (__int64)&SleepQueue;
                        qword_1C006E888 = (__int64)&RunningContextListHead;
                        RunningContextListHead = (__int64)&RunningContextListHead;
                        InitIllegalIOAddressListFromHAL();
                        v25 = 4;
                        AmliWatchdogEnabled = 1;
                        if ( (unsigned int)OSReadRegValue("AmliWatchdogTimeout", 0LL, &AmliWatchdogTimeout, &v25)
                          || v25 != 4 )
                        {
                          AmliWatchdogTimeout = 30;
                        }
                        if ( AmliWatchdogTimeout )
                        {
                          if ( (unsigned int)AmliWatchdogTimeout < 0xF )
                            AmliWatchdogTimeout = 15;
                        }
                        else
                        {
                          AmliWatchdogEnabled = 0;
                        }
                        if ( (unsigned int)OSReadRegValue("AmliWatchdogAction", 0LL, &AmliWatchdogAction, &v25)
                          || v25 != 4 )
                        {
                          AmliWatchdogAction = 0;
                        }
                        _InterlockedExchange(&dword_1C006E9C0, 0);
                        AcpiRecordBlackboxWorkItem.WorkerRoutine = (void (__fastcall *)(void *))AcpiRecordBlackboxInformationWorker;
                        NameSpaceObject = 0;
                        AcpiRecordBlackboxWorkItem.Parameter = 0LL;
                        AcpiRecordBlackboxWorkItem.List.Flink = 0LL;
                        goto LABEL_45;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
      }
    }
    if ( NameSpaceObject == 32772 )
      NameSpaceObject = 259;
  }
LABEL_45:
  if ( (gdwfAMLIInit & 1) != 0 )
  {
    PrintDebugMessage(67, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return NameSpaceObject;
}
