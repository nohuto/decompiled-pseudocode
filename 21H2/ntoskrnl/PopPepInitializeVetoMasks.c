/*
 * XREFs of PopPepInitializeVetoMasks @ 0x140574FDC
 * Callers:
 *     PopPepDeviceStarted @ 0x1403BE2FC (PopPepDeviceStarted.c)
 *     PopPepPlatformStateRegistered @ 0x1405756FC (PopPepPlatformStateRegistered.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A09B4 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140565F2C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x14056E100 (PopPluginRequestComponentIdleConstraints.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x14056E228 (PopPluginRequestDeviceIdleConstraints.c)
 *     PopFxEnableEnhancedAccounting @ 0x1405741D4 (PopFxEnableEnhancedAccounting.c)
 *     PopPepInitializeDebuggerMasks @ 0x140574EDC (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1405760C8 (PopPepResetDeviceAccountingLevel.c)
 *     EmClientRuleEvaluate @ 0x140991340 (EmClientRuleEvaluate.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  ULONG_PTR v4; // rsi
  int v5; // eax
  char v6; // sp
  __int64 v7; // rdx
  __int128 v8; // xmm0
  char *v9; // r8
  unsigned int i; // edi
  int v11; // ecx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // r8
  KIRQL v14; // r12
  __int64 v15; // rdi
  signed __int32 v16; // r14d
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int *v19; // r11
  int v20; // r14d
  unsigned int v21; // edx
  __int64 v22; // r10
  _DWORD *v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  char v29; // al
  unsigned int v30; // r12d
  __int64 v31; // r13
  __int64 v32; // r13
  unsigned int *v33; // rdi
  int v34; // r11d
  unsigned int v35; // edx
  __int64 v36; // r10
  _DWORD *v37; // r8
  __int64 v38; // r9
  unsigned int v39; // eax
  _DWORD *v40; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v44; // eax
  bool v45; // zf
  char v46; // [rsp+20h] [rbp-E0h]
  char v47; // [rsp+21h] [rbp-DFh]
  KIRQL v48; // [rsp+22h] [rbp-DEh]
  signed __int32 v49; // [rsp+24h] [rbp-DCh] BYREF
  int v50; // [rsp+28h] [rbp-D8h] BYREF
  int DeepSleepPlatformStateIndex; // [rsp+2Ch] [rbp-D4h]
  __int128 *v52; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+40h] [rbp-C0h]
  __int128 v55; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v56[20]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v57[32]; // [rsp+100h] [rbp+0h] BYREF

  v2 = a2;
  v50 = 0;
  v55 = 0LL;
  memset(v56, 0, 0x98uLL);
  v4 = *(_QWORD *)(a1 + 32);
  v52 = 0LL;
  if ( *(_QWORD *)(v4 + 48) )
  {
    v5 = v56[3];
    v7 = (v6 + 120) & 4;
    *(_BYTE *)(a1 + 384) = 0;
    v8 = *(_OWORD *)(v4 + 216);
    v9 = (char *)&v56[3];
    if ( ((v6 + 120) & 4) != 0 )
      v5 = 1;
    LODWORD(v56[3]) = v5;
    if ( ((v6 + 120) & 4) != 0 )
      v9 = (char *)&v56[3] + 4;
    *(_OWORD *)&v56[1] = v8;
    memset64(v9, 0x100000001uLL, 16LL - ((unsigned int)v7 != 0LL));
    if ( ((v6 + 120) & 4) != 0 )
      *(_DWORD *)&v9[(-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124] = 1;
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      LODWORD(v56[0]) = i;
      *(_QWORD *)&v55 = v56;
      DWORD2(v55) = 8;
      v52 = &v55;
      EmClientRuleEvaluate(&GUID_EM_PEP_UPADTE_DEVICE_CONTRAINT, &v52, 1LL, &v50);
      if ( v50 == 2 )
        *(_BYTE *)(a1 + 384) = 1;
    }
    v54 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
    PopFxActivateDevice(v54, 0, 0);
    v11 = v57[0];
    v12 = (unsigned __int64)v57 & 4;
    v13 = v57;
    if ( ((unsigned __int8)v57 & 4) != 0 )
      v11 = 1;
    v57[0] = v11;
    if ( ((unsigned __int8)v57 & 4) != 0 )
      v13 = &v57[1];
    memset64(v13, 0x100000001uLL, 16LL - ((unsigned int)v12 != 0LL));
    if ( ((unsigned __int8)v57 & 4) != 0 )
      *(_DWORD *)((char *)v13 + (-(__int64)(v12 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
    v48 = v14;
    v15 = 0LL;
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v46 = 0;
    v49 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    v16 = v49;
    KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 600));
    *(_DWORD *)(v4 + 616) = v49;
    memset((void *)(v4 + 632), 0, 0xC0uLL);
    *(_BYTE *)(v4 + 608) = 0;
    if ( PopPluginRequestDeviceIdleConstraints(*(_QWORD *)(a1 + 32), (__int64)v57, v2) || *(_BYTE *)(a1 + 384) )
    {
      v46 = PopFxEnableEnhancedAccounting(&v49);
      if ( *(_BYTE *)(a1 + 384) && (_DWORD)v2 )
      {
        v17 = 0LL;
        v15 = v2;
        do
        {
          v18 = *(_DWORD *)((char *)&v56[3] + v17 * 4);
          if ( v57[v17] < v18 )
            v57[v17] = v18;
          ++v17;
          --v15;
        }
        while ( v15 );
      }
      v19 = v57;
      v20 = 1;
      v21 = v15;
      if ( (_DWORD)v2 )
      {
        v22 = v15;
        v23 = v57;
        do
        {
          if ( *(_BYTE *)(v22 + PopPepPlatformState + 57) == (_BYTE)v15 && *v23 != 1 )
            PopFxBugCheck(0x620uLL, v4, v21, 0LL);
          v24 = *v19;
          v25 = 1;
          do
          {
            if ( v25 >= v24 )
              break;
            v26 = v25++ - 1;
            *(_DWORD *)(a1 + 4 * v26 + 144) |= v20;
          }
          while ( v25 <= 3 );
          if ( DeepSleepPlatformStateIndex != -1 && v21 == DeepSleepPlatformStateIndex && v24 > 1 )
          {
            *(_DWORD *)(v4 + 612) = v24;
            *(_QWORD *)(v4 + 624) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v4 + 608) = 1;
            _InterlockedOr((volatile signed __int32 *)(v4 + 824), 0x10u);
          }
          ++v19;
          v20 *= 2;
          ++v21;
          v22 += 384LL;
          ++v23;
          LODWORD(v15) = 0;
        }
        while ( v21 < (unsigned int)v2 );
      }
      v27 = *(_DWORD *)(a1 + 152);
      v16 = v49;
      *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 164) = v27;
    }
    *(_DWORD *)(v4 + 616) = v16;
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 600));
    v28 = *(int *)(a1 + 168);
    if ( (_DWORD)v28 != 4 )
      PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(a1 + 4 * v28 + 140), 1);
    v29 = *(_BYTE *)(a1 + 124);
    if ( v29 )
    {
      v30 = v15;
      v47 = v15;
      if ( *(_DWORD *)(a1 + 180) > (unsigned int)v15 )
      {
        while ( 1 )
        {
          v53 = a1 + 200LL * v30;
          v31 = *(_QWORD *)(*(_QWORD *)(v4 + 832) + 8LL * v30);
          memset(v57, 0, sizeof(v57));
          v32 = v31 + 200;
          KxAcquireSpinLock((PKSPIN_LOCK)v32);
          *(_DWORD *)(v32 + 16) = v16;
          memset((void *)(v32 + 32), 0, 0xC0uLL);
          *(_BYTE *)(v32 + 8) = 0;
          if ( PopPluginRequestComponentIdleConstraints(*(_QWORD *)(a1 + 32), v30, (__int64)v57, v2) )
          {
            v46 = PopFxEnableEnhancedAccounting(&v49);
            v33 = v57;
            v34 = 1;
            v35 = 0;
            if ( (_DWORD)v2 )
            {
              v36 = v53;
              v37 = v57;
              v38 = 0LL;
              do
              {
                if ( !*(_BYTE *)(v38 + PopPepPlatformState + 57) && *v37 )
                  PopFxBugCheck(0x621uLL, v4, v30, v35);
                v39 = 0;
                if ( *(_DWORD *)(v36 + 372) )
                {
                  v40 = (_DWORD *)(*(_QWORD *)(v36 + 376) + 16LL);
                  do
                  {
                    if ( v39 >= *v33 )
                      break;
                    *v40 |= v34;
                    ++v39;
                    v40 += 6;
                  }
                  while ( v39 < *(_DWORD *)(v36 + 372) );
                }
                if ( DeepSleepPlatformStateIndex != -1 && v35 == DeepSleepPlatformStateIndex && *v33 )
                {
                  *(_DWORD *)(v32 + 12) = *v33;
                  *(_QWORD *)(v32 + 24) = MEMORY[0xFFFFF78000000008];
                  *(_BYTE *)(v32 + 8) = 1;
                  v47 = 1;
                  _InterlockedOr((volatile signed __int32 *)(v4 + 824), 0x10u);
                }
                ++v33;
                v34 *= 2;
                ++v35;
                v38 += 384LL;
                ++v37;
              }
              while ( v35 < (unsigned int)v2 );
            }
            v16 = v49;
          }
          *(_DWORD *)(v32 + 16) = v16;
          KxReleaseSpinLock((PKSPIN_LOCK)v32);
          PopPepUpdateIdleStateRefCount(
            0,
            *(_DWORD *)(*(_QWORD *)(v53 + 376) + 24LL * *(unsigned int *)(v53 + 360) + 16),
            1);
          LOBYTE(v15) = 0;
          if ( v47 )
            _InterlockedOr((volatile signed __int32 *)(v4 + 824), 0x100u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v4 + 824), 0xFFFFFEFF);
          if ( ++v30 >= *(_DWORD *)(a1 + 180) )
            break;
          v16 = v49;
        }
        v29 = *(_BYTE *)(a1 + 124);
      }
      v14 = v48;
      if ( v29 )
        goto LABEL_70;
    }
    if ( *(_BYTE *)(a1 + 384) != (_BYTE)v15 )
LABEL_70:
      *(_DWORD *)(a1 + 172) = 2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (v14 + 1));
          v45 = (v44 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          LOBYTE(v15) = 0;
        }
      }
    }
    __writecr8(v14);
    PoFxIdleDevice(v54);
    if ( v46 != (_BYTE)v15 )
      PopPepResetDeviceAccountingLevel();
  }
  else if ( (*(_DWORD *)(v4 + 824) & 2) != 0 )
  {
    PopPepInitializeDebuggerMasks(a1, v2);
  }
}
