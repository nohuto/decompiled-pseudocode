__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  PVOID *v1; // rsi
  PVOID *Pool2; // rax
  int SystemThread; // ebx
  __int64 **v5; // r13
  PVOID v6; // rax
  __int64 *v7; // r14
  __int64 v8; // rax
  int v9; // ebx
  ULONG MaximumProcessorCount; // eax
  ULONG v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  bool v18; // zf
  int v19; // eax
  __int64 *v20; // r15
  unsigned int v21; // ecx
  HANDLE Handle; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-1h]
  PVOID Object; // [rsp+68h] [rbp+7h] BYREF
  __int64 v26; // [rsp+70h] [rbp+Fh]
  __int64 v27; // [rsp+78h] [rbp+17h]
  _DWORD ThreadInformation[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (PVOID *)qword_140C31888;
  Handle = 0LL;
  if ( !qword_140C31888 )
  {
    Pool2 = (PVOID *)ExAllocatePool2(64LL, 1344LL, 1450669125LL);
    v1 = Pool2;
    if ( !Pool2 )
    {
      SystemThread = -1073741670;
      goto LABEL_31;
    }
    memset(Pool2, 0, 0x540uLL);
    v1[1] = (PVOID)-1LL;
    KeInitializeEvent((PRKEVENT)(v1 + 130), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 122), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureRebalanceDpc, v1);
    InitializeSListHead((PSLIST_HEADER)v1 + 67);
    KeInitializeEvent((PRKEVENT)v1 + 46, NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 141), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureQueueDpc, v1);
    KeInitializeDpc((PRKDPC)(v1 + 149), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureCleanupDpc, v1);
    KeInitializeEvent((PRKEVENT)(v1 + 157), NotificationEvent, 0);
    *((_DWORD *)v1 + 323) = (*a1 >> 11) & 1;
    qword_140C31888 = (__int64)v1;
  }
  v5 = (__int64 **)(v1 + 118);
  v1[121] = v1 + 120;
  v1[119] = v1 + 118;
  v1[118] = v1 + 118;
  v1[120] = v1 + 120;
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 80,
    EtwpCovSampCaptureAllocateApc,
    (unsigned int)(3 * a1[9]) >> 2,
    a1[9]);
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 90,
    EtwpCovSampCaptureAllocateCaptureBuffer,
    (unsigned int)(3 * a1[8]) >> 2,
    a1[8]);
  if ( a1[19] )
  {
    EtwpCovSampStackHashTableAlloc(v1 + 165);
    EtwpCovSampStackHashTableAlloc(v1 + 166);
    v6 = v1[165];
    if ( !v6 || !v1[166] )
    {
      SystemThread = -1073741670;
      v7 = (__int64 *)(v1 + 1);
      goto LABEL_12;
    }
    v1[164] = v6;
    v1[167] = (PVOID)(unsigned int)ExGenRandom(0);
  }
  v7 = (__int64 *)(v1 + 1);
  if ( v1[1] == (PVOID)-1LL )
  {
    v8 = ExSaAllocate(0x150u, 0);
    if ( v8 == -1 )
    {
      SystemThread = -1073741670;
      goto LABEL_12;
    }
    *v7 = v8;
  }
  if ( !*v1 )
  {
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)EtwpCovSampCaptureWorkerThread,
                     (__int64)v1,
                     0LL,
                     0LL);
    if ( SystemThread >= 0 )
    {
      Object = 0LL;
      ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      *v1 = Object;
      ThreadInformation[0] = 1;
      ThreadInformation[1] = 1;
      ThreadInformation[2] = 1;
      ZwSetInformationThread(Handle, ThreadIdealProcessorEx|ThreadIsIoPending, ThreadInformation, 0xCu);
      goto LABEL_19;
    }
LABEL_12:
    if ( *v7 != -1 )
      EtwpCovSampCaptureFreeLookasides(v1);
    goto LABEL_31;
  }
LABEL_19:
  v9 = *a1 & 0x200;
  KeSetBasePriorityThread((PKTHREAD)*v1, (v9 != 0) - 1);
  *((_DWORD *)v1 + 326) = v9 != 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v11 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v12 = 0LL;
    v27 = MaximumProcessorCount;
    v26 = 0LL;
    do
    {
      v13 = ((unsigned int)*v7 >> 13) & 0x3FFFF;
      _BitScanReverse(&v14, v13);
      v15 = *(_QWORD *)(v12 + ExSaPageArrays);
      v16 = ((unsigned __int64)*v7 >> 4) & 0x1FF;
      v24 = v14;
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8LL * (v14 - 2)) + 8 * (v13 ^ (unsigned int)(1 << v14)) + 8);
      memset((void *)(v17 + 8 * (v16 + 1)), 0, 0x148uLL);
      *(_QWORD *)(v17 + 8 * v16) = 0LL;
      EtwpCovSampLookasideInitialize(v1, v17 + 8 * (v16 + 2), v1 + 80);
      EtwpCovSampLookasideInitialize(v1, v17 + 8 * (v16 + 10), v1 + 90);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 18), (unsigned int)a1[10], (unsigned int)a1[11]);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 23), (unsigned int)a1[12], (unsigned int)a1[13]);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 28), (unsigned int)a1[14], (unsigned int)a1[15]);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 33), (unsigned int)a1[16], (unsigned int)a1[17]);
      v12 = v26 + 8;
      v18 = v27-- == 1;
      v26 += 8LL;
    }
    while ( !v18 );
    v5 = (__int64 **)(v1 + 118);
  }
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 100,
    EtwpCovSampCaptureAllocateSampleBuffer,
    (3 * a1[7] * v11) >> 2,
    a1[7] * v11);
  EtwpCovSampLookasideInitialize(v1, v1 + 110, v1 + 100);
  v19 = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 266) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 267) = v19;
  *((_DWORD *)v1 + 322) = 0;
  *((_DWORD *)v1 + 324) = a1[18];
  *((_DWORD *)v1 + 325) = a1[6];
  _InterlockedExchange((volatile __int32 *)v1 + 320, 1);
  v20 = *v5;
  *((_DWORD *)v1 + 321) = 0;
  while ( v20 != (__int64 *)v5 )
  {
    _InterlockedExchange((volatile __int32 *)v20 + 6, 1);
    *((_DWORD *)v20 + 7) = 0;
    while ( 1 )
    {
      v21 = *((_DWORD *)v20 + 9);
      if ( v21 >= *(_DWORD *)(v20[2] + 56) || v21 >= *((_DWORD *)v20 + 10) )
        break;
      SystemThread = EtwpCovSampLookasideGrow((__int64)v1, (__int64)(v20 - 2));
      if ( SystemThread < 0 )
        goto LABEL_12;
    }
    v20 = (__int64 *)*v20;
  }
  SystemThread = 0;
LABEL_31:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)SystemThread;
}
