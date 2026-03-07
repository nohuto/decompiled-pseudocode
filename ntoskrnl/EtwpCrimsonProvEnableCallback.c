void __fastcall EtwpCrimsonProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  REGHANDLE v9; // rsi
  int v10; // edi
  int v11; // ebx
  int v12; // edi
  BOOLEAN v13; // al
  int v14; // ecx
  __int64 v15; // r9
  int *v16; // r10
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // r8d
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  REGHANDLE v22; // rsi
  int v23; // ebx
  int v24; // edi
  BOOLEAN v25; // al
  int v26; // ecx
  int v27; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-4Ch]
  int v29; // [rsp+38h] [rbp-48h]
  int v30; // [rsp+3Ch] [rbp-44h]
  int v31; // [rsp+40h] [rbp-40h]
  int v32; // [rsp+44h] [rbp-3Ch]

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( (_DWORD)CallbackContext != 1 )
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v22 = EtwpFileProvRegHandle;
      v23 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) != 0 ? 0x200 : 0;
      v27 = 100663808;
      v24 = v23 | 0x2000000;
      if ( !EtwProviderEnabled(v22, 0, 0x60uLL) )
        v24 = v23;
      v25 = EtwProviderEnabled(v22, 0, 0x1FA0uLL);
      v26 = v24 | 0x4000000;
    }
    else
    {
      if ( (_DWORD)CallbackContext != 536870913 )
      {
        v27 = (int)CallbackContext;
        v28 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
LABEL_30:
        v15 = 1LL;
        goto LABEL_13;
      }
      v27 = 545783808;
      v24 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x420uLL) != 0 ? 0x20080000 : 0;
      v25 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL);
      v26 = v24 | 0x20800000;
    }
    if ( !v25 )
      v26 = v24;
    v28 = v26;
    goto LABEL_30;
  }
  v9 = EtwpPsProvRegHandle;
  v10 = 0;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ProcessStart) || EtwEventEnabled(v9, &EnableProcessTracingCallbacks) )
    v10 = 1;
  v11 = v10 | 2;
  if ( !EtwEventEnabled(v9, &ThreadStart) )
    v11 = v10;
  v27 = 524295;
  v12 = v11 | 4;
  if ( !EtwEventEnabled(v9, &ImageLoad) )
    v12 = v11;
  v13 = EtwEventEnabled(v9, &JobStart);
  v14 = v12 | 0x80000;
  v29 = 536879104;
  if ( !v13 )
    v14 = v12;
  v28 = v14;
  v30 = EtwProviderEnabled(v9, 0, 0x180uLL) != 0 ? 0x20002000 : 0;
  v31 = 1073741826;
  v32 = EtwProviderEnabled(v9, 0, 0x200uLL) != 0 ? 0x40000002 : 0;
  if ( ControlCode == 2 )
    EtwpPsProvCaptureState(&PsProvGuid, MatchAnyKeyword);
  v15 = 3LL;
LABEL_13:
  v16 = &v27;
  do
  {
    v17 = EtwpHostSiloState;
    v18 = (unsigned __int64)(unsigned int)v16[1] >> 29;
    v19 = v16[1] & 0x1FFFFFFF;
    v20 = *v16 & ~v16[1];
    v16 += 2;
    *(_DWORD *)(EtwpHostSiloState + 4 * v18 + 4540) |= v19;
    *(_DWORD *)(v17 + 4 * ((unsigned __int64)v20 >> 29) + 4540) &= ~(v20 & 0x1FFFFFFF);
    --v15;
  }
  while ( v15 );
  KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1467446341LL);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))EtwpUpdateKernelGroupsWork;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
}
