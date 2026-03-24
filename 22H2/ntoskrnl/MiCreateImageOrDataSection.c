/*
 * XREFs of MiCreateImageOrDataSection @ 0x1406545A0
 * Callers:
 *     MiCreateSection @ 0x140652DA0 (MiCreateSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectEx @ 0x14024BF80 (ObDereferenceObjectEx.c)
 *     MiGetControlAreaPartition @ 0x14025AC04 (MiGetControlAreaPartition.c)
 *     ObFastReplaceObject @ 0x140277500 (ObFastReplaceObject.c)
 *     MiDereferenceControlAreaBySection @ 0x1402950EC (MiDereferenceControlAreaBySection.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetFileMemoryPartitionInformation @ 0x1402D6F4C (IoGetFileMemoryPartitionInformation.c)
 *     MiReferenceControlArea @ 0x1402D6FD4 (MiReferenceControlArea.c)
 *     IoSetTopLevelIrp @ 0x1402D73D0 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x1402D73F0 (IoGetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x1402D7A34 (MiReleaseControlAreaWaiters.c)
 *     ObReferenceObjectExWithTag @ 0x1402F6460 (ObReferenceObjectExWithTag.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 *     CcWaitForUninitializeCacheMap @ 0x14030FEE0 (CcWaitForUninitializeCacheMap.c)
 *     MiForceSectionClosed @ 0x140310910 (MiForceSectionClosed.c)
 *     MiZeroSectionObjectPointer @ 0x14032C98C (MiZeroSectionObjectPointer.c)
 *     MiReferenceExistingControlArea @ 0x14033D3F4 (MiReferenceExistingControlArea.c)
 *     IoAllowExecution @ 0x14034C59C (IoAllowExecution.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     MiCallCreateSectionFilters @ 0x140654A14 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x14065547C (MiShareExistingControlArea.c)
 *     MiDereferenceFailedControlArea @ 0x1406A5E24 (MiDereferenceFailedControlArea.c)
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r14d
  char v6; // r13
  int v7; // eax
  __int64 v8; // rbp
  KPROCESSOR_MODE v9; // r9
  __int64 v10; // rax
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rsi
  int v13; // edi
  __int64 *FileMemoryPartitionInformation; // rax
  struct _KTHREAD *CurrentThread; // rbp
  int v16; // eax
  _QWORD *v17; // r15
  int v19; // ecx
  _QWORD **v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // dl
  int v29; // ecx
  _QWORD *v30; // r12
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  signed __int64 v34; // rax
  _QWORD v35[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v36; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v37; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v37 = 0LL;
  v36 = 0LL;
  memset(v35, 0, sizeof(v35));
  v5 = 0;
  v6 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v7 = *(_DWORD *)(a1 + 16);
  if ( (v7 & 0x80000) != 0 )
    return 3221225716LL;
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    goto LABEL_7;
  }
  if ( v7 >= 0 )
  {
    v9 = *(_BYTE *)(a1 + 72);
    v10 = *(_DWORD *)(a1 + 32) & 7;
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(
            *(HANDLE *)(a1 + 40),
            *((_DWORD *)MmMakeFileAccess + v10),
            (POBJECT_TYPE)IoFileObjectType,
            v9,
            &Object,
            0LL);
    v12 = (ULONG_PTR)Object;
    v13 = v11;
    if ( v11 < 0 )
      goto LABEL_21;
    v5 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      v13 = -1073741792;
      goto LABEL_23;
    }
LABEL_7:
    FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation(v12, v2, v3, v4);
    if ( FileMemoryPartitionInformation )
    {
      if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
      {
        v13 = -1073740640;
        goto LABEL_22;
      }
      *(_QWORD *)(a1 + 176) = v31;
      if ( (*(_DWORD *)(v32 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x800000u;
    }
    if ( !v8 )
    {
      ObfReferenceObject((PVOID)v12);
      ++v5;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v12;
      LODWORD(v35[7]) = 2;
      if ( v12 )
        v35[8] = v12;
      else
        v35[8] = 0LL;
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution(v12) )
        {
          v13 = -1073741790;
          goto LABEL_22;
        }
        CcWaitForUninitializeCacheMap(v12);
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
        {
          v28 = *(_BYTE *)(a1 + 24);
          if ( (v28 & 0x10) != 0 )
          {
            v29 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v29;
            if ( (v28 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v29 | 0x1000;
            *(_BYTE *)(a1 + 24) = v28 & 0xF;
          }
        }
        v6 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      while ( 1 )
      {
        v13 = MiCallCreateSectionFilters(a1);
        if ( v13 < 0 )
          goto LABEL_41;
        if ( (*(_DWORD *)a1 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v16 = MiReferenceControlArea(a1, (__int64)v35, (__int64 *)&v36);
        v13 = v16;
        if ( v16 >= 0 )
          break;
        if ( v16 == -1073740277 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_22;
        }
        if ( v16 == -1073740682 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_77;
        }
      }
      v17 = v36;
      *(_QWORD *)(a1 + 64) = v36;
      if ( (v17[7] & 2) != 0 )
      {
        v13 = MiCreateNewSection(a1, &v37);
        if ( v13 >= 0 )
        {
          v27 = *v37;
          *(_QWORD *)(a1 + 64) = *v37;
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v27) + 1352));
          v5 -= 2;
LABEL_41:
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_21;
        }
        if ( v37 )
        {
          v17 = (_QWORD *)*v37;
          v36 = v17;
          *(_QWORD *)(a1 + 64) = v17;
        }
        v30 = (_QWORD *)MiZeroSectionObjectPointer(v12, (__int64)v17, *(_DWORD *)(a1 + 16));
        --v5;
        if ( v17 == v35 )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v12);
          v12 = ObFastReplaceObject(v17 + 8, 0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v17) + 1352));
          MiDereferenceControlAreaBySection((__int64)v36, 1u);
        }
        MiReleaseControlAreaWaiters(v30);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      else
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v13 = MiShareExistingControlArea(a1);
        if ( v13 < 0 )
          MiDereferenceFailedControlArea(a1);
        else
          --v5;
      }
      goto LABEL_21;
    }
    v19 = *(_DWORD *)(a1 + 16) & 0x1000000;
    if ( v19 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        v13 = -1073741580;
        goto LABEL_22;
      }
      if ( *(_QWORD *)(a1 + 152) )
      {
        v13 = -1073741582;
        goto LABEL_22;
      }
    }
    v20 = *(_QWORD ***)(v8 + 40);
    if ( !v20 )
    {
      v13 = -1073741792;
      goto LABEL_22;
    }
    v21 = *(_QWORD *)(a1 + 8);
    if ( v21 && (*(_DWORD *)(v21 + 24) & 0x200) != 0 )
    {
      *(_BYTE *)(a1 + 72) = 0;
      v20 = *(_QWORD ***)(v8 + 40);
    }
    if ( v19 )
      v20 += 2;
    v13 = -1073741823;
    v36 = *v20;
    if ( !v36 || (v13 = MiReferenceExistingControlArea(a1), v13 < 0) )
    {
      ObReferenceObjectExWithTag(v12, 2);
      v5 += 2;
      if ( v13 == -1073740682 )
      {
LABEL_77:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap(v12);
        if ( (unsigned int)MiForceSectionClosed(*(_QWORD **)(v12 + 40), v6) > 1 && (*(_DWORD *)a1 & 0x1000000) != 0 )
        {
          ++dword_140C4E658;
          v13 = -1073740277;
        }
LABEL_22:
        if ( !v5 )
          return (unsigned int)v13;
LABEL_23:
        ObDereferenceObjectEx(v12, v5);
        return (unsigned int)v13;
      }
      goto LABEL_10;
    }
    v22 = *(_DWORD *)a1 | 4;
    v23 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v22;
    v24 = *(_QWORD *)(v8 + 40);
    if ( v23 )
    {
      v25 = *(_QWORD **)v24;
      v26 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v26;
      v36 = v25;
      if ( (v22 & 1) != 0 || v26 )
        goto LABEL_38;
      v33 = *v25;
    }
    else
    {
      v36 = *(_QWORD **)(v24 + 16);
      v33 = *v36;
    }
    v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 24), -1LL, -1LL);
    v25 = v36;
    *(_QWORD *)(a1 + 128) = v34;
LABEL_38:
    *(_QWORD *)(a1 + 64) = v25;
LABEL_21:
    if ( v13 != -1073740682 )
      goto LABEL_22;
    goto LABEL_77;
  }
  return 3221225716LL;
}
