__int64 __fastcall MiReapplyImportOptimizationForDriverVerifier(ULONG_PTR a1, int *a2, unsigned int a3)
{
  __int64 v4; // r14
  int v6; // edx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  _OWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // r15d
  unsigned int v15; // r10d
  unsigned __int64 *v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  char *v23; // r12
  char *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // r14d
  unsigned __int16 **v30; // rdx
  __int64 v31; // r9
  _OWORD *Pool; // rax
  unsigned int v33; // r14d
  __int64 v34; // r15
  unsigned __int16 *v35; // rdx
  unsigned int v36; // ebx
  void *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v42; // rdx
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v45; // r8
  int v46; // eax
  bool v47; // zf
  void *v48; // rcx
  __int64 v49; // rax
  __int64 v51; // [rsp+30h] [rbp-A9h]
  __int64 v52; // [rsp+38h] [rbp-A1h]
  ULONG_PTR Context[10]; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v54[160]; // [rsp+90h] [rbp-49h] BYREF
  int v55; // [rsp+140h] [rbp+67h]
  int v57; // [rsp+158h] [rbp+7Fh] BYREF

  v4 = a3;
  memset(v54, 0, 0x68uLL);
  v57 = 0;
  v55 = 0;
  memset(Context, 0, sizeof(Context));
  Context[8] = (ULONG_PTR)&Context[7];
  Context[7] = (ULONG_PTR)&Context[7];
  MiInitializeDriverPatchState(a1, v54);
  Context[2] = a1;
  if ( !(unsigned int)MmHasImageBeenImportOptimized(a1) )
  {
    v8 = -1073741436;
    goto LABEL_75;
  }
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
    goto LABEL_4;
  if ( *(_QWORD *)(a1 + 296) != a1 + 296 )
  {
    MiEnumerateBasePatches(v7, MiLockPatchIatForDV, Context);
    v8 = Context[9];
    if ( SLODWORD(Context[9]) < 0 )
      goto LABEL_75;
  }
  LOBYTE(v6) = 1;
  v9 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), v6, 12, (int)&v57);
  v10 = *(_QWORD *)(a1 + 112);
  v11 = 0LL;
  v51 = v9;
  v12 = v9;
  if ( v10 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v10) + 96) + 32LL);
    if ( v13 )
      v11 = *(_OWORD **)(v13 + 88);
    v12 = v51;
  }
  else
  {
    v11 = *(_OWORD **)(a1 + 320);
  }
  v14 = *(_DWORD *)(a1 + 64) >> 12;
  if ( !v11 )
  {
LABEL_4:
    v8 = -1073741637;
    goto LABEL_75;
  }
  v15 = 0;
  if ( (_DWORD)v4 )
  {
    v16 = (unsigned __int64 *)(a2 + 2);
    do
    {
      v17 = *v16;
      v18 = *(_QWORD *)(v12 + 8LL * *((int *)v16 - 2));
      v19 = *(_QWORD *)(a1 + 48);
      v20 = *v16 <= v19 ? v19 + *(unsigned int *)(a1 + 64) - v17 : v17 - v19;
      if ( v20 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
      {
        v21 = *(_QWORD *)(a1 + 48);
        v22 = v18 <= v21 ? v21 + *(unsigned int *)(a1 + 64) - v18 : v18 - v21;
        if ( v22 > 0x7FFFFFFF )
          goto LABEL_4;
      }
      v12 = v51;
      ++v15;
      v16 += 3;
    }
    while ( v15 < (unsigned int)v4 );
  }
  v8 = MiLockAndMapEntireDriver(a1, v54, &Context[3]);
  if ( v8 >= 0 )
  {
    if ( (*(_BYTE *)(Context[3] + 10) & 5) != 0 )
      v23 = *(char **)(Context[3] + 24);
    else
      v23 = (char *)MmMapLockedPagesSpecifyCache((PMDL)Context[3], 0, MmCached, 0LL, 1u, 0x20u);
    v24 = &v23[v51 - *(_QWORD *)(a1 + 48)];
    if ( (MiFlags & 0x8000) != 0 )
    {
      v8 = MiCheckVerifierFunctionsCfgState(a2, (unsigned int)v4);
      if ( v8 >= 0 )
      {
        v8 = VslReapplyImportOptimizationForDriverVerifier(a1, a2, (unsigned int)v4);
        if ( v8 >= 0 )
        {
          if ( (_DWORD)v4 )
          {
            v25 = v4;
            do
            {
              v26 = *a2;
              v27 = *((_QWORD *)a2 + 1);
              a2 += 6;
              *(_QWORD *)&v24[8 * v26] = v27;
              --v25;
            }
            while ( v25 );
          }
        }
      }
    }
    else
    {
      v28 = v14;
      HIDWORD(Context[1]) = 8 * v14 + 56;
      v52 = v14;
      if ( v14 )
      {
        v29 = 0;
        v30 = (unsigned __int16 **)v11 + 7;
        v31 = v14;
        do
        {
          if ( *v30 )
            v29 += ((*v30)[1] >> 1) + ((*v30)[2] >> 1) + (**v30 >> 2);
          ++v30;
          --v31;
        }
        while ( v31 );
        v55 = v29;
        LODWORD(v4) = a3;
      }
      Pool = MiAllocatePool(64, 8 * v14 + 56 + 4 * (v14 + v55 + 2 * v14), 0x66766D4Du);
      Context[4] = (ULONG_PTR)Pool;
      if ( Pool )
      {
        *Pool = *v11;
        Pool[1] = v11[1];
        Pool[2] = v11[2];
        *(_QWORD *)(Context[4] + 48) = Context[4] + 8 * v14 + 56;
        if ( v14 )
        {
          v33 = 0;
          v34 = 56LL;
          do
          {
            v35 = *(unsigned __int16 **)((char *)v11 + v34);
            if ( v35 )
            {
              v36 = v35[1] + 12 + v35[2] + *v35;
              v37 = (void *)(*(_QWORD *)(Context[4] + 48) + v33);
              *(_QWORD *)(v34 + Context[4]) = v37;
              memmove(v37, v35, v36);
              v33 += v36;
              v28 = v52;
            }
            v34 += 8LL;
            v52 = --v28;
          }
          while ( v28 );
          LODWORD(v4) = a3;
        }
        *(_DWORD *)(Context[4] + 8) = v51 - *(_DWORD *)(a1 + 48);
        *(_QWORD *)(Context[4] + 24) = v24;
        *(_QWORD *)(Context[4] + 16) = 0LL;
        *(_QWORD *)(Context[4] + 32) = *(_QWORD *)(a1 + 48);
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
          *(_QWORD *)(Context[4] + 40) = MiIsTargetFullyRetpolined;
        Context[5] = (ULONG_PTR)a2;
        LODWORD(Context[6]) = 24 * v4;
        v38 = *((_QWORD *)v11 + 2);
        if ( (_DWORD)v4 )
        {
          v39 = (unsigned int)v4;
          do
          {
            if ( v38 )
            {
              if ( (KiSpeculationFeatures & 0x20000000000LL) == 0
                || _bittest64(
                     (const signed __int64 *)qword_140C654D8,
                     (unsigned __int64)(*((_QWORD *)a2 + 1) + 0x800000000000LL) >> 16) )
              {
                *(_DWORD *)(v38 + 4LL * *a2) = a2[2] - *(_DWORD *)(a1 + 48);
              }
              else
              {
                *(_DWORD *)(v38 + 4LL * *a2) = 0;
              }
            }
            a2 += 6;
            --v39;
          }
          while ( v39 );
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 12 )
            LODWORD(v42) = 4096;
          else
            v42 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
          SchedulerAssist[5] |= v42;
        }
        HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
        LODWORD(Context[0]) = HIDWORD(Context[0]);
        v8 = KeIpiGenericCall(MiReapplyImportOptimizationWorker, (ULONG_PTR)Context);
        if ( KiIrqlFlags )
        {
          v43 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v45 = CurrentPrcb->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v47 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
LABEL_75:
  MiUnlockEntireDriver(v54, Context[3]);
  while ( 1 )
  {
    v48 = (void *)Context[7];
    if ( (ULONG_PTR *)Context[7] == &Context[7] )
      break;
    v49 = *(_QWORD *)Context[7];
    if ( *(ULONG_PTR **)(Context[7] + 8) != &Context[7] || *(_QWORD *)(v49 + 8) != Context[7] )
      __fastfail(3u);
    Context[7] = *(_QWORD *)Context[7];
    *(_QWORD *)(v49 + 8) = &Context[7];
    MiUnlockAndFreeDvPatchImage(v48);
  }
  if ( Context[4] )
    ExFreePoolWithTag((PVOID)Context[4], 0);
  return (unsigned int)v8;
}
