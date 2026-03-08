/*
 * XREFs of KeUpdateThreadTag @ 0x1402FB2F0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14022FC90 (KiCheckPreferredHeteroProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140237680 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402376C0 (KiIpiSendPacket.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiSendSoftwareInterrupt @ 0x1402B7A00 (KiSendSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeCheckAndApplyBamQos @ 0x140458D70 (KeCheckAndApplyBamQos.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  __int64 CurrentIrql; // rbx
  char v4; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  char v8; // r15
  char v9; // r14
  char v10; // al
  struct _KPRCB *v11; // rcx
  signed __int32 *v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned int v15; // esi
  int v16; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned int ProcessorCount; // ecx
  struct _KPRCB **Prcbs; // rdx
  __int64 v20; // r8
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  __int64 result; // rax
  int *v27; // rbx
  char v28; // r13
  __int64 v29; // rsi
  volatile signed __int32 *v30; // r15
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // rax
  char v36; // al
  int v37; // ebx
  unsigned __int8 v38; // cl
  _DWORD *v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  unsigned int v45; // eax
  unsigned int v46; // r10d
  int v47; // ecx
  _BYTE *v48; // rax
  unsigned int v49; // ecx
  __int64 *v50; // rdx
  __int64 v51; // r8
  int v52; // ecx
  _BYTE *v53; // rax
  unsigned int v54; // ecx
  __int64 *v55; // rdx
  __int64 v56; // r8
  BOOL v57; // eax
  char v58; // r11
  __int64 v59; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _KPRCB *v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v66[68]; // [rsp+70h] [rbp-90h] BYREF
  int v67; // [rsp+1D8h] [rbp+D8h] BYREF

  v67 = a2;
  memset(v66, 0, 0x108uLL);
  v59 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v60 = CurrentIrql;
  __writecr8(2uLL);
  v4 = v59 + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v4) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (v4 + (unsigned __int8)CurrentIrql)) & 4;
    SchedulerAssist[5] |= v6;
  }
  v61 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v61);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) == v67 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_43;
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    v9 = 0;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL, 0LL);
    v10 = v67;
    if ( v67 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v10;
    KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
    v11 = KeGetCurrentPrcb();
    v12 = (signed __int32 *)v11->SchedulerAssist;
    if ( v12 )
    {
      _m_prefetchw(v12);
      v13 = *v12;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(v12, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
    _enable();
    v15 = KiComputeHeteroThreadQos(a1, 0LL);
    if ( v15 == (unsigned __int8)*(_DWORD *)(a1 + 512) )
      goto LABEL_33;
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v59);
    KiSetThreadQosLevelUnsafe(a1, v15);
    if ( !CurrentPrcb->NextThread )
    {
      v16 = *(_DWORD *)(a1 + 120) >> 1;
      v63 = CurrentPrcb;
      if ( (v16 & 1) == 0 )
      {
        Prcbs = &v63;
        ProcessorCount = 1;
        goto LABEL_28;
      }
      CoreControlBlock = CurrentPrcb->CoreControlBlock;
      ProcessorCount = CoreControlBlock->ProcessorCount;
      Prcbs = CoreControlBlock->Prcbs;
      if ( CoreControlBlock->ProcessorCount )
      {
LABEL_28:
        v20 = ProcessorCount;
        do
        {
          if ( KeHeteroSystem )
            (*Prcbs)->PriorityState[64].AllFields ^= (*(_BYTE *)(a1 + 512) ^ (*Prcbs)->PriorityState[64].AllFields) & 7;
          ++Prcbs;
          --v20;
        }
        while ( v20 );
      }
    }
    KiReleasePrcbLocksForIsolationUnit(&v59);
LABEL_33:
    if ( v15 == 4 )
    {
      if ( KiCheckPreferredHeteroProcessor(a1, (__int64)CurrentPrcb, 1) )
      {
        CurrentPrcb->QuantumEnd = 1;
        v8 = 1;
      }
      else
      {
        v9 = 1;
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v8 )
      KiSendSoftwareInterrupt(CurrentPrcb->Number, 2);
    if ( v9 )
      KeCheckAndApplyBamQos(CurrentPrcb, a1);
    v4 = 1;
    goto LABEL_42;
  }
  v27 = (int *)(a1 + 536);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = *(_BYTE *)(a1 + 388);
        v29 = 0LL;
        v30 = 0LL;
        if ( v28 != 1 )
          break;
        v27 = (int *)(a1 + 536);
        v34 = *(unsigned int *)(a1 + 536);
        if ( (int)v34 >= 0 )
        {
          v29 = KiProcessorBlock[v34];
          KiAcquirePrcbLocksForIsolationUnit(v29, 0, &v59);
          if ( *(_BYTE *)(a1 + 388) == 1 && *v27 == (_DWORD)v34 )
            goto LABEL_81;
          goto LABEL_78;
        }
        v35 = (unsigned int)v34;
        LODWORD(v35) = v34 & 0x7FFFFFFF;
        v62 = 0;
        v30 = *(volatile signed __int32 **)(KiProcessorBlock[v35] + 34888);
        while ( _interlockedbittestandset64(v30, 0LL) )
        {
          do
            KeYieldProcessorEx(&v62);
          while ( *(_QWORD *)v30 );
        }
        if ( *(_BYTE *)(a1 + 388) == 1 && *v27 == (_DWORD)v34 )
          goto LABEL_81;
        _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
LABEL_79:
        v4 = 1;
      }
      if ( *(_BYTE *)(a1 + 388) != 2 )
        break;
LABEL_60:
      v27 = (int *)(a1 + 536);
      v32 = *(unsigned int *)(a1 + 536);
      if ( (int)v32 >= 0 )
      {
        v29 = KiProcessorBlock[v32];
        KiAcquirePrcbLocksForIsolationUnit(v29, 0, &v59);
        if ( a1 == *(_QWORD *)(v29 + 8) )
          goto LABEL_81;
        KiReleasePrcbLocksForIsolationUnit(&v59);
      }
    }
    if ( *(_BYTE *)(a1 + 388) != 3 )
      break;
    v27 = (int *)(a1 + 536);
    v33 = *(unsigned int *)(a1 + 536);
    if ( (int)v33 >= 0 )
    {
      v29 = KiProcessorBlock[v33];
      KiAcquirePrcbLocksForIsolationUnit(v29, 0, &v59);
      if ( a1 == *(_QWORD *)(v29 + 16) )
        goto LABEL_81;
      if ( *(_BYTE *)(a1 + 388) == 3 && *v27 == (_DWORD)v33 )
        __fastfail(0x1Eu);
LABEL_78:
      KiReleasePrcbLocksForIsolationUnit(&v59);
      goto LABEL_79;
    }
    v4 = 1;
  }
  if ( *(_BYTE *)(a1 + 388) != 5 )
    goto LABEL_81;
  v31 = *(_BYTE *)(a1 + 112) & 7;
  if ( v31 != v4 && (unsigned __int8)(v31 - 3) > 3u )
  {
    v28 = 2;
    goto LABEL_60;
  }
  v27 = (int *)(a1 + 536);
LABEL_81:
  if ( v28 == 2 || (v27 = (int *)(a1 + 536), *(_BYTE *)(a1 + 113)) )
  {
    v37 = *v27;
    v66[0] = 2097153;
    v4 = 1;
    memset(&v66[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v66, v37 & 0x7FFFFFFF);
    v38 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
    {
      v39 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v38 == 12 )
        LODWORD(v40) = 4096;
      else
        v40 = (-1LL << (v38 + 1)) & 0x1FFC;
      v39[5] |= v40;
    }
    KiIpiSendPacket(0, (int)v66, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v67, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v41, (__int64)KeGetCurrentPrcb());
    if ( KiIrqlFlags )
    {
      v42 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v42 - 2) <= 0xDu )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v25 = (v44[5] & 0xFFFF0007) == 0;
        v44[5] &= 0xFFFF0007;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    __writecr8(2uLL);
  }
  else
  {
    v36 = v67;
    if ( v67 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v36;
    v4 = 1;
  }
  v45 = KiComputeHeteroThreadQos(a1, 0LL);
  v46 = v45;
  if ( v45 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
  {
    KiSetThreadQosLevelUnsafe(a1, v45);
    if ( v28 == 2 )
    {
      if ( !*(_QWORD *)(v29 + 16) )
      {
        v52 = *(_DWORD *)(a1 + 120) >> 1;
        v65 = v29;
        if ( (v52 & 1) != 0 )
        {
          v53 = *(_BYTE **)(v29 + 34904);
          v54 = (unsigned __int8)*v53;
          v55 = (__int64 *)(v53 + 8);
          if ( !*v53 )
            goto LABEL_121;
        }
        else
        {
          v55 = &v65;
          v54 = 1;
        }
        v56 = v54;
        do
        {
          if ( KeHeteroSystem )
            *(_BYTE *)(*(_QWORD *)(*v55 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v55 + 56) + 64LL)) & 7;
          ++v55;
          --v56;
        }
        while ( v56 );
      }
    }
    else if ( v28 == 3 )
    {
      v47 = *(_DWORD *)(a1 + 120) >> 1;
      v64 = v29;
      if ( (v47 & 1) != 0 )
      {
        v48 = *(_BYTE **)(v29 + 34904);
        v49 = (unsigned __int8)*v48;
        v50 = (__int64 *)(v48 + 8);
        if ( *v48 )
          goto LABEL_107;
      }
      else
      {
        v50 = &v64;
        v49 = 1;
LABEL_107:
        v51 = v49;
        do
        {
          if ( KeHeteroSystem )
            *(_BYTE *)(*(_QWORD *)(*v50 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v50 + 56) + 64LL)) & 7;
          ++v50;
          --v51;
        }
        while ( v51 );
      }
    }
  }
LABEL_121:
  if ( v28 == 2 && v46 == 4 && ((v57 = KiCheckPreferredHeteroProcessor(a1, v29, 1), KeHeteroSystemQos) || v57) )
  {
    *(_BYTE *)(v29 + 13241) = 1;
    v58 = 1;
  }
  else
  {
    v58 = 0;
  }
  if ( v29 )
    KiReleasePrcbLocksForIsolationUnit(&v59);
  if ( v30 )
    _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v58 )
    KiSendSoftwareInterrupt(*(_DWORD *)(v29 + 36), 2);
LABEL_42:
  LOBYTE(CurrentIrql) = v60;
LABEL_43:
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v4) != 0
      && v21 <= 0xFu
      && (unsigned __int8)CurrentIrql <= 0xFu
      && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (v4 + (unsigned __int8)CurrentIrql));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
