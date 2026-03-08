/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1402493A0
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402491F0 (RtlpHpSegAlloc.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14024E6D0 (RtlpHpSegFreeRangeInsert.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpSegHeapAddSegment @ 0x1402E9EB0 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x140305B38 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x1403094C8 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegLockAcquire @ 0x14030AB78 (RtlpHpSegLockAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1403BEB28 (RtlpHpSegLargeRangeAllocate.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v4; // r13d
  char v6; // cl
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  int v10; // ebp
  __int64 CurrentIrql; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ebx
  unsigned __int16 v18; // ax
  int v19; // ecx
  unsigned int v20; // ebx
  bool v21; // zf
  __m128i v22; // xmm0
  volatile signed __int64 *v23; // r15
  unsigned __int8 v24; // bp
  __int64 result; // rax
  int v26; // ecx
  unsigned __int64 v27; // rbx
  __int16 v28; // r8
  unsigned __int64 v29; // r11
  __int16 v30; // r9
  __int16 v31; // r10
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rcx
  char *v34; // rcx
  char v35; // dl
  struct _KTHREAD *v36; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v38; // bp
  __int64 v39; // r8
  __int64 v40; // rbp
  struct _KTHREAD *v41; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v43; // rdx
  int v44; // r8d
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int8 v49; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v51; // r8
  int v52; // eax
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v54; // [rsp+78h] [rbp+10h] BYREF
  int v55; // [rsp+80h] [rbp+18h]
  __int64 v56; // [rsp+88h] [rbp+20h]

  v3 = 1;
  v4 = a2 - 1;
  v6 = *(_BYTE *)(a1 + 9);
  LOBYTE(a2) = -1;
  v56 = a2;
  v7 = (unsigned int)((1 << v6) + v4) >> v6;
  v8 = v7 << 24;
  v10 = a3 & 1;
  v55 = v10;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v56 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v43) = 4;
        else
          v43 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        v44 = v43 | SchedulerAssist[5];
        CurrentIrql = v56;
        SchedulerAssist[5] = v44;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64, CurrentIrql);
      }
      else
      {
        v54 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
          v54 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
        while ( (*(_DWORD *)(a1 + 64) & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (*(_DWORD *)(a1 + 64) & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 64), 0x40000000u);
          KeYieldProcessorEx(&v54);
        }
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      LOBYTE(v56) = -1;
    }
  }
  v12 = *(_QWORD *)(a1 + 104);
  v13 = *(_QWORD *)(a1 + 96);
  if ( (v12 & 1) == 0 )
  {
LABEL_12:
    v14 = 0LL;
    v15 = v12 & 1;
    if ( !v13 )
      goto LABEL_18;
    while ( 1 )
    {
      if ( v8 < *(_DWORD *)(v13 + 28) )
      {
        v16 = *(_QWORD *)v13;
        v14 = v13;
        if ( v15 && v16 )
        {
          v13 ^= v16;
          goto LABEL_17;
        }
      }
      else
      {
        if ( v8 <= *(_DWORD *)(v13 + 28) )
          goto LABEL_19;
        v16 = *(_QWORD *)(v13 + 8);
        if ( v15 && v16 )
        {
          v13 ^= v16;
          goto LABEL_17;
        }
      }
      v13 = v16;
LABEL_17:
      if ( !v13 )
        goto LABEL_18;
    }
  }
  if ( v13 )
  {
    v13 ^= a1 + 96;
    goto LABEL_12;
  }
  v14 = 0LL;
LABEL_18:
  v13 = v14;
