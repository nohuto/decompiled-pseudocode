char __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // r13
  $C71981A45BEB2B45F82C232A7085991E *v5; // rax
  __int16 v6; // ax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // eax
  struct _KTHREAD *v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // r9
  unsigned int v21; // r10d
  _QWORD *v22; // rcx
  unsigned int v23; // r12d
  _QWORD *v24; // r13
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  _QWORD *v29; // r13
  _QWORD *v30; // r15
  __int64 v31; // rdi
  unsigned __int64 v32; // r12
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  unsigned int v37; // r8d
  _QWORD *v38; // r12
  __int64 v39; // r15
  unsigned __int64 v40; // rdi
  int v41; // r9d
  __int64 v42; // rdx
  unsigned int v43; // r8d
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  int v48; // r15d
  unsigned int v49; // r15d
  int v50; // ecx
  unsigned __int64 v51; // rax
  struct _KTHREAD *v52; // rcx
  int v53; // eax
  NTSTATUS v54; // edx
  unsigned int v55; // edi
  int *v56; // rdi
  unsigned __int8 v57; // si
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  unsigned __int64 v62; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v66; // eax
  unsigned int v68; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v69; // [rsp+64h] [rbp-35h]
  unsigned int v70; // [rsp+68h] [rbp-31h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-29h]
  _QWORD *v72; // [rsp+78h] [rbp-21h]
  _QWORD *v73; // [rsp+80h] [rbp-19h]
  _QWORD *v74; // [rsp+88h] [rbp-11h]
  __int64 v75; // [rsp+90h] [rbp-9h]
  __int64 v76; // [rsp+98h] [rbp-1h]
  __int64 v77; // [rsp+A0h] [rbp+7h]
  KIRQL v79; // [rsp+108h] [rbp+6Fh]
  KIRQL v80; // [rsp+108h] [rbp+6Fh]
  unsigned int v81; // [rsp+108h] [rbp+6Fh]
  int v82; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v83; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1;
  v70 = 0;
  v3 = 0;
  v76 = v1;
  v4 = *(_QWORD *)(v1 + 248);
  v75 = v4;
  CurrentThread = KeGetCurrentThread();
  if ( !*(_QWORD *)(v1 + 24) )
  {
    LOBYTE(v5) = MiPageFileNoFreeSpace(v1, a1);
    return (char)v5;
  }
  v77 = a1 + 208;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v72 = (_QWORD *)(a1 + 256);
  v6 = *(_WORD *)(v1 + 204);
  if ( (v6 & 0x40) != 0 )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)(88LL * (v6 & 0xF) + v4 + 3904);
    if ( v8 )
    {
      v3 = 2;
      goto LABEL_15;
    }
  }
  else
  {
    v7 = *(_QWORD *)(88LL * (v6 & 0xF) + v4 + 3904);
  }
  if ( *(_DWORD *)(v4 + 1184) )
  {
LABEL_147:
    v62 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    *(_BYTE *)(v1 + 206) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v62 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
        v14 = (v66 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v66;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v62);
    LOBYTE(v5) = 17;
    *(_QWORD *)v2 = 2575857425LL;
    goto LABEL_155;
  }
  if ( (*(_BYTE *)(v1 + 204) & 0x40) != 0 )
  {
    v8 = *(_QWORD *)(v4 + 3776);
    if ( v8 )
      v3 = 2;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 3648);
    if ( !v8 )
    {
      if ( (unsigned int)MiIsStoreVirtualPagefileFull(v4) )
      {
        v8 = *(_QWORD *)(88LL * *(unsigned int *)(v4 + 1188) + v4 + 3904);
        if ( !v8 )
          v8 = *(_QWORD *)(v4 + 3776);
      }
    }
  }
