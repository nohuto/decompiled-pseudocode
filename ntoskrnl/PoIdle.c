/*
 * XREFs of PoIdle @ 0x14022D240
 * Callers:
 *     KiIdleLoop @ 0x14041AF70 (KiIdleLoop.c)
 * Callees:
 *     PpmIdlePrepare @ 0x14022AA10 (PpmIdlePrepare.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 *     PpmEventIdleStateChange @ 0x1402E19C8 (PpmEventIdleStateChange.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ED6EC (PpmPerfArbitratorApplyProcessorState.c)
 *     HalRequestIpi @ 0x1402EF7C0 (HalRequestIpi.c)
 *     PpmResetProcessorIdleAccounting @ 0x14039B074 (PpmResetProcessorIdleAccounting.c)
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalProcessorIdle @ 0x140411C30 (HalProcessorIdle.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeUpdatePendingQosRequest @ 0x140458E7C (KeUpdatePendingQosRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140583780 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v1; // bx
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned __int64 *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int8 v14; // r15
  char v15; // bp
  bool v16; // r12
  bool v17; // zf
  __int64 v18; // r13
  int v19; // eax
  unsigned int v20; // ebp
  int v21; // edx
  unsigned __int16 v22; // dx
  __int64 v23; // r13
  char v24; // r14
  unsigned __int16 v25; // cx
  unsigned int v26; // esi
  struct _KPRCB *v27; // rbp
  unsigned __int16 *v28; // r10
  int *v29; // r14
  unsigned int v30; // r12d
  unsigned int v31; // r9d
  __int64 v32; // rcx
  _KSCHEDULER_SUBNODE *v33; // rcx
  unsigned __int64 DeepIdleSet; // rdx
  unsigned __int64 Mask; // r8
  int v36; // ecx
  int NextNode; // eax
  __int16 v38; // r12
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // eax
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *v45; // rdx
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  char v48; // [rsp+50h] [rbp-198h] BYREF
  bool v49[3]; // [rsp+51h] [rbp-197h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-194h] BYREF
  int v51; // [rsp+58h] [rbp-190h] BYREF
  __int64 v52; // [rsp+60h] [rbp-188h] BYREF
  int v53; // [rsp+68h] [rbp-180h] BYREF
  __int64 v54; // [rsp+70h] [rbp-178h] BYREF
  unsigned __int64 v55; // [rsp+78h] [rbp-170h] BYREF
  __int64 v56; // [rsp+80h] [rbp-168h] BYREF
  _DWORD v57[68]; // [rsp+90h] [rbp-158h] BYREF
  int v58; // [rsp+1E0h] [rbp-8h]

  v1 = 0;
  v49[0] = 0;
  v52 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v48 = 0;
  v51 = 0;
  v50 = 0;
  memset(&v57[2], 0, 0x100uLL);
  v3 = PpmCurrentProfile;
  result = dword_140C3D48C;
  if ( BYTE5(PpmCurrentProfile[55 * dword_140C3D48C + 23]) )
    return result;
  v5 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v6 = *(_QWORD *)(BugCheckParameter4 + 33608);
  v55 = 0LL;
  if ( !v5 )
    return HalProcessorIdle();
  *(_DWORD *)(v5 + 1092) = 0;
  v7 = *(_QWORD *)(BugCheckParameter4 + 33600);
  if ( *(_BYTE *)(v7 + 5) )
  {
    v8 = *(_QWORD *)(BugCheckParameter4 + 33616);
    *(_QWORD *)(BugCheckParameter4 + 33616) = 0LL;
    v9 = *(unsigned int *)(v7 + 28);
    *(_QWORD *)(BugCheckParameter4 + 33624) += v8;
    v10 = *(_QWORD *)(BugCheckParameter4 + 33608) + 1008 * v9;
    *(_QWORD *)(v10 + 40) += v8;
    if ( *(_DWORD *)(v7 + 76) == 3 )
    {
      if ( *(int *)(v7 + 72) < 0 )
      {
        ++*(_DWORD *)(v10 + 52);
      }
      else
      {
        ++*(_DWORD *)(v10 + 56);
        v11 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v12 = 0;
        while ( v8 >= *v11 )
        {
          if ( v8 < v11[3] )
          {
            if ( ++v12 >= 0x1A )
            {
LABEL_64:
              ++*(_DWORD *)(v10 + 60);
              goto LABEL_16;
            }
            break;
          }
          v11 += 6;
          v12 += 2;
          if ( v12 >= 0x1A )
            goto LABEL_64;
        }
        v13 = 32LL * v12;
        *(_QWORD *)(v13 + v10 + 216) += v8;
        ++*(_DWORD *)(v13 + v10 + 240);
        if ( v8 < *(_QWORD *)(v13 + v10 + 224) )
          *(_QWORD *)(v13 + v10 + 224) = v8;
        if ( v8 > *(_QWORD *)(v13 + v10 + 232) )
          *(_QWORD *)(v13 + v10 + 232) = v8;
LABEL_16:
        if ( v8 < *(_QWORD *)(v10 + 64) )
          *(_QWORD *)(v10 + 64) = v8;
        if ( v8 > *(_QWORD *)(v10 + 72) )
          *(_QWORD *)(v10 + 72) = v8;
      }
    }
    else
    {
      ++*(_DWORD *)(v10 + 48);
    }
  }
  v14 = 0;
  *(_DWORD *)(v7 + 72) = 0;
  v15 = 0;
  *(_DWORD *)(v7 + 76) = 3;
  v16 = 0;
  *(_BYTE *)(v7 + 5) = 0;
  v17 = PpmPerfQosEnabled == 0;
  v18 = 0LL;
  *(_BYTE *)(v5 + 5) = 1;
  if ( !v17 && PpmPerfQosManageIdleProcessors && *(_DWORD *)(BugCheckParameter4 + 34112) != 5 )
  {
    v18 = *(_QWORD *)(BugCheckParameter4 + 33976);
    if ( v18 && *(_BYTE *)(v18 + 125) )
    {
      v38 = v58;
      v15 = 1;
      _disable();
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x200000u);
      v16 = (v38 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 128));
    }
    if ( (*(_BYTE *)(BugCheckParameter4 + 34120) & 0x20) == 0 )
    {
      v3 = (__int64 *)__rdtsc();
      v40 = (unsigned __int64)v3 - *(_QWORD *)(BugCheckParameter4 + 34096);
      v41 = *(_QWORD *)(BugCheckParameter4 + 34104);
      if ( v40 < v41 && !*(_BYTE *)(BugCheckParameter4 + 34061) )
      {
        v42 = *(_DWORD *)(BugCheckParameter4 + 236);
        v14 = 1;
        if ( (v42 & 0x300) == 0 )
        {
          v43 = v42 & 0xFFFFFCFF | 0x100;
LABEL_80:
          *(_DWORD *)(BugCheckParameter4 + 236) = v43;
          KeUpdatePendingQosRequest(BugCheckParameter4);
          goto LABEL_22;
        }
        goto LABEL_22;
      }
      *(_QWORD *)(BugCheckParameter4 + 34096) = v3;
      *(_BYTE *)(BugCheckParameter4 + 34061) = v40 >= 2 * v41;
    }
    *(_DWORD *)(BugCheckParameter4 + 34112) = 5;
    LOBYTE(v3) = 1;
    PpmPerfArbitratorApplyProcessorState(BugCheckParameter4, v3, 0LL);
    *(_BYTE *)(BugCheckParameter4 + 236) = 5;
  }
  v19 = *(_DWORD *)(BugCheckParameter4 + 236);
  if ( (v19 & 0x300) != 0 )
  {
    v43 = v19 & 0xFFFFFCFF;
    goto LABEL_80;
  }
LABEL_22:
  if ( v15 )
  {
    KxReleaseSpinLock(v18 + 128);
    if ( v16 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v45 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v45 )
      {
        _m_prefetchw(v45);
        v46 = *v45;
        do
        {
          v47 = v46;
          v46 = _InterlockedCompareExchange(v45, v46 & 0xFFDFFFFF, v46);
        }
        while ( v47 != v46 );
        if ( (v46 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
  }
  v57[0] = 2097153;
  memset(&v57[1], 0, 0x104uLL);
  *(_WORD *)(v5 + 56) = 0;
  if ( !*(_BYTE *)v5 )
  {
    result = PpmIdlePrepare(BugCheckParameter4, v14, v49, &v52, &v54, &v55, (__int64)v57);
    v20 = result;
    v50 = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (_DWORD)result == -1 )
      {
        ++*(_DWORD *)(v6 + 12);
        return result;
      }
      v36 = *(_DWORD *)(v5 + 760);
      v51 = v36;
      if ( v36 != -1 )
      {
        **(_DWORD **)(v5 + 1104) = v36;
        *(_DWORD *)(v5 + 1092) = 1;
      }
      v48 = *(_BYTE *)(344LL * (unsigned int)result + v5 + 1450) == 0;
      goto LABEL_27;
    }
    return HalProcessorIdle();
  }
  if ( PpmIdleVetoBias && *(_BYTE *)(v5 + 16) )
    return HalProcessorIdle();
  PpmIdleSelectStates(
    BugCheckParameter4,
    v14,
    (unsigned int)&v52,
    (unsigned int)&v54,
    (__int64)v49,
    (__int64)&v50,
    (__int64)&v51,
    (__int64)&v56,
    (__int64)&v48);
  v20 = v50;
LABEL_27:
  v21 = *(_DWORD *)(v5 + 24);
  if ( v20 != v21 )
  {
    *(_DWORD *)(v5 + 32) = v21;
    *(_DWORD *)(v5 + 24) = v20;
    PpmEventIdleStateChange(v20);
  }
  v17 = (*(_DWORD *)(v6 + 4))++ == -1;
  if ( v17 )
    PpmResetProcessorIdleAccounting(v6, v52);
  v22 = v57[0];
  v23 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v24 = *(_BYTE *)(344LL * v20 + v5 + 1449);
  v25 = 0;
  if ( LOWORD(v57[0]) )
  {
    while ( !*(_QWORD *)&v57[2 * v25 + 2] )
    {
      if ( ++v25 >= LOWORD(v57[0]) )
        goto LABEL_34;
    }
    *(_WORD *)(v23 + 56) |= 0x400u;
    if ( KiSerializeTimerExpiration && v55 )
      PpmSetPlatformIdleDurationHint();
    v22 = v57[0];
  }
LABEL_34:
  v26 = KiClockTimerOwner;
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33)
    && !v24 )
  {
    v27 = KeGetCurrentPrcb();
    v53 = 0;
    v28 = (unsigned __int16 *)KeNodeBlock[v27->SchedulerSubNode->Affinity.Reserved[0]];
    v29 = &KiProcessorIndexToNumberMappingTable[v27->Number];
    v30 = *v28;
    while ( 1 )
    {
      v31 = *((_DWORD *)v28 + 4);
      while ( v31 )
      {
        _BitScanForward((unsigned int *)&v32, v31);
        v31 &= ~(1 << v32);
        v33 = *(_KSCHEDULER_SUBNODE **)&v28[4 * v32 + 12];
        DeepIdleSet = v33->DeepIdleSet;
        Mask = v33->Affinity.Mask;
        if ( v33 == v27->SchedulerSubNode )
        {
          DeepIdleSet &= ~(1LL << v27->GroupIndex);
          Mask &= ~(1LL << (*(_BYTE *)v29 & 0x3F));
        }
        if ( DeepIdleSet != Mask )
          goto LABEL_50;
      }
      NextNode = MmGetNextNode(v30, &v53);
      if ( NextNode == -1 )
        break;
      v28 = (unsigned __int16 *)KeNodeBlock[NextNode];
    }
    if ( !(unsigned int)KeCheckProcessorAffinityEx(v57, v26) )
    {
      KeAddProcessorAffinityEx(v57, v26);
      *(_WORD *)(v23 + 56) |= 0x800u;
    }
LABEL_50:
    v22 = v57[0];
  }
  if ( v22 )
  {
    while ( !*(_QWORD *)&v57[2 * v1 + 2] )
    {
      if ( ++v1 >= v22 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v49[0], v52, v54, v48, v14);
    }
    HalRequestIpi(0LL, v57);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v49[0], v52, v54, v48, v14);
}
