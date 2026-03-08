/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C0002440
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0002C54 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C63A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C003C8E4 (VidSchiTryEnterIndependentFlip.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall VidSchiUpdatePresentParameters(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v5; // r12
  char v6; // di
  __int128 v7; // xmm1
  bool v8; // si
  __int64 v9; // rcx
  unsigned int v10; // r14d
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // rax
  int v20; // edi
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned int v29; // edx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  char v34; // cl
  bool v36; // [rsp+30h] [rbp-A9h]
  int v37; // [rsp+34h] [rbp-A5h]
  _QWORD v38[2]; // [rsp+40h] [rbp-99h] BYREF
  char v39; // [rsp+50h] [rbp-89h]
  unsigned int v40; // [rsp+58h] [rbp-81h]
  char *v41; // [rsp+60h] [rbp-79h]
  __int64 v42; // [rsp+68h] [rbp-71h]
  char *v43; // [rsp+70h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+78h] [rbp-61h] BYREF
  __int16 v45; // [rsp+90h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-41h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-29h]
  __int128 v48; // [rsp+C0h] [rbp-19h]
  __int128 Source2; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v50; // [rsp+E0h] [rbp+7h] BYREF

  v40 = *(_DWORD *)(a2 + 116);
  v3 = v40;
  v5 = *((_QWORD *)a1 + v40 + 400);
  v41 = (char *)a1 + 8 * v40 + 3200;
  v36 = (*(_DWORD *)a2 & 0x800000) != 0;
  v6 = *(int *)a2 < 0;
  v7 = *(_OWORD *)(a2 + 452);
  Source2 = *(_OWORD *)(a2 + 436);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v50 = v7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
  v8 = v6 != *(_BYTE *)(v5 + 3040);
  *(_BYTE *)(v5 + 3040) = v6;
  if ( !v6
    || RtlCompareMemory((const void *)(v5 + 3044), &Source2, 0x10uLL) == 16
    && RtlCompareMemory((const void *)(v5 + 3060), &v50, 0x10uLL) == 16 )
  {
    if ( !v8 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)(v5 + 3044) = Source2;
    *(_OWORD *)(v5 + 3060) = v50;
  }
  v28 = *((_DWORD *)a1 + 38);
  v29 = 0;
  if ( v28 )
  {
    v30 = *((_QWORD *)a1 + v3 + 400);
    do
    {
      v31 = *(int *)(288LL * v29 + v30 + 188);
      if ( (int)v31 > -1 && *(_DWORD *)(160 * v31 + *((_QWORD *)a1 + 416) + 112) == 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 0x100000LL, 0LL, v3, a1);
        __debugbreak();
      }
      ++v29;
    }
    while ( v29 < v28 );
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = a2 + 600;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 600);
  v12 = 0;
  v42 = a2 + 600;
  v13 = v11 & 0x3FF;
  v14 = (v11 >> 10) & 0x3FF;
  v37 = 0;
  if ( *((_BYTE *)a1 + 156) )
    v10 = v14;
  v15 = !_BitScanForward((unsigned int *)&v16, v13);
  if ( v15 )
    LOBYTE(v16) = -1;
  v17 = (unsigned int)(char)v16;
  v15 = !_BitScanForward((unsigned int *)&v16, v10);
  if ( v15 )
    LOBYTE(v16) = -1;
  v18 = (char)v16;
  while ( v13 || v10 )
  {
    if ( (unsigned int)v17 < v18 )
    {
      v19 = v12 * ((8 * *(_DWORD *)(v9 + 8) + 231) & 0xFFFFFFF8);
      v20 = *(_DWORD *)(v19 + v9 + 192);
      v47 = *(_OWORD *)(v19 + v9 + 160);
      v21 = *(_OWORD *)(v19 + v9 + 176);
      v45 = 0;
      v43 = (char *)a1 + 1728;
      v48 = v21;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &v44);
      LOBYTE(v45) = 1;
      v22 = v48;
      v38[1] = v38;
      v23 = 288 * v17;
      v38[0] = v38;
      v24 = v41;
      v39 = 0;
      *(_OWORD *)(v23 + v5 + 152) = v47;
      *(_OWORD *)(v23 + v5 + 168) = v22;
      *(_DWORD *)(v23 + v5 + 184) = v20;
      v25 = *(int *)(288 * v17 + *v24 + 188);
      if ( (int)v25 > -1 )
      {
        v32 = *((_QWORD *)a1 + 416) + 160 * v25;
        if ( v32 )
        {
          if ( *(_DWORD *)(v32 + 112) == 1 )
          {
            v33 = v40;
            *(_BYTE *)(v32 + 108) = v36;
            *(_BYTE *)(v32 + 96) = 1;
            VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v38, a1, v33, v17);
          }
        }
      }
      if ( !v39 )
      {
        while ( 1 )
        {
          v26 = (_QWORD *)v38[0];
          if ( *(_QWORD **)(v38[0] + 8LL) != v38
            || (v27 = *(_QWORD *)v38[0], *(_QWORD *)(*(_QWORD *)v38[0] + 8LL) != v38[0]) )
          {
            __fastfail(3u);
          }
          v38[0] = *(_QWORD *)v38[0];
          *(_QWORD *)(v27 + 8) = v38;
          if ( v26 == v38 )
            break;
          *v26 = 0LL;
          v26[1] = 0LL;
          HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v38, (struct VIDSCH_HW_QUEUE *)(v26 - 22));
        }
        v39 = 1;
      }
      if ( (_BYTE)v45 )
      {
        if ( HIBYTE(v45) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
        else
          KeReleaseInStackQueuedSpinLock(&v44);
      }
      v12 = v37;
    }
    if ( (unsigned int)v17 >= v18 )
    {
      v34 = -1;
      v10 &= ~(1 << v18);
      v15 = !_BitScanForward((unsigned int *)&v16, v10);
      if ( !v15 )
        v34 = v16;
      v18 = v34;
    }
    else
    {
      v13 &= ~(1 << v17);
      v15 = !_BitScanForward((unsigned int *)&v16, v13);
      if ( v15 )
        LOBYTE(v16) = -1;
      v17 = (unsigned int)(char)v16;
    }
    v9 = v42;
    v37 = ++v12;
  }
  return v16;
}
