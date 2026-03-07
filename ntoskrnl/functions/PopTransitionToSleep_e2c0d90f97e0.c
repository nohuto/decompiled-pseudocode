LONG __fastcall PopTransitionToSleep(struct _KEVENT *a1)
{
  unsigned int Lock; // esi
  LONG v3; // eax
  LONG v4; // ebx
  int v5; // eax
  bool v6; // cl
  char v7; // r14
  char v8; // r15
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]
  bool v14; // [rsp+90h] [rbp+30h] BYREF

  Lock = a1[3].Header.Lock;
  v13 = 0LL;
  v14 = 0;
  v11 = 0LL;
  v12 = 0LL;
  qword_140C3CB30 = (__int64)KeGetCurrentThread();
  if ( Lock != 3 && Lock != 6 )
  {
    KeSetEvent(a1, 0, 1u);
    KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
    v3 = PopInvokeSystemStateHandler(Lock);
LABEL_21:
    v4 = v3;
    goto LABEL_22;
  }
  if ( (PopSimulateHiberBugcheck & 0x20) == 0 )
  {
    v5 = PopEnlargeHiberFile(&v14);
    v6 = v14;
    LODWORD(v13) = 16;
    *(_QWORD *)&v11 = xHalPciEarlyRestore;
    if ( v5 < 0 )
      v6 = 1;
    *((_QWORD *)&v12 + 1) = 0LL;
    v7 = 0;
    *((_QWORD *)&v11 + 1) = PopEndMirroring;
    v8 = 0;
    *(_QWORD *)&v12 = PopMirrorPhysicalMemory;
    if ( v6 )
    {
      MmEmptyAllWorkingSets();
      v8 = 1;
      v9 = v13 | 1;
    }
    else if ( (dword_140C3CD6C & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
    {
      MmEmptyAllWorkingSets();
      v8 = 1;
      v9 = v13 | 4;
    }
    else
    {
      if ( Lock == 6 )
      {
        MmTrimFilePagesFromWorkingSets();
        v9 = v13 | 1;
LABEL_18:
        LODWORD(v13) = v9;
        byte_140C3E35C = v7;
        byte_140C3E35D = v8;
        dword_140C3E358 = v9;
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
        if ( v7 )
          MmFlushAllPagesEx(v8);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
        PopHibernatePowerStateHandlerType = Lock;
        PopSleeperHandoff = a1;
        v3 = MmDuplicateMemory(&v11);
        PopSleeperHandoff = 0LL;
        PopHibernatePowerStateHandlerType = 7;
        goto LABEL_21;
      }
      v9 = 20;
    }
    v7 = 1;
    goto LABEL_18;
  }
  KeSetEvent(a1, 0, 1u);
  KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
  v4 = 0;
LABEL_22:
  qword_140C3D0E0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39050;
  a1[3].Header.SignalState = v4;
  return KeSetEvent(a1 + 2, 0, 0);
}
