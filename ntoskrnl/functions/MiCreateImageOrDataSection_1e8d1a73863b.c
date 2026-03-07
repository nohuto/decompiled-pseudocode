__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  int v2; // esi
  char v3; // r13
  int v4; // eax
  __int64 v5; // r14
  KPROCESSOR_MODE v6; // r9
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 *v9; // rbp
  int NewSection; // edi
  __int64 *FileMemoryPartitionInformation; // rax
  struct _KTHREAD *CurrentThread; // r14
  int v13; // eax
  __int64 v14; // r15
  _QWORD *v15; // r12
  int v17; // ecx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rcx
  char v21; // dl
  int v22; // ecx
  int v23; // ecx
  bool v24; // zf
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rcx
  _QWORD v31[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v33; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v33 = 0LL;
  v32 = 0LL;
  memset(v31, 0, sizeof(v31));
  v2 = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000) != 0 )
    return 3221225716LL;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v9 = *(__int64 **)(a1 + 48);
    goto LABEL_7;
  }
  if ( (v4 & 0x80020000) == 0 )
  {
    v6 = *(_BYTE *)(a1 + 72);
    v7 = *(_DWORD *)(a1 + 32) & 7;
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(
           *(HANDLE *)(a1 + 40),
           *((_DWORD *)MmMakeFileAccess + v7),
           (POBJECT_TYPE)IoFileObjectType,
           v6,
           &Object,
           0LL);
    v9 = (__int64 *)Object;
    NewSection = v8;
    if ( v8 < 0 )
    {
LABEL_28:
      if ( NewSection != -1073740682 )
        goto LABEL_29;
      goto LABEL_79;
    }
    v2 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      NewSection = -1073741792;
      goto LABEL_30;
    }
LABEL_7:
    FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation((__int64)v9);
    if ( FileMemoryPartitionInformation )
    {
      if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
      {
        NewSection = -1073740640;
        goto LABEL_29;
      }
      *(_QWORD *)(a1 + 176) = v29;
      if ( (*(_DWORD *)(v28 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x1000000u;
    }
    if ( !v5 )
    {
      ObfReferenceObject(v9);
      ++v2;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v9;
      LODWORD(v31[7]) = 2;
      if ( v9 )
        v31[8] = v9;
      else
        v31[8] = 0LL;
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution((__int64)v9) )
        {
          NewSection = -1073741790;
          goto LABEL_29;
        }
        CcWaitForUninitializeCacheMap((__int64)v9);
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
        {
          v21 = *(_BYTE *)(a1 + 24);
          if ( (v21 & 0x10) != 0 )
          {
            v22 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v22;
            if ( (v21 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v22 | 0x1000;
            *(_BYTE *)(a1 + 24) = v21 & 0xF;
          }
        }
        v3 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      while ( 1 )
      {
        NewSection = MiCallCreateSectionFilters(a1);
        if ( NewSection < 0 )
          goto LABEL_27;
        if ( (*(_DWORD *)a1 & 0x10000) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 && (*(_DWORD *)a1 & 0x20000) == 0 )
        {
          v30 = (_QWORD *)v9[5];
          if ( *v30 )
            MiForceSectionClosed((__int64)v30, 1, 1);
        }
        if ( (*(_DWORD *)a1 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v13 = MiReferenceControlArea(a1, (__int64)v31, &v32);
        NewSection = v13;
        if ( v13 >= 0 )
          break;
        if ( v13 == -1073740277 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_29;
        }
        if ( v13 == -1073740682 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_79;
        }
      }
      v14 = v32;
      *(_QWORD *)(a1 + 64) = v32;
      if ( (*(_DWORD *)(v14 + 56) & 2) != 0 )
      {
        NewSection = MiCreateNewSection((int *)a1, (__int64 *)&v33);
        if ( NewSection < 0 )
        {
          if ( v33 )
          {
            v14 = *v33;
            v32 = v14;
            *(_QWORD *)(a1 + 64) = v14;
          }
          v15 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v9, v14, *(_DWORD *)(a1 + 16));
          --v2;
          if ( (_QWORD *)v14 == v31 )
          {
            ObfDereferenceObject(v9);
            v9 = (__int64 *)ObFastReplaceObject((volatile __int64 *)(v14 + 64), 0LL);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v14) + 1416));
            MiDereferenceControlAreaBySection(v32, 1u);
          }
          MiReleaseControlAreaWaiters(v15);
        }
        else
        {
          v20 = *v33;
          *(_QWORD *)(a1 + 64) = *v33;
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v20) + 1416));
          v2 -= 2;
        }
LABEL_27:
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_28;
      }
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      NewSection = MiShareExistingControlArea(a1);
      if ( NewSection >= 0 )
      {
        --v2;
        goto LABEL_29;
      }
      MiDereferenceFailedControlArea(a1);
      goto LABEL_28;
    }
    v17 = *(_DWORD *)(a1 + 16) & 0x1000000;
    if ( v17 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        NewSection = -1073741580;
        goto LABEL_29;
      }
      if ( *(_QWORD *)(a1 + 152) )
      {
        NewSection = -1073741582;
        goto LABEL_29;
      }
    }
    if ( !*(_QWORD *)(v5 + 40) )
    {
      NewSection = -1073741792;
      goto LABEL_29;
    }
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 && (*(_DWORD *)(v18 + 24) & 0x200) != 0 )
      *(_BYTE *)(a1 + 72) = 0;
    v19 = *(__int64 **)(v5 + 40);
    if ( v17 )
      v19 += 2;
    NewSection = -1073741823;
    v32 = *v19;
    if ( !v32 || (NewSection = MiReferenceExistingControlArea(a1), NewSection < 0) )
    {
      ObReferenceObjectExWithTag((ULONG_PTR)v9, 2);
      v2 += 2;
      if ( NewSection == -1073740682 )
      {
LABEL_79:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap((__int64)v9);
        if ( (unsigned int)MiForceSectionClosed(v9[5], v3, 0) > 1 && (*(_DWORD *)a1 & 0x2000000) != 0 )
        {
          ++dword_140C67A50;
          NewSection = -1073740277;
        }
LABEL_29:
        if ( !v2 )
          return (unsigned int)NewSection;
LABEL_30:
        ObDereferenceObjectEx((ULONG_PTR)v9);
        return (unsigned int)NewSection;
      }
      goto LABEL_10;
    }
    v23 = *(_DWORD *)a1 | 4;
    v24 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v23;
    v25 = *(__int64 **)(v5 + 40);
    if ( v24 )
    {
      v26 = *v25;
      v27 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v27;
      v32 = v26;
      if ( (v23 & 1) != 0 || v27 )
        goto LABEL_55;
    }
    else
    {
      v26 = v25[2];
      v32 = v26;
    }
    *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)(*(_QWORD *)v26 + 24LL),
                              -1LL,
                              -1LL);
    v26 = v32;
LABEL_55:
    *(_QWORD *)(a1 + 64) = v26;
    goto LABEL_29;
  }
  return 3221225716LL;
}
