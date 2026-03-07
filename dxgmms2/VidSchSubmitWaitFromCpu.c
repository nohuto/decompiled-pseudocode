__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 Pool2; // rax
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  char v18; // cl
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // r14
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  _QWORD v28[2]; // [rsp+20h] [rbp-58h] BYREF
  char v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  __int16 v32; // [rsp+58h] [rbp-20h]

  v8 = a1;
  v12 = 0;
  if ( !(_DWORD)v8 )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(64LL, 120LL, 945908054LL);
    v15 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225495LL;
    }
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 104) = 0;
    if ( (unsigned int)v8 > 4 )
    {
      v16 = 0xFFFFFFFFFFFFFFFFuLL % v8;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x10 )
        goto LABEL_30;
      *(_QWORD *)(Pool2 + 32) = ExAllocatePool2(64LL, 16 * v8, 945908054LL);
    }
    else
    {
      *(_QWORD *)(Pool2 + 32) = Pool2 + 40;
      if ( (_DWORD)v8 )
        memset((void *)(Pool2 + 40), 0, 16 * v8);
    }
    v16 = v15[4];
    *((_DWORD *)v15 + 26) = v8;
    if ( v16 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
      v18 = (2 * a6) | a5 & 0xFD | v15[14] & 0xFC;
      v15[3] = a7;
      v19 = a8;
      *((_BYTE *)v15 + 112) = v18;
      if ( a8 )
      {
        v20 = v18 | 4;
      }
      else
      {
        v19 = a4;
        v20 = v18 & 0xFB;
      }
      *((_BYTE *)v15 + 112) = v20;
      v15[2] = v19;
      if ( (_DWORD)v8 )
      {
        v21 = a2 - a3;
        v22 = v8;
        do
        {
          v23 = *(_QWORD *)(v21 + a3);
          a3 += 8LL;
          *(_QWORD *)v16 = v23;
          v16 += 16LL;
          *(_QWORD *)(v16 - 8) = *(_QWORD *)(a3 - 8);
          --v22;
        }
        while ( v22 );
      }
      v32 = 0;
      v30 = v17 + 1728;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 1728), &LockHandle);
      LOBYTE(v32) = 1;
      v28[1] = v28;
      v28[0] = v28;
      v29 = 0;
      v24 = *(_QWORD **)(v17 + 848);
      if ( *v24 != v17 + 840 )
LABEL_34:
        __fastfail(3u);
      v15[1] = v24;
      *v15 = v17 + 840;
      *v24 = v15;
      *(_QWORD *)(v17 + 848) = v15;
      VidSchiUnwaitMonitoredFences(v28, v17, 0LL);
      if ( !v29 )
      {
        while ( 1 )
        {
          v25 = (_QWORD *)v28[0];
          if ( *(_QWORD **)(v28[0] + 8LL) != v28 )
            goto LABEL_34;
          v26 = *(_QWORD *)v28[0];
          if ( *(_QWORD *)(*(_QWORD *)v28[0] + 8LL) != v28[0] )
            goto LABEL_34;
          v28[0] = *(_QWORD *)v28[0];
          *(_QWORD *)(v26 + 8) = v28;
          if ( v25 == v28 )
            break;
          *v25 = 0LL;
          v25[1] = 0LL;
          HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v28, (struct VIDSCH_HW_QUEUE *)(v25 - 22));
        }
        v29 = 1;
      }
      if ( (_BYTE)v32 )
      {
        if ( HIBYTE(v32) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      return 0LL;
    }
LABEL_30:
    VIDSCH_CPU_WAITER::`scalar deleting destructor'(v15, v16);
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  v13 = a2;
  while ( *(_DWORD *)(*(_QWORD *)v13 + 48LL) != 5 || !*(_BYTE *)(*(_QWORD *)v13 + 28LL) )
  {
    ++v12;
    v13 += 8LL;
    if ( v12 >= (unsigned int)v8 )
      goto LABEL_5;
  }
  return 3221225760LL;
}
