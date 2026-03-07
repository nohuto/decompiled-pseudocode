__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  unsigned int i; // ebx
  struct _VIDSCH_CONTEXT **v10; // rcx
  unsigned int j; // ebx
  struct _VIDSCH_CONTEXT **v12; // rcx
  unsigned int k; // ebx
  struct VIDSCH_HW_QUEUE **v14; // rcx
  unsigned int m; // ebx
  PVOID *v16; // rcx
  unsigned int n; // ebx
  char *v18; // rcx
  unsigned int ii; // ebx
  __int64 *v20; // rcx
  __int64 v21; // rsi
  struct _VIDSCH_CONTEXT *v22; // rcx
  struct _VIDSCH_CONTEXT *v23; // rcx
  char *v24; // rcx
  __int64 v25; // rcx
  unsigned int jj; // ebx
  _QWORD **v27; // rsi
  _QWORD *v28; // rsi
  struct _VIDSCH_CONTEXT *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  _QWORD *v32; // rcx
  unsigned int v33; // ebp
  char *v34; // rcx
  char *v35; // rbx
  void *v36; // rcx
  void *v37; // rbx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v3 = (_QWORD *)((char *)a1 + 3560);
    if ( *((_QWORD *)a1 + 445) )
    {
      ExAcquirePushLockExclusiveEx(&gAdapterListLock, 0LL);
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *(_OWORD *)v3 = 0LL;
      ExReleasePushLockExclusiveEx(&gAdapterListLock, 0LL);
    }
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      if ( !VidSchIsWorkerThread(v7) )
      {
        VidSchFlushAdapter(a1, 17);
        v8 = (void *)*((_QWORD *)a1 + 21);
        ObfReferenceObject(v8);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v8);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 17);
      for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
      {
        if ( *((_DWORD *)a1 + i + 456) )
        {
          *((_DWORD *)a1 + i + 456) = 1;
          VidSchControlVSyncAdapter(a1, 5u, 0, i);
        }
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 566) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    v10 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 36);
    if ( v10 )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 19); ++j )
      {
        if ( v10[j] )
        {
          VidSchTerminateContext(v10[j]);
          v10 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 36);
        }
      }
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)a1 + 36) = 0LL;
    }
    v12 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 33);
    if ( v12 )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 19); ++k )
      {
        if ( v12[k] )
        {
          VidSchTerminateContext(v12[k]);
          v12 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 33);
        }
      }
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v14 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 35);
    if ( v14 )
    {
      for ( m = 0; m < *((_DWORD *)a1 + 19); ++m )
      {
        if ( v14[m] )
        {
          VidSchTerminateHwQueue(v14[m]);
          v14 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 35);
        }
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)a1 + 35) = 0LL;
    }
    v16 = (PVOID *)*((_QWORD *)a1 + 34);
    if ( v16 )
    {
      for ( n = 0; n < *((_DWORD *)a1 + 19); ++n )
      {
        if ( v16[n] )
        {
          VidSchTerminateHwContext(v16[n]);
          v16 = (PVOID *)*((_QWORD *)a1 + 34);
        }
      }
      ExFreePoolWithTag(v16, 0);
      *((_QWORD *)a1 + 34) = 0LL;
    }
    v18 = (char *)*((_QWORD *)a1 + 32);
    if ( v18 )
    {
      VidSchTerminateDevice(v18);
      *((_QWORD *)a1 + 32) = 0LL;
    }
    for ( ii = 0; ii < *((_DWORD *)a1 + 20); ++ii )
    {
      v20 = (__int64 *)*((_QWORD *)a1 + 79);
      if ( ii < *((_DWORD *)a1 + 176) )
        v20 += ii;
      v21 = *v20;
      if ( *v20 )
      {
        v22 = *(struct _VIDSCH_CONTEXT **)(v21 + 32);
        if ( v22 )
        {
          VidSchTerminateContext(v22);
          *(_QWORD *)(v21 + 32) = 0LL;
        }
      }
    }
    v23 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 31);
    if ( v23 )
    {
      VidSchTerminateContext(v23);
      *((_QWORD *)a1 + 31) = 0LL;
    }
    v24 = (char *)*((_QWORD *)a1 + 30);
    if ( v24 )
    {
      VidSchTerminateDevice(v24);
      *((_QWORD *)a1 + 30) = 0LL;
    }
    v25 = *((_QWORD *)a1 + 23);
    if ( v25 )
    {
      LOBYTE(v6) = 1;
      ExDeleteTimer(v25, v6, 0LL, 0LL);
    }
    for ( jj = 0; jj < *((_DWORD *)a1 + 21); *v32 = 0LL )
    {
      v27 = (_QWORD **)*((_QWORD *)a1 + 79);
      if ( jj < *((_DWORD *)a1 + 176) )
        v27 += jj;
      v28 = *v27;
      v29 = (struct _VIDSCH_CONTEXT *)v28[27];
      if ( v29 )
      {
        VidSchiDecrementContextReference(v29, 0);
        v28[27] = 0LL;
      }
      v30 = (void *)v28[23];
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      v31 = (void *)v28[25];
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      ExFreePoolWithTag(v28, 0);
      v32 = (_QWORD *)*((_QWORD *)a1 + 79);
      if ( jj < *((_DWORD *)a1 + 176) )
        v32 += jj;
      ++jj;
    }
    v33 = 0;
    for ( *((_DWORD *)a1 + 78) = 2; v33 < *((_DWORD *)a1 + 10); ++v33 )
    {
      if ( *((_QWORD *)a1 + v33 + 400) )
      {
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v33);
        v34 = *(char **)(*((_QWORD *)a1 + v33 + 400) + 136LL);
        if ( v34 )
        {
          v35 = v34 - 8;
          `vector destructor iterator'(
            v34,
            112LL,
            *((_QWORD *)v34 - 1),
            (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::~VIDSCH_FLIP_QUEUE_HISTORY_ENTRY);
          operator delete(v35);
        }
        operator delete(*(void **)(*((_QWORD *)a1 + v33 + 400) + 44248LL));
        ExFreePoolWithTag(*((PVOID *)a1 + v33 + 400), 0);
        *((_QWORD *)a1 + v33 + 400) = 0LL;
      }
      v36 = (void *)*((_QWORD *)a1 + v33 + 810);
      if ( v36 )
      {
        ExFreePoolWithTag(v36, 0);
        *((_QWORD *)a1 + v33 + 810) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 2880));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 320));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1088));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 984));
    if ( *((_BYTE *)a1 + 976) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 880));
      *((_BYTE *)a1 + 976) = 0;
    }
    v37 = (void *)*((_QWORD *)a1 + 21);
    _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(a1);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v37);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
