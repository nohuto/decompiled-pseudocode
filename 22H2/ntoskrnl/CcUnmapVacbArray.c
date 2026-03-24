/*
 * XREFs of CcUnmapVacbArray @ 0x1402934F0
 * Callers:
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x14022DA90 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x140270FA0 (CcPurgeCacheSection.c)
 *     CcUnmapAndPurge @ 0x1402746F0 (CcUnmapAndPurge.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x14028F8C0 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcGetVirtualAddress @ 0x1402A15A0 (CcGetVirtualAddress.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x140275A2C (CcSetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x14029027C (CcSetVacbInFreeList.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402913A4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140291424 (CcAcquireBcbLockAndVacbLock.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140637A98 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  __int64 v6; // rdi
  int v7; // r12d
  unsigned int v8; // r13d
  unsigned __int8 v12; // r14
  __int64 v13; // rax
  signed __int64 v14; // rbx
  signed __int64 v15; // rdi
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r11
  int v20; // r8d
  int v21; // ecx
  int v22; // r10d
  __int64 i; // rsi
  __int64 v24; // rdx
  KIRQL v26; // al
  KIRQL v27; // r14
  void *v28; // rsi
  signed __int32 v29[8]; // [rsp+0h] [rbp-68h] BYREF
  signed __int64 v30; // [rsp+30h] [rbp-38h]
  __int64 Partition; // [rsp+38h] [rbp-30h]

  v6 = a3;
  v30 = 0LL;
  v7 = 0;
  v8 = 0;
  v12 = 1;
  Partition = CcGetPartition(a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( a2 )
    {
      v13 = *a2;
      v14 = *a2 & 0xFFFFFFFFFFFC0000uLL;
      v30 = v14;
      if ( (_DWORD)v6 )
        v15 = v13 + v6;
      else
        v15 = *(_QWORD *)(a1 + 368);
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 32);
      v14 = v30;
    }
    if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    {
      v7 = 1;
      ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
    }
    ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
    if ( a4 )
    {
      v8 = 1;
      *(_QWORD *)(a1 + 336) = v15;
    }
    if ( v14 < v15 )
    {
      v16 = a5;
      while ( 1 )
      {
        v17 = *(_QWORD *)(a1 + 32);
        if ( v14 >= v17 )
          goto LABEL_20;
        v18 = *(_QWORD *)(a1 + 88);
        if ( v17 <= 0x2000000 )
        {
          i = *(_QWORD *)(v18 + 8 * ((unsigned __int64)(unsigned int)v30 >> 18));
        }
        else
        {
          v19 = v14;
          v20 = 0;
          v21 = 25;
          do
          {
            v22 = v21;
            v21 += 7;
            ++v20;
          }
          while ( v17 > 1LL << v21 );
          for ( i = *(_QWORD *)(v18 + 8 * (v14 >> v22)); i; i = *(_QWORD *)(i + 8 * (v19 >> v22)) )
          {
            if ( !v20 )
              break;
            v24 = 1LL << v22;
            v22 -= 7;
            v19 &= v24 - 1;
            --v20;
          }
          v16 = a5;
        }
        if ( !i )
          goto LABEL_20;
        if ( !*(_WORD *)(i + 16) )
          break;
        if ( a6 )
        {
          v14 += 0x40000LL;
          v30 = v14;
          if ( v16 )
            KeBugCheckEx(0x34u, 0xC31uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          goto LABEL_22;
        }
        if ( !v16 )
        {
          v12 = 0;
          goto LABEL_24;
        }
        v28 = *(void **)(a1 + 184);
        if ( !v28 )
        {
          v12 = 0;
          *(_WORD *)(a1 + 344) = 0;
          *(_QWORD *)(a1 + 360) = a1 + 352;
          *(_QWORD *)(a1 + 352) = a1 + 352;
          *(_BYTE *)(a1 + 346) = 6;
          *(_DWORD *)(a1 + 348) = 0;
          _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
          goto LABEL_22;
        }
        if ( v12 )
        {
          KeResetEvent(*(PRKEVENT *)(a1 + 184));
          _InterlockedOr(v29, 0);
          v12 = 0;
        }
        else
        {
          CcReleaseBcbLockAndVacbLock(v7, (struct _FAST_MUTEX *)a1);
          KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
          v12 = 1;
          CcAcquireBcbLockAndVacbLock(v7, (struct _FAST_MUTEX *)a1);
        }
LABEL_21:
        v16 = a5;
LABEL_22:
        if ( v14 >= v15 )
        {
          v12 = 1;
          goto LABEL_24;
        }
      }
      if ( v17 > 0x2000000 )
        CcSetVacbLargeOffset(a1, v14, 0LL, 0LL);
      else
        *(_QWORD *)(v18 + 8 * ((unsigned __int64)(unsigned int)v30 >> 18)) = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 540));
      if ( *(_DWORD *)(Partition + 920) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
        v8 |= 2u;
      else
        v8 &= ~2u;
      CcUnmapVacb(i, a1, v8);
      v26 = KeAcquireQueuedSpinLock(4uLL);
      *(_QWORD *)(i + 8) = 0LL;
      v27 = v26;
      CcSetVacbInFreeList(Partition, (_QWORD *)i, (v8 & 2) != 0);
      KeReleaseQueuedSpinLock(4uLL, v27);
      v12 = 1;
LABEL_20:
      v14 += 0x40000LL;
      v30 = v14;
      goto LABEL_21;
    }
LABEL_24:
    ExReleasePushLockEx(a1 + 104, 0LL);
    if ( v7 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
  return v12;
}
