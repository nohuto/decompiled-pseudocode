__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  signed __int64 *v5; // r14
  int v7; // ebx
  char v8; // bp
  signed __int64 v9; // r13
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  char v13; // cl
  unsigned __int64 v14; // r10
  int v15; // edx
  unsigned __int16 v16; // ax
  unsigned int v17; // ecx
  signed __int64 *v18; // r9
  char v19; // cl
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // r9
  char *v23; // r8
  char *v24; // rcx
  __int64 v25; // r10
  int v26; // edx
  signed __int16 v27; // ax
  int v28; // r15d
  int v29; // ebp
  unsigned __int16 v30; // dx
  signed __int64 v32; // rdi
  unsigned int v33; // ecx
  unsigned __int8 v34; // al
  int v35; // r10d
  char v36; // al
  signed __int64 v37; // r8
  _QWORD *v38; // r9
  signed __int64 v39; // rcx
  _QWORD *v40; // rdx
  signed __int64 *v41; // r8
  signed __int64 **v42; // rax
  signed __int64 **v43; // rax
  volatile LONG *v44; // r13
  unsigned __int8 v45; // r13
  struct _KTHREAD *v46; // rcx
  bool v47; // zf
  unsigned __int64 v48; // rdx
  unsigned __int8 v49; // cl
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  __int64 v53; // rax
  volatile LONG *v54; // r13
  struct _KTHREAD *v55; // rcx
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  int v58; // eax
  _DWORD *v59; // r8
  unsigned __int8 v60; // r13
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v65; // eax
  signed __int64 v66; // rax
  volatile LONG *SpinLock; // [rsp+30h] [rbp-58h]
  unsigned __int8 v69; // [rsp+98h] [rbp+10h]
  unsigned int v70; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  v69 = -1;
  v5 = (signed __int64 *)a2;
  v7 = qword_140C6AF48 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = a4;
  v9 = 0LL;
  if ( a3 )
  {
    v10 = a3 - (((unsigned int)qword_140C6AF48 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12)) >> 16) - a2;
    v11 = *(_QWORD *)(a1
                    + 8LL
                    * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v7 + 15) >> 4))
                    + 128);
    v12 = *(_DWORD *)(v11 + 72);
    v13 = *(_BYTE *)(v11 + 76);
    if ( v12 )
    {
      v14 = (v10 * (unsigned __int64)v12) >> v13;
      v15 = v10 - v14 * (unsigned __int16)v7;
    }
    else
    {
      LODWORD(v14) = v10 >> v13;
      v15 = ((1 << v13) - 1) & v10;
    }
    if ( v15 )
      return v4;
    v16 = *((_WORD *)v5 + 18);
    v17 = 2 * v14;
    if ( v16 >= (unsigned __int16)v14 )
      v16 = v14;
    *((_WORD *)v5 + 18) = v16;
    v18 = &v5[(unsigned __int64)v17 >> 6];
    _m_prefetchw(v18 + 6);
    if ( (((unsigned __int64)_InterlockedAnd64(v18 + 6, ~(3LL << (v17 & 0x3F))) >> (v17 & 0x3F)) & 1) == 0 )
    {
      RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v5, (unsigned int)v14, 0LL);
      return v4;
    }
    if ( *((_BYTE *)v5 + 45) > 1u )
    {
      v19 = *((_BYTE *)v5 + 44);
      v20 = a3 - (_DWORD)v5;
      v21 = (unsigned int)(a3 - (_DWORD)v5) >> v19;
      v22 = 2 * v21;
      v23 = (char *)v5 + 2 * v21 + *((unsigned __int16 *)v5 + 23);
      _m_prefetchw(v23);
      v24 = &v23[2 * ((((unsigned int)(unsigned __int16)v7 + v20 - 1) >> v19) - (unsigned int)v21) + 2];
      LODWORD(v25) = -1;
      v26 = 0;
      if ( v23 < v24 )
      {
        do
        {
          v27 = _InterlockedDecrement16((volatile signed __int16 *)v23);
          if ( v27 )
          {
            if ( v27 == -1 )
              --v26;
          }
          else
          {
            ++v26;
            if ( (_DWORD)v25 == -1 )
              v25 = v22 >> 1;
          }
          v23 += 2;
          v22 += 2LL;
        }
        while ( v23 < v24 );
        if ( v26 )
        {
          v48 = (v26 << *((_BYTE *)v5 + 44)) / 4096;
          if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v48);
        }
        if ( (_DWORD)v25 != -1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v5, v25, 2, v8);
      }
    }
  }
  v28 = *((unsigned __int16 *)v5 + 17);
  LOWORD(v29) = *((_WORD *)v5 + 16);
  do
  {
    if ( !v9 && (!(_WORD)v29 || (unsigned __int16)v29 == v28 - 1) )
    {
      v32 = v5[2];
      v33 = *(unsigned __int8 *)(a1 + 57);
      v70 = v33;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( !v32 )
            {
              v32 = _InterlockedCompareExchange64(v5 + 2, 3LL, 0LL);
              if ( !v32 )
                return 1;
            }
            if ( (v32 & 1) == 0 )
              break;
            v66 = _InterlockedCompareExchange64(v5 + 2, v32 & 1 | (v32 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v32);
            v47 = v32 == v66;
            v32 = v66;
            if ( v47 )
              return 1;
            v33 = v70;
          }
          SpinLock = (volatile LONG *)(v32 + 16);
          v9 = v32;
          v34 = RtlpHpAcquireLockExclusive(v32 + 16, v33);
          v32 = v5[2];
          v69 = v34;
          if ( v9 == v32 )
            goto LABEL_21;
          if ( !v70 )
            break;
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
          {
            v60 = v69;
            if ( v69 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << (v69 + 1));
              v47 = (v65 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v65;
              if ( v47 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          else
          {
            v60 = v69;
          }
          __writecr8(v60);
LABEL_101:
          v33 = v70;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)SpinLock);
        KeAbPostRelease((ULONG_PTR)SpinLock);
        CurrentThread = KeGetCurrentThread();
        v33 = 0;
        v47 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v47
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
          goto LABEL_101;
        }
      }
    }
