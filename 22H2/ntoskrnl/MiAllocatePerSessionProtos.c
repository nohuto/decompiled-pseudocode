/*
 * XREFs of MiAllocatePerSessionProtos @ 0x14069F848
 * Callers:
 *     MiCreatePerSessionProtos @ 0x14069F724 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA828 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402096D0 (MmProbeAndLockPages.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023BA1C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14025AC04 (MiGetControlAreaPartition.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402788E0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x140278A5C (MiMakeSubsectionPte.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MmSizeOfMdl @ 0x1402EB830 (MmSizeOfMdl.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 **a5)
{
  struct _MDL *v6; // r15
  unsigned __int64 *v7; // rdi
  __int64 ControlAreaPartition; // r12
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 SubsectionPte; // rdi
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int i; // r14d
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r9d
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r12
  int v24; // ebx
  bool v26; // zf
  int v27; // edx
  bool v28; // zf
  unsigned __int64 v29; // rbx
  SIZE_T v30; // rax
  struct _MDL *v31; // rax
  int v32; // ebx
  __int64 v33; // r9
  int v34; // eax
  void *v35; // rcx
  unsigned int v36; // [rsp+50h] [rbp-88h]
  ULONG_PTR *v37; // [rsp+58h] [rbp-80h]
  unsigned __int64 *v38; // [rsp+60h] [rbp-78h]
  unsigned __int64 v39; // [rsp+68h] [rbp-70h]
  _QWORD *v40; // [rsp+70h] [rbp-68h]
  unsigned __int64 *v41; // [rsp+78h] [rbp-60h]
  _QWORD v42[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v43[9]; // [rsp+90h] [rbp-48h] BYREF

  *a5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v40 = *(_QWORD **)a1;
  ControlAreaPartition = MiGetControlAreaPartition(*(_QWORD *)a1);
  v37 = (ULONG_PTR *)ControlAreaPartition;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  Pool = (unsigned __int64 *)MiAllocatePool(64, 0x58uLL, 0x73536D4Du);
  v10 = Pool;
  v41 = Pool;
  if ( !Pool )
  {
    v24 = -1073741670;
    goto LABEL_17;
  }
  *((_DWORD *)Pool + 20) = 1;
  v11 = (__int64 *)MiAllocatePool(274, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v12 = v11;
  if ( !v11 )
  {
    v24 = -1073741670;
    goto LABEL_16;
  }
  v10[9] = (unsigned __int64)v11;
  memset(v11, 0, 8LL * *(unsigned int *)(a1 + 44));
  SubsectionPte = MiMakeSubsectionPte(a1);
  v14 = v10 + 3;
  v38 = v10 + 3;
  v10[6] = v10[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v15 = *(_QWORD *)(a1 + 8);
  v39 = v15;
  v16 = 0;
  v36 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_13;
  for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
  {
    v18 = MI_READ_PTE_LOCK_FREE(v15);
    if ( !v18 )
      break;
    if ( a2 )
      goto LABEL_11;
    MiPteInShadowRange((unsigned __int64)v12);
    if ( IS_PTE_NOT_DEMAND_ZERO(v18) )
    {
      v20 = SubsectionPte;
      v21 = 0;
      if ( !(_DWORD)v19 )
        goto LABEL_10;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v26 = (SubsectionPte & 1) == 0;
LABEL_31:
          if ( !v26 )
            v20 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v26 = (SubsectionPte & 1) == 0;
        goto LABEL_31;
      }
LABEL_10:
      *v12 = v20;
      if ( v21 )
        goto LABEL_43;
      goto LABEL_11;
    }
    v27 = 0;
    if ( (_DWORD)v19 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_41;
        v28 = (v18 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_41;
        v28 = (v18 & 1) == 0;
      }
      if ( !v28 )
        v18 |= 0x8000000000000000uLL;
    }
LABEL_41:
    *v12 = v18;
    if ( v27 )
    {
      v20 = v18;
LABEL_43:
      MiWritePteShadow((__int64)v12, v20, v19);
    }
LABEL_11:
    ++v12;
    v15 = v39 + 8;
    v39 += 8LL;
  }
  v36 = i;
  v10 = v41;
  v6 = 0LL;
  v14 = v38;
  v16 = v36;
LABEL_13:
  v22 = v16;
  v10[7] = v16;
  MiUpdateSystemProtoPtesTree(v14, 1);
  v23 = v10[9];
  if ( a2 )
  {
    v29 = v22 << 12;
    v30 = MmSizeOfMdl((PVOID)a2, v22 << 12);
    v31 = (struct _MDL *)MiAllocatePool(64, v30, 0x206C644Du);
    v6 = v31;
    if ( !v31 )
      goto LABEL_50;
    v31->Next = 0LL;
    v31->Size = 8 * (((v29 + (a2 & 0xFFF) + 4095) >> 12) + 6);
    v31->MdlFlags = 0;
    v31->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
    v31->ByteOffset = a2 & 0xFFF;
    v31->ByteCount = v29;
    MmProbeAndLockPages(v31, 0, IoReadAccess);
    v32 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
    if ( (unsigned int)MiChargeResident(v37, v22, 0LL, v33) )
    {
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v32 & 2) != 0 )
      {
        v43[1] = *(_QWORD *)(v40[12] + 56LL);
        v43[0] = (unsigned __int64)a3 << 12;
        v42[1] = 0LL;
        v42[0] = a4 + v43[0] + *(_QWORD *)(*v40 + 32LL);
        v34 = MiFillPerSessionProtos((_DWORD)v40, v23, (int)v6 + 48, v36, v32, a3, a4, (__int64)v43, (__int64)v42);
      }
      else
      {
        v34 = MiFillPerSessionProtos((_DWORD)v40, v23, (int)v6 + 48, v36, v32, a3, a4, 0LL, 0LL);
      }
      v24 = v34;
      if ( v34 >= 0 )
        goto LABEL_14;
    }
    else
    {
LABEL_50:
      v24 = -1073741670;
    }
  }
  else
  {
LABEL_14:
    *a5 = v10;
    v10 = 0LL;
    v24 = 0;
  }
  v7 = v38;
LABEL_16:
  ControlAreaPartition = (__int64)v37;
LABEL_17:
  if ( v6 )
  {
    MmUnlockPages(v6);
    ExFreePoolWithTag(v6, 0);
  }
  if ( v10 )
  {
    if ( v7 )
      MiUpdateSystemProtoPtesTree(v7, 0);
    v35 = (void *)v10[9];
    if ( v35 )
      ExFreePoolWithTag(v35, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v24 < 0 )
    MiReturnCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v24;
}
