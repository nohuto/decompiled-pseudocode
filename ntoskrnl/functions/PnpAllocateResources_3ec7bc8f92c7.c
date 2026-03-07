__int64 __fastcall PnpAllocateResources(unsigned int a1, _DWORD *a2, char a3, _BYTE *a4)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rdi
  int ResourceRequirementsForAssignTable; // ebp
  int v12; // edx
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  int *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r15d
  _DWORD *v24; // rbx
  __int64 v25; // r14
  int BestConfiguration; // eax
  _DWORD *v27; // rax
  _DWORD *v28; // rcx
  _OWORD *v29; // rdx
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  unsigned int v34; // eax
  _DWORD *v35; // rcx
  _DWORD *i; // rbx
  _DWORD *v37; // rax
  unsigned __int64 v38; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  unsigned __int64 v41; // rax
  __int128 v42; // [rsp+30h] [rbp-38h] BYREF
  size_t NumOfElements; // [rsp+80h] [rbp+18h] BYREF

  v4 = a1;
  v42 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v4;
  v9 = (unsigned __int64)&a2[16 * v4];
  ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(a2, v9, &NumOfElements);
  if ( ResourceRequirementsForAssignTable < 0 )
    goto LABEL_6;
  v12 = 0;
  v13 = 3221226029LL;
  v14 = 1;
  v15 = 64LL;
  if ( !IopBootConfigsReserved )
  {
    v27 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      while ( (int)v27[14] < 0 || *((_QWORD *)v27 + 3) )
      {
        v27 += 16;
        if ( (unsigned __int64)v27 >= v9 )
          goto LABEL_47;
      }
      v12 = 1;
    }
LABEL_47:
    if ( v27 != (_DWORD *)v9 && (unsigned __int64)a2 < v9 )
    {
      v37 = a2 + 2;
      v38 = ((unsigned __int64)((v4 << 6) - 1) >> 6) + 1;
      do
      {
        if ( (int)v37[12] < 0 || *((_QWORD *)v37 + 2) )
        {
          *v37 |= 0x20u;
          v37[12] = -1073741267;
        }
        v37 += 16;
        --v38;
      }
      while ( v38 );
    }
    if ( v12 )
      goto LABEL_40;
  }
  v16 = a2;
  if ( (unsigned __int64)a2 < v9 )
  {
    while ( 1 )
    {
      v17 = *v16 ? *(_QWORD *)(*(_QWORD *)(*v16 + 312LL) + 40LL) : 0LL;
      if ( (*(_DWORD *)(v17 + 396) & 0x40) != 0 && v16[3] )
        break;
      v16 += 8;
      if ( (unsigned __int64)v16 >= v9 )
        goto LABEL_18;
    }
    v14 = 0;
  }
