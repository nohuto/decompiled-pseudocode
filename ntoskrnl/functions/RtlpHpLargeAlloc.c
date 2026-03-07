unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, unsigned __int64 a3, unsigned int a4)
{
  __int128 v4; // xmm0
  unsigned __int64 v5; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  char v10; // bl
  int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  int v16; // r9d
  unsigned int v17; // r15d
  int v18; // ecx
  bool v19; // zf
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  unsigned __int8 v23; // al
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  bool v27; // r8
  unsigned __int64 v28; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // edx
  unsigned __int64 v38; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 v39; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-C0h]
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-90h]
  __int128 v46; // [rsp+88h] [rbp-80h] BYREF
  __int128 v47; // [rsp+98h] [rbp-70h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int128 v50; // [rsp+C8h] [rbp-40h]
  __int128 v51; // [rsp+D8h] [rbp-30h]
  __int128 v52; // [rsp+E8h] [rbp-20h]
  __int128 v53; // [rsp+F8h] [rbp-10h]
  __int128 v54; // [rsp+108h] [rbp+0h]
  int v55; // [rsp+158h] [rbp+50h]

  v4 = *(_OWORD *)a1;
  v42 = 0LL;
  v5 = 0LL;
  LODWORD(v41) = 0;
  v40 = 0LL;
  v38 = 0LL;
  v46 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v46);
  v9 = v8;
  if ( !v8 )
    return v40;
  *(_OWORD *)v8 = 0LL;
  v10 = 0;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
    v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  if ( BYTE1(*(_QWORD *)a1) == 3 )
    v10 = 3;
  if ( BYTE1(*(_QWORD *)a1) == 2 )
    v10 = 7;
  while ( 1 )
  {
    v55 = 0;
    if ( (v10 & 1) != 0 )
    {
      v11 = 0x200000;
      v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
    }
    else
    {
      v11 = 0;
      v55 = BYTE1(*(_QWORD *)a1) < 2u;
      v12 = a3 + (unsigned int)(v55 << 12);
    }
    v39 = v12;
    if ( v12 < a3 )
      goto LABEL_64;
    v13 = *(_DWORD *)(a1 + 20) & 0x40000000;
    v47 = *(_OWORD *)a1;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    if ( v13 )
    {
      *(_QWORD *)&v49 = a1;
      DWORD2(v49) = 64;
    }
    if ( (int)RtlpHpAllocVA((unsigned int)&v38, (unsigned int)&v39, v11, 0x2000, v13 != 0 ? 64 : 4, (__int64)&v47) < 0 )
    {
      v5 = 0LL;
      v38 = 0LL;
      goto LABEL_64;
    }
    v5 = v38;
    RtlpHpQueryVA(v38, v14, &v42, &v41);
    *v42 = a1;
    v45 = (a3 + 4095) >> 12;
    v15 = v45 << 12;
    v43 = v45 << 12;
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v45 << 12, a1) )
      goto LABEL_64;
    if ( (v10 & 1) != 0 )
    {
      v43 = v15 - ((v15 - 1) & 0x1FFFFF) + 0x1FFFFF;
      v16 = ((v10 & 4) << 20) | 0x20001000;
      v17 = a4;
    }
    else
    {
      v17 = a4;
      v16 = 4096;
      if ( (a4 & 2) != 0 )
        v16 = 1073745920;
    }
    v18 = *(_DWORD *)(a1 + 20) & 0x40000000;
    v48 = *(_OWORD *)a1;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    if ( v18 )
    {
      *(_QWORD *)&v52 = a1;
      DWORD2(v52) = 64;
    }
    if ( (int)RtlpHpAllocVA((unsigned int)&v38, (unsigned int)&v43, 0, v16, v18 != 0 ? 64 : 4, (__int64)&v48) >= 0 )
      break;
    if ( (v10 & 3) != 1 )
    {
      v5 = v38;
LABEL_64:
      v44 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v9, &v44);
      goto LABEL_40;
    }
    v10 &= ~1u;
    v44 = *(_OWORD *)a1;
    RtlpHpFreeVA(&v38, (unsigned __int64 *)&v39, 0x8000, &v44);
    v5 = 0LL;
    v38 = 0LL;
  }
  v19 = (v10 & 1) == 0;
  v20 = v38;
  if ( !v19 && (v17 & 2) != 0 )
    RtlHeapZero(v38, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  _BitScanForward64(&v21, v39);
  v22 = v45;
  LODWORD(v40) = v21;
  *(_QWORD *)(v9 + 24) = v20;
  *(_QWORD *)(v9 + 32) = *(_DWORD *)(v9 + 32) & 0xF01 | (2 * (v55 & 0xFFFFFF81 | (2 * ((v22 << 10) | v21 & 0x3F))));
  *(_WORD *)(v9 + 24) = ((_WORD)v22 << 12) - a2;
  v23 = RtlpHpLargeLockAcquire(a1, v17);
  v24 = (unsigned __int64 *)(a1 + 72);
  v25 = v23;
  v26 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v26 )
    v26 ^= (unsigned __int64)v24;
  v27 = 0;
  if ( v26 )
  {
    while ( 1 )
    {
      if ( v20 >= (*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v28 = *(_QWORD *)(v26 + 8);
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_34;
          v28 ^= v26;
        }
        if ( !v28 )
        {
LABEL_34:
          v27 = 1;
          break;
        }
      }
      else
      {
        v28 = *(_QWORD *)v26;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v28 )
            break;
          v28 ^= v26;
        }
        if ( !v28 )
          break;
      }
      v26 = v28;
    }
  }
  RtlRbInsertNodeEx(v24, v26, v27, v9);
  if ( (v17 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
          v19 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v25);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      CurrentThread = KeGetCurrentThread();
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(CurrentThread, v30, v31, v32);
      }
    }
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v39 / 4096);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v22);
  v5 = 0LL;
  v40 = v38;
  v38 = 0LL;
LABEL_40:
  if ( v5 )
  {
    v44 = *(_OWORD *)a1;
    RtlpHpFreeVA(&v38, (unsigned __int64 *)&v39, 0x8000, &v44);
  }
  return v40;
}
