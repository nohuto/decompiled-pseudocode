__int64 __fastcall VidSchiSignalSyncObjectsFromCpu(
        struct HwQueueStagingList *a1,
        unsigned int a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        struct _D3DDDICB_SIGNALFLAGS a4,
        char *a5,
        struct VIDSCH_HW_QUEUE **a6)
{
  char *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rsi
  struct HwQueueStagingList *v10; // rax
  int v11; // ebx
  __int64 v12; // rbp
  char *v13; // r14
  signed __int64 v14; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  char v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // r12
  signed __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r15
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rdx
  __int64 v30; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-40h] BYREF

  v6 = a5;
  v7 = 0;
  v8 = a2;
  v10 = a1;
  v11 = *(_BYTE *)&a4.0 & 4;
  if ( (*(_BYTE *)&a4.0 & 4) == 0 )
  {
    v12 = 0LL;
    if ( !a2 )
      goto LABEL_48;
    v13 = a5;
    v14 = (char *)a3 - a5;
    while ( 1 )
    {
      v15 = *(_QWORD *)&v13[v14];
      if ( !*(_BYTE *)(v15 + 28) && (*(_DWORD *)(v15 + 52) & 0x7FFFFFFF) != 0x10 )
      {
        v16 = *(_QWORD *)v13;
        v17 = *(_BYTE *)(v15 + 29);
        if ( *(_BYTE *)(v15 + 27) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v15 + 208) + 40LL);
        }
        else if ( *(_DWORD *)(v15 + 48) == 2 )
        {
          v18 = *(_QWORD *)(v15 + 64);
        }
        else
        {
          v18 = *(_QWORD *)(v15 + 88);
        }
        if ( v17 )
        {
          if ( v16 < v18 )
          {
            WdLogSingleEntry2(3LL, v16, v18);
LABEL_22:
            v7 = -1073741811;
            WdLogSingleEntry2(2LL, *(_QWORD *)&a5[8 * v12], -1073741811LL);
            ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
              *(_QWORD *)&a5[8 * v12],
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return v7;
          }
          if ( v16 == v18 )
            WdLogSingleEntry1(3LL, v16);
        }
        else
        {
          if ( (int)v18 - (int)v16 > 0 )
          {
            WdLogSingleEntry2(3LL, (unsigned int)v16, (unsigned int)v18);
            goto LABEL_22;
          }
          if ( (_DWORD)v18 == (_DWORD)v16 )
            WdLogSingleEntry1(3LL, (unsigned int)v16);
        }
      }
      v12 = (unsigned int)(v12 + 1);
      v13 += 8;
      if ( (unsigned int)v12 >= (unsigned int)v8 )
        goto LABEL_24;
    }
  }
  if ( !a2 )
    goto LABEL_48;
LABEL_24:
  v19 = v8;
  v20 = (char *)a3 - a5;
  do
  {
    v21 = *(_QWORD *)&v6[v20];
    if ( *(_BYTE *)(v21 + 28) )
      goto LABEL_46;
    WdLogSingleEntry3(4LL, v21, **(_QWORD **)(v21 + 64), *(_QWORD *)v6);
    v22 = *(_QWORD *)&v6[v20];
    if ( *(_BYTE *)(v22 + 27) )
    {
      v23 = *(_QWORD *)(v22 + 208);
      v24 = *(_QWORD *)v6;
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 8), &LockHandle);
      v25 = *(_QWORD *)(v23 + 40);
      if ( v25 >= v24 )
        WdLogSingleEntry3(3LL, *(_QWORD *)(v22 + 16), v25, v24);
      else
        *(_QWORD *)(v23 + 40) = v24;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_37;
    }
    if ( !*(_BYTE *)(v22 + 30) || v11 )
    {
      v26 = *(_QWORD *)v6;
LABEL_36:
      *(_QWORD *)(v22 + 88) = v26;
      goto LABEL_37;
    }
    v26 = *(_QWORD *)v6;
    if ( *(_QWORD *)(v22 + 88) < *(_QWORD *)v6 )
      goto LABEL_36;
LABEL_37:
    v27 = *(_QWORD *)&v6[v20];
    v28 = *(_QWORD *)v6;
    v29 = *(unsigned __int64 **)(v27 + 64);
    if ( *(_BYTE *)(v27 + 29) )
    {
      if ( v11 || v28 > *v29 )
        *v29 = v28;
    }
    else if ( v11 || *(_DWORD *)v29 - (int)v28 < 0 )
    {
      *(_DWORD *)v29 = v28;
    }
    v30 = *(_QWORD *)&v6[v20];
    if ( *(_BYTE *)(v30 + 27) )
      VidSchiPropagateCrossAdapterSignal(v30);
LABEL_46:
    v6 += 8;
    --v19;
  }
  while ( v19 );
  v7 = 0;
  v10 = a1;
LABEL_48:
  VidSchiUnwaitMonitoredFences((__int64)v10, *((_QWORD *)*a3 + 1), (__int64)a6);
  return v7;
}