LABEL_18:
  if ( v16 == (_QWORD *)v9 || (unsigned __int64)a2 >= v9 )
  {
    v18 = NumOfElements;
  }
  else
  {
    v18 = NumOfElements;
    v19 = a2 + 2;
    do
    {
      v20 = *((_QWORD *)v19 - 1);
      if ( v20 )
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
      else
        v21 = 0LL;
      if ( (*(_DWORD *)(v21 + 396) & 0x40) == 0 || !*((_QWORD *)v19 + 2) )
      {
        v22 = *v19;
        if ( (*v19 & 0x20) == 0 )
        {
          v19[12] = -1073741267;
          *v19 = v22 | 0x20;
          --v18;
        }
      }
      v19 += 16;
    }
    while ( (unsigned __int64)(v19 - 2) < v9 );
  }
  if ( !v18 )
  {
    ResourceRequirementsForAssignTable = -1073741823;
    goto LABEL_40;
  }
  if ( v18 != (_DWORD)v4 )
  {
    v28 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      v29 = (_OWORD *)(v9 - 64);
      do
      {
        if ( (v28[2] & 0x20) != 0 )
        {
          v9 -= 64LL;
          v30 = *(_OWORD *)v28;
          v31 = *((_OWORD *)v28 + 1);
          v32 = *((_OWORD *)v28 + 2);
          v33 = *((_OWORD *)v28 + 3);
          *(_OWORD *)v28 = *v29;
          *((_OWORD *)v28 + 1) = v29[1];
          *((_OWORD *)v28 + 2) = v29[2];
          *((_OWORD *)v28 + 3) = v29[3];
          *v29 = v30;
          v29[1] = v31;
          v29[2] = v32;
          v29[3] = v33;
          v29 -= 4;
        }
        else
        {
          v28 += 16;
        }
      }
      while ( (unsigned __int64)v28 < v9 );
    }
  }
  if ( v18 > 1 )
  {
    v34 = 0;
    v35 = a2 + 5;
    do
    {
      *v35 = v34++;
      v35 += 16;
    }
    while ( v34 < v18 );
    qsort(a2, v18, 0x40uLL, PnpCompareResourceRequestPriority);
  }
  if ( v14 )
  {
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration(a2, v18, &v42, v13);
    if ( ResourceRequirementsForAssignTable >= 0 )
    {
      ResourceRequirementsForAssignTable = IopCommitConfiguration(&v42);
      for ( i = a2; (unsigned __int64)i < v9; i += 16 )
      {
        if ( ResourceRequirementsForAssignTable < 0 )
          i[14] = -1073741800;
        else
          PnpBuildCmResourceLists(i, i + 16, 0LL);
      }
      goto LABEL_39;
    }
  }
  else
  {
    ResourceRequirementsForAssignTable = -1073741823;
  }
  v23 = 0;
  v24 = a2;
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_39;
  while ( 1 )
  {
    if ( *(_QWORD *)v24 )
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 312LL) + 40LL);
    else
      v25 = 0LL;
    BestConfiguration = PnpFindBestConfiguration(v24, 1LL, &v42, v13);
    ResourceRequirementsForAssignTable = BestConfiguration;
    if ( BestConfiguration >= 0 )
    {
      v23 = 1;
      ResourceRequirementsForAssignTable = IopCommitConfiguration(&v42);
      if ( ResourceRequirementsForAssignTable < 0 )
        v24[14] = -1073741800;
      else
        PnpBuildCmResourceLists(v24, v24 + 16, 0LL);
      goto LABEL_38;
    }
    if ( BestConfiguration == -1073741670 )
      goto LABEL_67;
    if ( !v23 && (a2[2] & 0x80u) == 0 )
      break;
    v24[2] |= 0x20u;
    v24[14] = -1073741267;
LABEL_38:
    v24 += 16;
    if ( (unsigned __int64)v24 >= v9 )
      goto LABEL_39;
  }
  PipSetDevNodeFlags(v25, 0x40000);
  ResourceRequirementsForAssignTable = PnpRebalance(v25, v24, 1LL, 0LL);
  PipClearDevNodeFlags(v25, 0x40000);
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    v39 = -1073741800;
    if ( ResourceRequirementsForAssignTable == -1073739512 )
      v39 = -1073739512;
    v24[14] = v39;
    goto LABEL_38;
  }
  if ( a4 )
    *a4 = 1;
  v24 += 16;
LABEL_67:
  if ( (unsigned __int64)v24 < v9 )
  {
    if ( ResourceRequirementsForAssignTable == -1073741670 )
    {
      do
      {
        v24[14] = -1073741670;
        v24 += 16;
      }
      while ( (unsigned __int64)v24 < v9 );
    }
    else
    {
      v40 = v24 + 2;
      v41 = ((v9 - (unsigned __int64)v24 - 1) >> 6) + 1;
      do
      {
        *v40 |= 0x20u;
        v40[12] = -1073741267;
        v40 += 16;
        --v41;
      }
      while ( v41 );
    }
  }
LABEL_39:
  IopReleaseFilteredBootResources(a2, v9, v15, v13);
LABEL_40:
  PnpFreeResourceRequirementsForAssignTable(a2, v9);
LABEL_6:
  if ( !a3 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ResourceRequirementsForAssignTable;
}