LABEL_15:
  if ( !v7 && (!v8 || (*(_BYTE *)(v1 + 204) & 0x10) != 0) )
    goto LABEL_147;
  if ( *(_DWORD *)(v4 + 1192) )
    v3 |= 4u;
  if ( (v3 & 2) == 0
    && v8
    && (*(_BYTE *)(v1 + 204) & 0x10) == 0
    && (!v7
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v8 >= (unsigned __int64)(unsigned int)dword_140D1D1DC >> 2 || v8 >= v7)) )
  {
    v3 |= 2u;
  }
  v9 = dword_140D1D1DC;
  v82 = dword_140D1D1DC;
  if ( (v3 & 2) != 0 )
  {
    if ( v8 < (unsigned int)dword_140D1D1DC )
      v9 = v8;
    v82 = v9;
  }
  if ( *(_BYTE *)(v4 + 1040) )
  {
    v69 = 0;
    v79 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1036));
    if ( *(_BYTE *)(v4 + 1042) )
    {
      *(_BYTE *)(v4 + 1042) = 0;
      *(_BYTE *)(v4 + 1040) = 0;
      v69 = 1;
    }
    else if ( *(_BYTE *)(v4 + 1040) )
    {
      v9 = *(unsigned __int8 *)(v4 + 1040);
      v82 = v9;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1036));
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && v79 <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v79 + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v11);
        v9 = v82;
      }
    }
    __writecr8(v79);
    if ( v69 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  }
  if ( (*(_DWORD *)(v2 + 40) & 0x1Cu) < 8 )
  {
    if ( v9 > 0x100 )
      v9 = 256;
    v82 = v9;
  }
  v3 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v3 & 2) != 0 )
  {
    v68 = 0;
    if ( (*(_BYTE *)(v1 + 204) & 0x40) != 0 )
    {
      if ( *(_DWORD *)(v1 + 24) < v9 )
        v9 = *(_DWORD *)(v1 + 24);
    }
    else
    {
      MiFindPageFileWriteCluster(v1, &v68, (unsigned int *)&v82, 0);
      v9 = v82;
    }
    if ( !v9 )
    {
      LOBYTE(v5) = MiPageFileNoFreeSpace(v1, v2);
LABEL_155:
      v18 = CurrentThread;
      goto LABEL_156;
    }
    v15 = MiFillNoReservationCluster(v4, v1, v72, v9);
    v16 = v15;
    v83 = v15;
  }
  else
  {
    v83 = v9;
    v17 = MiBuildReservationCluster(v72, v1, &v83, &v70);
    v16 = v83;
    v68 = v17;
    v15 = v70;
  }
  if ( v16 )
  {
    v82 = v16;
    v14 = (*(_BYTE *)(v1 + 204) & 0x40) == 0;
    v19 = v16;
    v69 = v15 - 1;
    v70 = v15 - 1;
    if ( v14 )
    {
      v80 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
      if ( (v3 & 2) != 0 )
      {
        MiFindPageFileWriteCluster(v1, &v68, (unsigned int *)&v82, 1);
        v19 = v82;
      }
      else
      {
        MiSetPageFileAllocationBits(v1, v68, v16, v20);
        v21 = -1;
        v22 = &v72[v16];
        v73 = v22;
        if ( v72 < v22 )
        {
          v23 = v68;
          v24 = v72;
          do
          {
            if ( *v24 != qword_140C69378
              || (v22 = v73, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
            {
              if ( v21 != -1 )
              {
                MiInvalidatePageFileBitmapsCache(v1, v21, v23 - v21, 0LL);
                v22 = v73;
                v21 = -1;
              }
            }
            else if ( v21 == -1 )
            {
              v21 = v23;
            }
            ++v23;
            ++v24;
          }
          while ( v24 < v22 );
          v4 = v75;
          v2 = a1;
        }
        *(_DWORD *)(v1 + 136) = v16 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
      }
      MiUpdatePagefilePeakUsage(v1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
      if ( KiIrqlFlags )
      {
        v25 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v80 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v80 + 1));
          v14 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v26);
          v69 = v70;
          v19 = v82;
          v16 = v83;
        }
      }
      __writecr8(v80);
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v81 = v3 & 0xFFFFFFFE;
    if ( v19 != v16 )
    {
      v74 = &v72[v16];
      v29 = v74;
      v30 = &v72[v19];
      do
      {
        v31 = 48LL * *v30 - 0x220000000000LL;
        v32 = (unsigned __int8)MiLockPageInline(v31);
        MiWriteCompletePfn(v31, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v33 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v32 <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
            v14 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v34);
          }
        }
        __writecr8(v32);
        ++v30;
      }
      while ( v30 < v29 );
      v19 = v82;
      v4 = v75;
      v69 = v82 - v83 + v70;
      v70 = v69;
      MiReleaseWriteInProgressCharges(v75, v83 - v82, 0);
      v1 = v76;
      v2 = a1;
    }
    v83 = v19;
    *(_DWORD *)(v2 + 248) = v19 << 12;
    v37 = 0;
    *(_DWORD *)(v2 + 136) = v19 << 12;
    *(_DWORD *)(v2 + 140) = v69;
    v38 = v72;
    v69 = v68;
    v82 = 0;
    do
    {
      v39 = 48LL * *v38 - 0x220000000000LL;
      if ( *v38 != qword_140C69378 )
      {
        v40 = (unsigned __int8)MiLockPageInline(48LL * *v38 - 0x220000000000LL);
        if ( (*(_BYTE *)(v1 + 204) & 0x40) != 0 )
        {
          LOBYTE(v41) = 0;
          v42 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1188) + 17056);
          v43 = 4;
        }
        else
        {
          v42 = v1;
          v43 = v68;
          v41 = 2 * ((*(_DWORD *)(v39 + 16) >> 1) & 1) + 1;
        }
        *(_QWORD *)(v39 + 16) = MiTransferSoftwarePte(*(_QWORD *)(v39 + 16), v42, v43, v41);
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v44 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v44 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            v46 = v45->SchedulerAssist;
            v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
            v14 = (v47 & v46[5]) == 0;
            v46[5] &= v47;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v45);
          }
        }
        __writecr8(v40);
        v19 = v83;
        v37 = v82;
      }
      ++v68;
      ++v37;
      ++v38;
      v82 = v37;
    }
    while ( v37 < v19 );
    *(_WORD *)(v77 + 8) = 8 * (dword_140D1D1DC + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v48 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v49 = v48 & 7;
    v50 = *(_DWORD *)(v4 + 900);
    v51 = *(_QWORD *)(v4 + 17216);
    if ( v50 )
    {
      if ( v51 < 0x420 )
      {
        *(_DWORD *)(v4 + 900) = v50 - 1;
LABEL_121:
        v49 = 4;
        goto LABEL_122;
      }
      *(_DWORD *)(v4 + 900) = 0;
    }
    else
    {
      if ( v51 < 0xA0 )
      {
        *(_DWORD *)(v4 + 900) = 32;
        goto LABEL_121;
      }
      if ( v51 < 0x120 )
      {
        *(_DWORD *)(v4 + 900) = 8;
        goto LABEL_121;
      }
    }
LABEL_122:
    LOBYTE(v3) = v3 & 0xFE;
    *(_DWORD *)(a1 + 40) = (4 * v49) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
    if ( v49 < 2 )
    {
      v52 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      ++*(_DWORD *)(v4 + 732);
      v14 = v52->SpecialApcDisable++ == -1;
      if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
        KiCheckForKernelApcDelivery();
    }
    MI_PAGEFILE_WRITE(a1, a1 + 184, v49, ((v81 >> 1) & 1) == 0, -1);
    v53 = *(_DWORD *)(v4 + 888);
    if ( v53 == 512 )
      *(_QWORD *)(v4 + 880) -= *(_QWORD *)(v4 + 880) >> 9;
    else
      *(_DWORD *)(v4 + 888) = v53 + 1;
    v54 = -1073741823;
    *(_QWORD *)(v4 + 880) += v83;
    v55 = v69;
    *(_DWORD *)(a1 + 40) &= ~0x20u;
    *(_QWORD *)(a1 + 176) = (unsigned __int64)v55 << 12;
    if ( (*(_BYTE *)(v1 + 204) & 0x40) != 0 || v81 == 4 )
    {
      LODWORD(v5) = MiStoreWriteModifiedPages(a1);
      v54 = (int)v5;
      if ( (int)v5 >= 0 )
        goto LABEL_155;
    }
    if ( (*(_BYTE *)(v1 + 204) & 0x40) != 0 )
    {
      v56 = (int *)(a1 + 16);
    }
    else
    {
      __incgsdword(0x2EACu);
      __addgsdword(0x2EA8u, v83);
      MiMapPageFileHash(v1, a1 + 208, 0LL, v55, v83);
      v56 = (int *)(a1 + 16);
      if ( _bittest16((const signed __int16 *)(v1 + 204), 0xBu) )
      {
        MiTransferMemoryPagefileData(v1, a1 + 208, *(_QWORD *)(a1 + 176) >> 12, 0LL);
        *v56 = 0;
        *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 248);
        goto LABEL_137;
      }
      v54 = IoAsynchronousPageWrite(
              *(struct _FILE_OBJECT **)(v1 + 56),
              (struct _MDL *)(a1 + 208),
              (LARGE_INTEGER *)(a1 + 176),
              (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
              (void *)a1,
              v49,
              *(_DWORD *)(v1 + 200),
              0,
              0LL,
              (struct _IO_STATUS_BLOCK *)(a1 + 16),
              (IRP **)(a1 + 32));
      LOBYTE(v5) = 0;
      if ( (v54 & 0xC0000000) != 0xC0000000 )
        goto LABEL_155;
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    *v56 = v54;
LABEL_137:
    v57 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a1, v56, 0);
    if ( KiIrqlFlags )
    {
      v58 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v58 <= 0xFu && v57 <= 0xFu && v58 >= 2u )
      {
        v59 = KeGetCurrentPrcb();
        v60 = v59->SchedulerAssist;
        v61 = ~(unsigned __int16)(-1LL << (v57 + 1));
        v14 = (v61 & v60[5]) == 0;
        v60[5] &= v61;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v59);
      }
    }
    LOBYTE(v5) = v57;
    __writecr8(v57);
    goto LABEL_155;
  }
  --CurrentThread->SpecialApcDisable;
  LOBYTE(v5) = MiMakePagefileWriterEntryAvailable(v2);
  v14 = v18->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v5 = &v18->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v5->ApcState.ApcListHead[0].Flink != v5 )
    {
      LOBYTE(v5) = KiCheckForKernelApcDelivery();
      goto LABEL_155;
    }
  }
LABEL_156:
  if ( (v3 & 1) != 0 )
    LOBYTE(v5) = KeLeaveCriticalRegionThread((__int64)v18);
  return (char)v5;
}
