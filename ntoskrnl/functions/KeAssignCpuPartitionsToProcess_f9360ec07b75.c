__int64 __fastcall KeAssignCpuPartitionsToProcess(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v7; // rbx
  void *Pool2; // r12
  __int64 v9; // rax
  PVOID *v10; // r14
  unsigned int v11; // edi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ecx
  _QWORD **i; // rbx
  __int64 v16; // r9
  __int64 *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // r8
  _QWORD *v22; // rsi
  _QWORD *v23; // rdi
  unsigned int v24; // r8d
  unsigned int v25; // edx
  _QWORD *v26; // r11
  _QWORD *v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  unsigned int v37; // edi
  unsigned __int8 CurrentIrql; // al
  KIRQL v39; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  bool v43; // zf
  _QWORD *v44; // rbx
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  _QWORD *v47; // r8
  _QWORD *v48; // rdx
  unsigned int v49; // esi
  PVOID *v50; // rbx
  unsigned __int16 v52[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v53; // [rsp+24h] [rbp-1Ch]
  PVOID P; // [rsp+28h] [rbp-18h]
  _QWORD *v55; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v56; // [rsp+38h] [rbp-8h]
  KIRQL v58; // [rsp+88h] [rbp+48h]

  v52[0] = 0;
  v56 = &v55;
  v55 = &v55;
  v53 = KiActiveGroups;
  v7 = (unsigned __int16)KiActiveGroups;
  P = (PVOID)ExAllocatePool2(64LL, 8LL * (unsigned __int16)KiActiveGroups, 1967352139LL);
  Pool2 = (void *)ExAllocatePool2(64LL, 16 * v7, 1967352139LL);
  v9 = ExAllocatePool2(64LL, 8LL * a2, 1967352139LL);
  v10 = (PVOID *)v9;
  if ( !P || !Pool2 || !v9 )
  {
LABEL_36:
    v37 = -1073741670;
    goto LABEL_37;
  }
  v11 = 0;
  if ( a2 )
  {
    v12 = (_QWORD *)v9;
    do
    {
      v13 = ExAllocatePool2(64LL, 80LL, 1967352139LL);
      if ( !v13 )
        goto LABEL_36;
      *v12 = v13;
      ++v11;
      ++v12;
    }
    while ( v11 < a2 );
  }
  v58 = KeAcquireSpinLockRaiseToDpc(&KiCpuPartitionAssignmentLock);
  if ( a4 )
    KiRemoveCpuPartitionAssignmentProcess(a3, (__int64)&v55);
  v14 = 0;
  for ( i = (_QWORD **)(a3 + 1056); v14 < a2; *(_QWORD *)(v16 + 280) = v20 )
  {
    v16 = *(_QWORD *)(a1 + 8LL * v14);
    v17 = (__int64 *)v10[v14];
    *v17 = a3;
    v18 = v17 + 4;
    v17[1] = v16;
    v19 = *(_QWORD **)(a3 + 1064);
    if ( (_QWORD **)*v19 != i
      || (*v18 = i,
          v20 = v17 + 2,
          v18[1] = v19,
          *v19 = v18,
          *(_QWORD *)(a3 + 1064) = v18,
          v21 = *(_QWORD **)(v16 + 280),
          *v21 != v16 + 272) )
    {
LABEL_53:
      __fastfail(3u);
    }
    *v20 = v16 + 272;
    ++v14;
    v20[1] = v21;
    *v21 = v20;
  }
  v22 = *i;
LABEL_26:
  while ( v22 != i )
  {
    v23 = v22;
    v22 = (_QWORD *)*v22;
    KeQueryCpuPartitionAffinity(*(v23 - 3), Pool2, v53, v52);
    v24 = v52[0];
    v25 = 0;
    if ( v52[0] )
    {
      v26 = P;
      v27 = Pool2;
      while ( 1 )
      {
        v28 = *((unsigned __int16 *)v27 + 4);
        v29 = v26[v28];
        if ( (v29 & *v27) != 0 )
          break;
        v30 = *v27 | v29;
        ++v25;
        v27 += 2;
        v26[v28] = v30;
        if ( v25 >= v24 )
          goto LABEL_26;
      }
      v31 = *v23;
      v32 = (_QWORD *)v23[1];
      if ( *(_QWORD **)(*v23 + 8LL) != v23 )
        goto LABEL_53;
      if ( (_QWORD *)*v32 != v23 )
        goto LABEL_53;
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      v33 = v23 - 2;
      v34 = *(v23 - 2);
      v35 = (_QWORD *)*(v23 - 1);
      if ( *(_QWORD **)(v34 + 8) != v23 - 2 )
        goto LABEL_53;
      if ( (_QWORD *)*v35 != v33 )
        goto LABEL_53;
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      v36 = v56;
      if ( *v56 != &v55 )
        goto LABEL_53;
      v33[1] = v56;
      *v33 = &v55;
      *v36 = v33;
      v56 = (_QWORD **)(v23 - 2);
    }
  }
  v37 = KeSetCpuSetsProcess(a3, (unsigned __int16)v53, (__int64)P);
  KxReleaseSpinLock((volatile signed __int64 *)&KiCpuPartitionAssignmentLock);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v39 = v58;
    if ( v58 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v42 = ~(unsigned __int16)(-1LL << (v58 + 1));
      v43 = (v42 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v42;
      if ( v43 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v39 = v58;
  }
  __writecr8(v39);
  *v10 = 0LL;
LABEL_37:
  v44 = v55;
  while ( v44 != &v55 )
  {
    v45 = (_QWORD *)*v44;
    v46 = v44 - 2;
    v47 = v44;
    v44 = v45;
    v48 = (_QWORD *)v47[1];
    if ( (_QWORD *)v45[1] != v47 || (_QWORD *)*v48 != v47 )
      goto LABEL_53;
    *v48 = v45;
    v45[1] = v48;
    ExFreePoolWithTag(v46, 0);
  }
  if ( v10 )
  {
    v49 = 0;
    if ( a2 )
    {
      v50 = v10;
      do
      {
        if ( !*v50 )
          break;
        ExFreePoolWithTag(*v50, 0);
        ++v49;
        ++v50;
      }
      while ( v49 < a2 );
    }
    ExFreePoolWithTag(v10, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v37;
}
