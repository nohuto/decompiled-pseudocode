__int64 __fastcall MiAddPhysicalMemory(unsigned __int16 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r15
  unsigned __int16 *v6; // r13
  unsigned int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // rsi
  int v10; // ebx
  unsigned int v11; // r8d
  ULONG_PTR v12; // rsi
  __int64 v13; // r14
  int v14; // ecx
  ULONG_PTR v15; // r12
  unsigned __int64 IsExtentDangling; // rax
  struct _KTHREAD *v17; // r15
  unsigned __int64 v18; // r8
  _QWORD *v19; // rcx
  ULONG_PTR v20; // rax
  int v21; // r13d
  int v22; // r15d
  PVOID v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  int v26; // ebx
  __int64 v27; // r13
  PVOID *i; // r15
  bool v29; // zf
  int v30; // ecx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  int v33; // r9d
  int v35; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-D8h]
  int v38; // [rsp+58h] [rbp-D0h]
  int v39; // [rsp+5Ch] [rbp-CCh]
  int v40; // [rsp+60h] [rbp-C8h]
  int v41; // [rsp+64h] [rbp-C4h]
  __int64 v42; // [rsp+68h] [rbp-C0h] BYREF
  PVOID P[3]; // [rsp+70h] [rbp-B8h] BYREF
  int v44; // [rsp+88h] [rbp-A0h]
  char *v45; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp-90h] BYREF
  unsigned __int64 *v47; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-80h]
  __int64 v49; // [rsp+B8h] [rbp-70h]
  _QWORD v50[13]; // [rsp+C0h] [rbp-68h] BYREF

  v5 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  P[2] = 0LL;
  v7 = a4;
  P[1] = P;
  v8 = a3;
  v9 = 0LL;
  P[0] = P;
  v50[1] = 0LL;
  v50[4] = 0LL;
  v42 = 0LL;
  v36 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v40 = 0;
  v41 = 0;
  if ( (*(_DWORD *)a2 & 0xFFF) != 0 )
  {
    v10 = -1073741585;
LABEL_3:
    v35 = v10;
    goto LABEL_71;
  }
  if ( (*(_DWORD *)a3 & 0xFFF) != 0 )
  {
    v10 = -1073741584;
    goto LABEL_3;
  }
  MiLogAddPhysicalMemory(a1, a2, a3, a4, 0LL);
  v7 |= 1u;
  v11 = v7;
  v12 = (unsigned __int64)*v5 >> 12;
  v13 = (unsigned __int64)*v8 >> 12;
  if ( (v7 & 0x10000) == 0 )
  {
    v14 = v7 & 0x400000;
    goto LABEL_17;
  }
  if ( (v12 & 0x3FFFF) == 0 )
  {
    if ( (v13 & 0x3FFFF) != 0 )
    {
LABEL_11:
      v10 = -1073741584;
      goto LABEL_9;
    }
    if ( (v7 & 0x2000) == 0 || (v14 = v7 & 0x400000, (v7 & 0x400000) == 0) )
    {
LABEL_13:
      v10 = -1073741582;
      goto LABEL_9;
    }
LABEL_17:
    v15 = v12 + v13;
    if ( v12 >= v12 + v13 )
      goto LABEL_8;
    if ( v15 - 1 > qword_140C65820 )
    {
      if ( v14 )
        goto LABEL_11;
      v15 = qword_140C65820 + 1;
      v13 = qword_140C65820 + 1 - v12;
      if ( v12 >= qword_140C65820 + 1 )
        goto LABEL_8;
    }
    if ( v12 + v13 >= qword_140C67DE0 && v12 < qword_140C67DE0 + 2048 || v12 + v13 >= 0x3FFFFFFFFELL )
    {
      v10 = -1073741800;
      goto LABEL_9;
    }
    v7 |= 8u;
    if ( v6 == MiSystemPartition )
      v7 = v11;
    if ( (v7 & 0x1F2) != 0 && (v7 & 0x200) != 0 )
      goto LABEL_13;
    v44 = v7 & 2;
    if ( (v7 & 2) != 0 )
    {
      MiDeleteExtentPfns(0LL);
    }
    else
    {
      if ( (v7 & 0x20000) == 0 )
      {
        v41 = 1;
        MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
      }
      if ( !byte_140C653A8 )
        goto LABEL_47;
    }
    IsExtentDangling = MiIsExtentDangling(v12, v13, v7);
    if ( IsExtentDangling >= v12 && IsExtentDangling < v15 )
      goto LABEL_35;
    if ( (v7 & 2) != 0 )
    {
      v17 = CurrentThread;
      MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
      v18 = 0LL;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v19 = (char *)MmPhysicalMemoryBlock + 24;
        do
        {
          v20 = *(v19 - 1);
          if ( *v19 )
          {
            if ( v12 >= v20 )
            {
              if ( v12 < *v19 + v20 )
              {
LABEL_43:
                MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
                v10 = -1073741800;
                v35 = -1073741800;
                goto LABEL_63;
              }
            }
            else if ( v15 > v20 )
            {
              goto LABEL_43;
            }
          }
          ++v18;
          v19 += 2;
        }
        while ( v18 < *(unsigned int *)MmPhysicalMemoryBlock );
      }
      byte_140C653A8 = 1;
      MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
      v21 = v7 & 8;
      v22 = v7 & 0x40000;
      v39 = v7 & 0x100000;
LABEL_93:
      v35 = MiMapNewPfns(v12, v15, a5);
      v10 = v35;
      if ( v35 >= 0 )
      {
        v29 = v44 == 0;
        *a3 = v13 << 12;
        if ( v29 )
        {
          MiPerformMemoryChange(v12, v13, (void **)&v45, &v42, v7, (__int64 ***)P);
          MiComputeNodeMemory((__int16 *)MiSystemPartition, 1);
          if ( v21 )
            MiComputeNodeMemory((__int16 *)a1, 1);
          _InterlockedAdd64(&qword_140C66830, 1uLL);
          if ( v22 )
          {
            v49 = 257LL;
            v47 = &v46;
            v48 = 0LL;
            MiInsertPartitionPages((__int16 *)MiSystemPartition, (__int64)a1, (__int64)&v47, v13, 1LL);
          }
          if ( !v39 )
          {
            v30 = -1;
            if ( qword_140C6F350 <= 0xFFFFFFFF )
              v30 = qword_140C6F350;
            *(_DWORD *)(MmWriteableSharedUserData + 744) = v30;
          }
          v31 = v12;
          if ( (v7 & 0x80) != 0 )
          {
            v32 = v13;
            v33 = 1;
          }
          else
          {
            v31 = v12 & 0xFFFFFFFFFFFFFE00uLL;
            v33 = 0;
            v32 = ((v13 + v12 + 511) & 0xFFFFFFFFFFFFFE00uLL) - (v12 & 0xFFFFFFFFFFFFFE00uLL);
          }
          MiUpdateLargePageBitMap((__int64)a1, v31, v32, v33, 0);
          if ( v21 )
            MiUpdateLargePageBitMap((__int64)MiSystemPartition, v12, v13, 1, 0);
          if ( (v7 & 0x10000) != 0 )
            MiHotRemoveHugeRange(v12, v13, 0);
          if ( (v7 & 0x80) == 0 )
            MiEnableNewPfns((volatile signed __int64 *)a1, v12, v13, v7);
          if ( stru_140C66F68.Header.SignalState && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
            ZwUpdateWnfStateData((__int64)&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL);
          KePulseEvent(qword_140C6B220, 0, 0);
        }
        v10 = 0;
        goto LABEL_36;
      }
      goto LABEL_60;
    }
LABEL_47:
    v39 = v7 & 0x100000;
    if ( (v7 & 0x100000) == 0 && qword_140C6F350 + v13 > qword_140C65770 )
    {
      if ( (v7 & 0x400000) != 0 )
      {
LABEL_50:
        v10 = -1073741585;
        goto LABEL_36;
      }
      v13 = qword_140C65770 - qword_140C6F350;
      v15 = v12 + qword_140C65770 - qword_140C6F350;
    }
    v36 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
    if ( v12 >= v15 )
      goto LABEL_50;
    if ( (v7 & 0x10000) == 0 && (unsigned int)MiIsAnyPartOfRangeInHugePfn(v12, v13) )
    {
LABEL_35:
      v10 = -1073741800;
LABEL_36:
      v35 = v10;
      goto LABEL_62;
    }
    if ( (v7 & 0x800) == 0 )
    {
      v35 = KeConfigureDynamicMemory(v12, v15 - 1, 0LL);
      v10 = v35;
      if ( v35 < 0 )
        goto LABEL_62;
      v40 = 1;
    }
    if ( (unsigned int)MiDescribePageRun((__int64)P, v12, v13) )
    {
      v50[0] = 0LL;
      v50[2] = v12;
      v50[3] = v13;
      v35 = MiConfigureMemoryInsertion(&v45, MmPhysicalMemoryBlock, v50);
      v10 = v35;
      if ( v35 < 0 )
      {
LABEL_60:
        if ( v40 )
          KeConfigureDynamicMemory(v12, v15 - 1, 8LL);
LABEL_62:
        v17 = CurrentThread;
LABEL_63:
        if ( v41 )
          MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)v17);
        if ( v45 )
          ExFreePoolWithTag(v45 - 16, 0);
        if ( v42 )
          ExFreePoolWithTag((PVOID)(v42 - 16), 0);
        v5 = a2;
        v6 = a1;
        goto LABEL_70;
      }
      v38 = v7 & 8;
      if ( (v7 & 8) != 0 )
        v25 = MiSplitPfnBitMapsForPartitionHierarchy((__int64)v6);
      else
        v25 = MiSplitPfnBitMaps((__int64)MiSystemPartition, v12, v13);
      if ( v25 )
      {
        if ( (dword_140D1D1D4 & 1) != 0 )
        {
          v26 = 0;
          while ( (unsigned int)MiSplitMirrorBitMap(&xmmword_140C67B10[v26], v12, v13) )
          {
            if ( (unsigned int)++v26 >= 2 )
              goto LABEL_83;
          }
        }
        else
        {
LABEL_83:
          v27 = v36;
          for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
          {
            v10 = MiConfigureMemoryInsertion(&v42, v27, i);
            v35 = v10;
            if ( v27 != v36 )
              ExFreePoolWithTag((PVOID)(v27 - 16), 0);
            if ( v10 < 0 )
              goto LABEL_60;
            v27 = v42;
          }
          v22 = v7 & 0x40000;
          if ( (v7 & 0x40000) == 0 || (unsigned int)MiAddRangeToPartitionTree(&v46, v12, v13, 0) )
          {
            v21 = v38;
            goto LABEL_93;
          }
        }
      }
    }
    v10 = -1073741670;
    v35 = -1073741670;
    goto LABEL_60;
  }
LABEL_8:
  v10 = -1073741585;
LABEL_9:
  v35 = v10;
LABEL_70:
  v8 = a3;
  v9 = v36;
LABEL_71:
  while ( 1 )
  {
    v23 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v24 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v24 + 8) = P;
    ExFreePoolWithTag(v23, 0);
  }
  MiDeletePartitionPageNodes(&v46);
  if ( (v7 & 2) == 0 && v9 )
    MiDereferencePageRuns(v9);
  MiLogAddPhysicalMemory(v6, v5, v8, v7, (__int64)&v35);
  return (unsigned int)v10;
}
