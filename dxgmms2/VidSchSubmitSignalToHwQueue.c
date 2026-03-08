/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x1C0044980
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001008 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0003670 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0003B80 (VidSchUnwaitFlipQueue.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0004050 (VidSchiReleaseSyncObjectReference.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     VidSchiSignalSyncObject @ 0x1C001C0A0 (VidSchiSignalSyncObject.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CDBE (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001DC60 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0DIGBGJFG@@@QEAA@XZ @ 0x1C002D7A0 (--1-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0DIGBGJFG@@@QEAA@XZ.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00C4C32 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitSignalToHwQueue(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        char **a4,
        int a5,
        unsigned __int64 *a6)
{
  char *v7; // rax
  __int64 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // r12
  unsigned __int64 *v14; // rdi
  char *v15; // r13
  __int64 v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  char v19; // r9
  unsigned __int64 v20; // rcx
  __int64 Elements; // rax
  struct _VIDSCH_QUEUE_PACKET **v23; // rsi
  __int64 v24; // r12
  unsigned int v25; // r14d
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r13
  _DWORD *HwQueuePacket; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // ecx
  __int64 v33; // rax
  unsigned int v34; // r13d
  struct _VIDSCH_QUEUE_PACKET **v35; // r12
  unsigned int v36; // edi
  unsigned int v37; // r14d
  struct _VIDSCH_QUEUE_PACKET **v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // rbx
  unsigned int v41; // r14d
  __int64 v42; // rcx
  __int64 v43; // rax
  char **v44; // r12
  unsigned __int64 *v45; // r13
  char *v46; // rdi
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v47; // rdx
  __int64 v48; // [rsp+58h] [rbp-79h]
  struct _VIDSCH_QUEUE_PACKET **v49; // [rsp+60h] [rbp-71h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v51[2]; // [rsp+80h] [rbp-51h] BYREF
  char v52; // [rsp+90h] [rbp-41h]
  PVOID P; // [rsp+98h] [rbp-39h] BYREF
  char v54; // [rsp+A0h] [rbp-31h] BYREF
  int v55; // [rsp+B0h] [rbp-21h]
  _QWORD v56[4]; // [rsp+B8h] [rbp-19h] BYREF
  __int16 v57; // [rsp+D8h] [rbp+7h]
  __int64 v60; // [rsp+130h] [rbp+5Fh]
  unsigned int v62; // [rsp+148h] [rbp+77h]

  v7 = *a4;
  v9 = a3;
  v10 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = *((_QWORD *)v7 + 1);
  v48 = v11;
  if ( (a5 & 0x80000004) != 0 )
    goto LABEL_26;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 1728), &LockHandle);
  v12 = 0;
  v13 = 0LL;
  if ( !(_DWORD)v9 )
    goto LABEL_24;
  v14 = a6;
  v15 = (char *)((char *)a4 - (char *)a6);
  while ( 1 )
  {
    v16 = *(_QWORD *)&v15[(_QWORD)v14];
    v17 = *(_DWORD *)(v16 + 48);
    if ( (unsigned int)(v17 - 4) > 1 || *(_BYTE *)(v16 + 28) )
      goto LABEL_18;
    v18 = *v14;
    v19 = *(_BYTE *)(v16 + 29);
    if ( *(_BYTE *)(v16 + 27) )
      v20 = *(_QWORD *)(*(_QWORD *)(v16 + 208) + 40LL);
    else
      v20 = v17 == 2 ? *(_QWORD *)(v16 + 64) : *(_QWORD *)(v16 + 88);
    if ( !v19 )
      break;
    if ( v18 < v20 )
    {
      WdLogSingleEntry2(3LL, v18, v20);
      goto LABEL_22;
    }
    if ( v18 == v20 )
      WdLogSingleEntry1(3LL, v18);
LABEL_18:
    v13 = (unsigned int)(v13 + 1);
    ++v14;
    if ( (unsigned int)v13 >= (unsigned int)v9 )
      goto LABEL_23;
  }
  if ( (int)v20 - (int)v18 <= 0 )
  {
    if ( (_DWORD)v20 == (_DWORD)v18 )
      WdLogSingleEntry1(3LL, (unsigned int)v18);
    goto LABEL_18;
  }
  WdLogSingleEntry2(3LL, (unsigned int)v18, (unsigned int)v20);
LABEL_22:
  v12 = -1073741811;
  WdLogSingleEntry2(2LL, a6[v13], -1073741811LL);
  ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
    a6[v13],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_23:
  v10 = a1;
LABEL_24:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 < 0 )
    return (unsigned int)v12;
LABEL_26:
  P = 0LL;
  v55 = 0;
  Elements = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements((__int64 *)&P, v10);
  v49 = (struct _VIDSCH_QUEUE_PACKET **)Elements;
  v23 = (struct _VIDSCH_QUEUE_PACKET **)Elements;
  if ( Elements )
  {
    v62 = 0;
    v24 = 0LL;
    v25 = 0;
    if ( v10 )
    {
      v26 = Elements;
      v27 = a2 - Elements;
      v60 = a2 - (_QWORD)v23;
      do
      {
        v28 = *(_QWORD *)(v27 + v26);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v48 + 1728), &LockHandle);
        if ( *(_QWORD *)(v28 + 160) == v28 + 160 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          HwQueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(v28, 0LL);
          *(_QWORD *)v26 = HwQueuePacket;
          if ( !HwQueuePacket )
          {
            WdLogSingleEntry2(3LL, -1073741801LL, 4668LL);
            if ( v25 )
            {
              v40 = v25;
              do
              {
                if ( *v23 )
                  VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v28, *v23);
                ++v23;
                --v40;
              }
              while ( v40 );
            }
            goto LABEL_28;
          }
          *HwQueuePacket = 895576406;
          v62 = v25;
          *(_DWORD *)(*(_QWORD *)v26 + 48LL) = 5;
          *(_QWORD *)(*(_QWORD *)v26 + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)v26 + 52LL) = 2;
          *(_QWORD *)(*(_QWORD *)v26 + 96LL) = v28;
          *(_QWORD *)(*(_QWORD *)v26 + 104LL) = KeGetCurrentThread();
          *(_QWORD *)(*(_QWORD *)v26 + 72LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)v26 + 272LL) ^= (*(_DWORD *)(*(_QWORD *)v26 + 272LL) ^ a5) & 1;
          if ( (a5 & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)v26 + 272LL) |= 4u;
          if ( (_DWORD)v9 )
          {
            v30 = 67LL;
            v31 = v9;
            do
            {
              v32 = *((_DWORD *)a4[v30 - 67] + 12);
              if ( v32 == 4 || v32 == 2 )
                *(_QWORD *)(v30 * 8 + *(_QWORD *)v26) = a6[v30 - 67];
              *(_QWORD *)(v30 * 8 + *(_QWORD *)v26 - 256) = a4[v30 - 67];
              ++v30;
              --v31;
            }
            while ( v31 );
            v23 = v49;
          }
          *(_DWORD *)(*(_QWORD *)v26 + 276LL) = v9;
          *(_QWORD *)(*(_QWORD *)v26 + 792LL) = 0LL;
          v33 = *(_QWORD *)v26;
          if ( v24 )
          {
            *(_QWORD *)(v33 + 800) = v24;
            *(_QWORD *)(v24 + 792) = *(_QWORD *)v26;
          }
          else
          {
            *(_QWORD *)(v33 + 800) = 0LL;
          }
          v24 = *(_QWORD *)v26;
        }
        v27 = v60;
        ++v25;
        v26 += 8LL;
      }
      while ( v25 < a1 );
      if ( !v24 )
        goto LABEL_69;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v48 + 1728), &LockHandle);
      v34 = v62;
      v35 = v23;
      v36 = 0;
      do
      {
        if ( *v35 )
        {
          v37 = 0;
          if ( (_DWORD)v9 )
          {
            if ( v36 == v34 )
            {
              do
                VidSchiSignalSyncObject(v37++, (__int64)a4, a5, (__int64)a6, 1);
              while ( v37 < (unsigned int)v9 );
            }
            else
            {
              do
                VidSchiSignalSyncObject(v37++, (__int64)a4, a5, (__int64)a6, 0);
              while ( v37 < (unsigned int)v9 );
            }
            v34 = v62;
          }
        }
        ++v36;
        ++v35;
      }
      while ( v36 <= v34 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v38 = v49;
      v39 = v34 + 1;
      do
      {
        if ( *v38 )
          VidSchiSubmitCommandPacketToHwQueue(*v38);
        ++v38;
        --v39;
      }
      while ( v39 );
    }
    else
    {
LABEL_69:
      v57 = 0;
      v56[0] = v48 + 1728;
      AcquireSpinLock::Acquire((Acquire *)v56);
      v52 = 0;
      v51[1] = v51;
      v41 = 0;
      v51[0] = v51;
      if ( (_DWORD)v9 )
      {
        v42 = (__int64)a4;
        v43 = (__int64)a6;
        v44 = a4;
        v45 = a6;
        do
        {
          v46 = *v44;
          VidSchiSignalSyncObject(v41, v42, a5, v43, 1);
          VidSchiCompleteSignalSyncObject((__int64)v51, (__int64)v46, (a5 & 4) != 0, v45, 1);
          VidSchiReleaseSyncObjectReference(v46, v47);
          v43 = (__int64)a6;
          ++v44;
          v42 = (__int64)a4;
          ++v41;
          ++v45;
        }
        while ( v41 < (unsigned int)v9 );
      }
      if ( *(_DWORD *)(v48 + 804) )
        VidSchUnwaitFlipQueue((struct HwQueueStagingList *)v51, v48);
      if ( !v52 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v51);
      AcquireSpinLock::Release((AcquireSpinLock *)v56);
    }
    if ( P != &v54 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
LABEL_28:
    NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>((__int64)&P);
    return 3221225495LL;
  }
}