LABEL_21:
    v30 = v29 + 1;
    v29 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v5 + 16, v29 + 1, v29);
  }
  while ( v30 != v29 + 1 );
  if ( (_WORD)v29 )
  {
    if ( v29 != v28 - 1 )
      goto LABEL_24;
    v35 = 2;
  }
  else
  {
    v35 = 0;
  }
  v36 = *((_BYTE *)v5 + 38);
  switch ( v36 )
  {
    case 1:
      v37 = v9 + 40;
      goto LABEL_35;
    case 0:
      v37 = v9 + 24;
      v38 = (_QWORD *)(v9 + 8);
      goto LABEL_36;
    case 2:
      v37 = 0LL;
LABEL_35:
      v38 = 0LL;
LABEL_36:
      if ( v35 )
      {
        v39 = 0LL;
        v40 = 0LL;
      }
      else
      {
        v39 = v9 + 24;
        v40 = (_QWORD *)(v9 + 8);
      }
      if ( v37 )
      {
        v41 = (signed __int64 *)*v5;
        v42 = (signed __int64 **)v5[1];
        if ( *(signed __int64 **)(*v5 + 8) == v5 && *v42 == v5 )
        {
          *v42 = v41;
          v41[1] = (signed __int64)v42;
          if ( v38 )
            --*v38;
          goto LABEL_43;
        }
LABEL_120:
        __fastfail(3u);
      }
LABEL_43:
      *((_BYTE *)v5 + 38) = v35;
      if ( v39 )
      {
        v43 = *(signed __int64 ***)(v39 + 8);
        if ( *v43 != (signed __int64 *)v39 )
          goto LABEL_120;
        *v5 = v39;
        v5[1] = (signed __int64)v43;
        *v43 = v5;
        *(_QWORD *)(v39 + 8) = v5;
        if ( v40 )
          ++*v40;
        v5 = 0LL;
      }
      if ( (*(_BYTE *)v9 & 1) == 0 && *(_QWORD *)(v9 + 8) > 8uLL )
      {
        v5 = *(signed __int64 **)v39;
        v53 = **(_QWORD **)v39;
        if ( *(_QWORD *)(*(_QWORD *)v39 + 8LL) != v39 || *(signed __int64 **)(v53 + 8) != v5 )
          goto LABEL_120;
        *(_QWORD *)v39 = v53;
        *(_QWORD *)(v53 + 8) = v39;
        --*v40;
        *((_BYTE *)v5 + 38) = 2;
      }
      if ( v5 && *((_BYTE *)v5 + 38) == 2 )
        v5[2] = 0LL;
      break;
  }
  v44 = (volatile LONG *)(v9 + 16);
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v44);
    if ( KiIrqlFlags && (v49 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v49 <= 0xFu )
    {
      v45 = v69;
      if ( v69 <= 0xFu && v49 >= 2u )
      {
        v50 = KeGetCurrentPrcb();
        v51 = v50->SchedulerAssist;
        v52 = ~(unsigned __int16)(-1LL << (v69 + 1));
        v47 = (v52 & v51[5]) == 0;
        v51[5] &= v52;
        if ( v47 )
          KiRemoveSystemWorkPriorityKick(v50);
      }
    }
    else
    {
      v45 = v69;
    }
    __writecr8(v45);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v44);
    KeAbPostRelease((ULONG_PTR)v44);
    v46 = KeGetCurrentThread();
    v47 = v46->SpecialApcDisable++ == -1;
    if ( v47 && ($C71981A45BEB2B45F82C232A7085991E *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
      KiCheckForKernelApcDelivery();
  }
  v9 = 0LL;
  if ( v5 )
    RtlpHpLfhBucketAddSubsegment(
      a1,
      *(_QWORD *)(a1
                + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v7 + 15) >> 4))
                + 128),
      v5,
      a4);
LABEL_24:
  v4 = 1;
  if ( v9 )
  {
    v54 = (volatile LONG *)(v9 + 16);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v54);
      if ( KiIrqlFlags )
      {
        v56 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v56 <= 0xFu && v69 <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = ~(unsigned __int16)(-1LL << (v69 + 1));
          v59 = v57->SchedulerAssist;
          v47 = (v58 & v59[5]) == 0;
          v59[5] &= v58;
          if ( v47 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
      __writecr8(v69);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v54);
      KeAbPostRelease((ULONG_PTR)v54);
      v55 = KeGetCurrentThread();
      v47 = v55->SpecialApcDisable++ == -1;
      if ( v47 && ($C71981A45BEB2B45F82C232A7085991E *)v55->ApcState.ApcListHead[0].Flink != &v55->152 )
        KiCheckForKernelApcDelivery();
    }
  }
  return v4;
}