LABEL_19:
  if ( v13 )
  {
    v17 = a3 & 0x800000;
    if ( (a3 & 0x800000) != 0 )
    {
      v13 = RtlpHpSegLargeRangeAllocate(a1, v13, v7, 1LL);
    }
    else
    {
      RtlRbRemoveNode(a1 + 96, v13);
      *(_OWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
      v18 = ~(unsigned __int16)*(_DWORD *)(v13 + 28);
      *(_DWORD *)v13 = -857879331;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v18);
    }
    if ( v13 )
    {
LABEL_23:
      v19 = *(unsigned __int8 *)(v13 + 31);
      if ( v19 == v7 )
      {
        v20 = v7 - 1;
      }
      else
      {
        v26 = v19 - v7;
        v27 = (unsigned __int8)v26;
        v28 = 0;
        v29 = v13 + 32LL * v7;
        v30 = 0;
        v31 = 0;
        v32 = v29 + 32LL * (unsigned __int8)v26;
        *(_BYTE *)(v29 + 24) |= 2u;
        *(_BYTE *)(32LL * (unsigned int)(v26 - 1) + v29 + 31) = v26 - 1;
        v33 = v29;
        *(_BYTE *)(v29 + 31) = v27;
        if ( v29 < v32 )
        {
          if ( v27 < 2 )
            goto LABEL_42;
          do
          {
            v28 += *(unsigned __int8 *)(v33 + 25);
            v30 += *(unsigned __int8 *)(v33 + 57);
            v33 += 64LL;
          }
          while ( v33 < v32 - 32 );
          if ( v33 < v32 )
LABEL_42:
            v31 = *(unsigned __int8 *)(v33 + 25);
          v31 += v28 + v30;
        }
        *(_DWORD *)v29 = -857879331;
        *(_WORD *)(v29 + 28) = ~v31;
        *(_BYTE *)(32LL * (v7 - 1) + v13 + 31) = v7 - 1;
        *(_BYTE *)(v13 + 31) = v7;
        *(_WORD *)(v13 + 28) = ~(~*(_WORD *)(v13 + 28) + *(_WORD *)(v29 + 28) + 1);
        v20 = v7 - 1;
        if ( v29 )
          RtlpHpSegFreeRangeInsert(a1, v13 + 32LL * v7, 0LL);
      }
      *(_BYTE *)(v13 + 24) |= (unsigned __int8)(4 * ((a3 >> 26) & 3)) | 1;
      v21 = v55 == 0;
      *(_BYTE *)(32LL * v20 + v13 + 24) |= 1u;
      if ( v21 )
      {
        v22 = *(__m128i *)(a1 + 40);
        v23 = (volatile signed __int64 *)(a1 + 64);
        if ( (_mm_cvtsi128_si32(v22) & 1) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v23, retaddr);
          else
            *(_DWORD *)v23 = 0;
          v24 = v56;
          if ( KiIrqlFlags )
          {
            v49 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && (unsigned __int8)v56 <= 0xFu && v49 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v51 = CurrentPrcb->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
              v21 = (v52 & v51[5]) == 0;
              v51[5] &= v52;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v24);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v23);
          KeAbPostRelease((ULONG_PTR)v23);
          v36 = KeGetCurrentThread();
          v21 = v36->SpecialApcDisable++ == -1;
          if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
            KiCheckForKernelApcDelivery();
        }
      }
      if ( v20 > 1 )
      {
        v34 = (char *)(v13 + 56);
        do
        {
          v34[7] = v3++;
          v35 = *v34;
          v34 += 32;
          *(v34 - 32) = v35 | 1;
        }
        while ( v3 < v20 );
      }
      return v13;
    }
  }
  else
  {
    v17 = a3 & 0x800000;
  }
  if ( !v10 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      v38 = v56;
      if ( KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && (unsigned __int8)v56 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
          v21 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
      __writecr8(v38);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      v41 = KeGetCurrentThread();
      v21 = v41->SpecialApcDisable++ == -1;
      if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
        KiCheckForKernelApcDelivery();
      v17 = a3 & 0x800000;
    }
  }
  v39 = 0LL;
  if ( v17 || (*(_BYTE *)(a1 + 13) & 7) == 3 && (BYTE1(*(_QWORD *)(a1 + 40)) == 3 || BYTE1(*(_QWORD *)(a1 + 40)) == 2) )
    v39 = 2LL;
  result = RtlpHpSegSegmentAllocate(a1, 0LL, v39);
  v40 = result;
  if ( result )
  {
    RtlpHpSegSegmentInitialize(a1, result, 0LL);
    v13 = v40 + 32LL * *(unsigned __int8 *)(a1 + 10);
    LOBYTE(v56) = RtlpHpSegLockAcquire(a1, a3);
    RtlpHpSegHeapAddSegment(a1, v40);
    if ( v17 )
      v13 = RtlpHpSegLargeRangeAllocate(a1, v13, v7, 0LL);
    goto LABEL_23;
  }
  return result;
}
