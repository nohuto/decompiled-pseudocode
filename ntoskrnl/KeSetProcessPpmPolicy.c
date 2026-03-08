/*
 * XREFs of KeSetProcessPpmPolicy @ 0x1402EB020
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x140778DB0 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetProcessPpmPolicy(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r12
  int v5; // edi
  signed __int32 v6; // ett
  _QWORD *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r13d
  _QWORD *v10; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rax
  char v14; // r15
  _QWORD *v15; // rdi
  volatile signed __int32 *v16; // r14
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // ecx
  _BYTE *v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // rdx
  __int64 v26; // r8
  int v27; // ecx
  _BYTE *v28; // rax
  unsigned int v29; // ecx
  _QWORD *v30; // rdx
  __int64 v31; // r8
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v34; // r8
  int v35; // eax
  bool v36; // zf
  _QWORD *v37; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v38; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v39; // [rsp+30h] [rbp-18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+38h] [rbp-10h]
  int v41; // [rsp+90h] [rbp+48h] BYREF
  int v42; // [rsp+98h] [rbp+50h] BYREF
  _QWORD *v43; // [rsp+A0h] [rbp+58h]
  __int64 v44; // [rsp+A8h] [rbp+60h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v13) = 4;
    if ( CurrentIrql != 2 )
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = a2 << 7;
  do
    v6 = *(_DWORD *)(a1 + 632);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 632), v5 | v6 & 0xFFFFF87F, v6) );
  v44 = 0LL;
  v7 = *(_QWORD **)(a1 + 48);
  v39 = (_QWORD *)(a1 + 48);
  v43 = v7;
  if ( v7 == (_QWORD *)(a1 + 48) )
    goto LABEL_9;
  do
  {
    v42 = 0;
    v8 = (__int64)(v7 - 95);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v42);
      while ( *(_QWORD *)(v8 + 64) );
    }
    v9 = KiComputeHeteroThreadQos(v8, 0LL);
    if ( v9 == (unsigned __int8)*(_DWORD *)(v8 + 512) )
      goto LABEL_8;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = *(_BYTE *)(v8 + 388);
          v15 = 0LL;
          v16 = 0LL;
          if ( v14 == 1 )
            break;
          switch ( *(_BYTE *)(v8 + 388) )
          {
            case 2:
LABEL_26:
              v18 = *(unsigned int *)(v8 + 536);
              if ( (int)v18 >= 0 )
              {
                v15 = (_QWORD *)KiProcessorBlock[v18];
                KiAcquirePrcbLocksForIsolationUnit((__int64)v15, 0, &v44);
                if ( v8 == v15[1] )
                  goto LABEL_45;
                goto LABEL_18;
              }
              break;
            case 3:
              v19 = *(unsigned int *)(v8 + 536);
              if ( (int)v19 >= 0 )
              {
                v15 = (_QWORD *)KiProcessorBlock[v19];
                KiAcquirePrcbLocksForIsolationUnit((__int64)v15, 0, &v44);
                if ( v8 == v15[2] )
                  goto LABEL_45;
                if ( *(_BYTE *)(v8 + 388) == 3 && *(_DWORD *)(v8 + 536) == (_DWORD)v19 )
                  __fastfail(0x1Eu);
                goto LABEL_18;
              }
              break;
            case 5:
              v17 = *(_BYTE *)(v8 + 112) & 7;
              if ( v17 == 1 || (unsigned __int8)(v17 - 3) <= 3u )
                goto LABEL_45;
              v14 = 2;
              goto LABEL_26;
            default:
              goto LABEL_45;
          }
        }
        v20 = *(unsigned int *)(v8 + 536);
        if ( (int)v20 < 0 )
          break;
        v15 = (_QWORD *)KiProcessorBlock[v20];
        KiAcquirePrcbLocksForIsolationUnit((__int64)v15, 0, &v44);
        if ( *(_BYTE *)(v8 + 388) == 1 && *(_DWORD *)(v8 + 536) == (_DWORD)v20 )
          goto LABEL_45;
LABEL_18:
        KiReleasePrcbLocksForIsolationUnit(&v44);
      }
      v21 = (unsigned int)v20;
      LODWORD(v21) = v20 & 0x7FFFFFFF;
      v41 = 0;
      v16 = *(volatile signed __int32 **)(KiProcessorBlock[v21] + 34888);
      while ( _interlockedbittestandset64(v16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v41);
        while ( *(_QWORD *)v16 );
      }
      if ( *(_BYTE *)(v8 + 388) == 1 && *(_DWORD *)(v8 + 536) == (_DWORD)v20 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
    }
    v15 = 0LL;
LABEL_45:
    KiSetThreadQosLevelUnsafe(v8, v9);
    if ( v14 == 2 )
    {
      if ( v15[2] )
        goto LABEL_65;
      v27 = *(_DWORD *)(v8 + 120) >> 1;
      v38 = v15;
      if ( (v27 & 1) != 0 )
      {
        v28 = (_BYTE *)v15[4363];
        v29 = (unsigned __int8)*v28;
        v30 = v28 + 8;
        if ( !*v28 )
          goto LABEL_65;
      }
      else
      {
        v30 = &v38;
        v29 = 1;
      }
      v31 = v29;
      do
      {
        if ( KeHeteroSystem )
          *(_BYTE *)(*(_QWORD *)(*v30 + 56LL) + 64LL) ^= (*(_BYTE *)(v8 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v30 + 56LL)
                                                                                          + 64LL)) & 7;
        ++v30;
        --v31;
      }
      while ( v31 );
    }
    else
    {
      if ( v14 != 3 )
        goto LABEL_65;
      v22 = *(_DWORD *)(v8 + 120) >> 1;
      v37 = v15;
      if ( (v22 & 1) != 0 )
      {
        v23 = (_BYTE *)v15[4363];
        v24 = (unsigned __int8)*v23;
        v25 = v23 + 8;
        if ( !*v23 )
          goto LABEL_65;
      }
      else
      {
        v25 = &v37;
        v24 = 1;
      }
      v26 = v24;
      do
      {
        if ( KeHeteroSystem )
          *(_BYTE *)(*(_QWORD *)(*v25 + 56LL) + 64LL) ^= (*(_BYTE *)(v8 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v25 + 56LL)
                                                                                          + 64LL)) & 7;
        ++v25;
        --v26;
      }
      while ( v26 );
    }
LABEL_65:
    if ( v15 )
      KiReleasePrcbLocksForIsolationUnit(&v44);
    if ( v16 )
      _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
LABEL_8:
    v10 = v43;
    *(_QWORD *)(v8 + 64) = 0LL;
    v7 = (_QWORD *)*v10;
    v43 = v7;
  }
  while ( v7 != v39 );
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    v32 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v34 = CurrentPrcb->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v36 = (v35 & v34[5]) == 0;
      v34[5] &= v35;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
