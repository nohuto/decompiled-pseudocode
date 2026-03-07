__int64 __fastcall MiAllocatePerSessionProtos(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 **a5)
{
  unsigned int *v5; // rbx
  struct _MDL *v6; // r15
  unsigned __int64 *v7; // r13
  __int64 ControlAreaPartition; // rdi
  unsigned __int64 *Pool; // rax
  __int64 v10; // r8
  unsigned __int64 *v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // r12
  __int64 SubsectionPte; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int *v18; // r15
  unsigned int i; // r13d
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // r9d
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r12
  int v26; // ebx
  bool v28; // zf
  int v29; // edx
  bool v30; // zf
  unsigned __int64 v31; // rbx
  SIZE_T v32; // rax
  struct _MDL *v33; // rax
  int v34; // ebx
  unsigned __int64 v35; // rdx
  void *v36; // rcx
  _QWORD *v37; // [rsp+38h] [rbp-A0h]
  _QWORD *v38; // [rsp+40h] [rbp-98h]
  unsigned int v39; // [rsp+50h] [rbp-88h]
  void *v40; // [rsp+58h] [rbp-80h]
  unsigned __int64 v41; // [rsp+60h] [rbp-78h]
  _QWORD *v42; // [rsp+68h] [rbp-70h]
  _QWORD v43[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v44[2]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int *v45; // [rsp+90h] [rbp-48h]

  v5 = (unsigned int *)(a1 + 44);
  *a5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v42 = *(_QWORD **)a1;
  ControlAreaPartition = MiGetControlAreaPartition(*(_QWORD *)a1);
  v40 = (void *)ControlAreaPartition;
  v45 = v5;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, *v5, 0LL) )
    return 3221225773LL;
  Pool = (unsigned __int64 *)MiAllocatePool(64, 0x58uLL, 0x73536D4Du);
  v11 = Pool;
  v43[0] = Pool;
  if ( !Pool )
    goto LABEL_23;
  *((_DWORD *)Pool + 20) = 1;
  v12 = MiAllocatePool(274, 8LL * *v5, 0x74536D4Du);
  v13 = v12;
  if ( !v12 )
    goto LABEL_23;
  v11[9] = (unsigned __int64)v12;
  memset(v12, 0, 8LL * *v5);
  SubsectionPte = MiMakeSubsectionPte(a1);
  v7 = v11 + 3;
  v44[0] = v11 + 3;
  v11[6] = v11[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v16 = *(_QWORD *)(v15 + 8);
  v41 = v16;
  v17 = 0;
  v39 = 0;
  if ( !*v5 )
    goto LABEL_13;
  v18 = v5;
  for ( i = 0; i < *v18; ++i )
  {
    v20 = MI_READ_PTE_LOCK_FREE(v16);
    if ( !v20 )
      break;
    if ( a2 )
      goto LABEL_11;
    MiPteInShadowRange((unsigned __int64)v13);
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v20) )
    {
      v22 = SubsectionPte;
      v23 = 0;
      if ( !(_DWORD)v21 )
        goto LABEL_10;
      if ( MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v28 = (SubsectionPte & 1) == 0;
LABEL_29:
          if ( !v28 )
            v22 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v28 = (SubsectionPte & 1) == 0;
        goto LABEL_29;
      }
LABEL_10:
      *v13 = v22;
      if ( v23 )
        goto LABEL_41;
      goto LABEL_11;
    }
    v29 = 0;
    if ( (_DWORD)v21 )
    {
      if ( MiPteHasShadow() )
      {
        v29 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_39;
        v30 = (v20 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_39;
        v30 = (v20 & 1) == 0;
      }
      if ( !v30 )
        v20 |= 0x8000000000000000uLL;
    }
LABEL_39:
    *v13 = v20;
    if ( v29 )
    {
      v22 = v20;
LABEL_41:
      MiWritePteShadow((__int64)v13, v22, v21);
    }
LABEL_11:
    ++v13;
    v16 = v41 + 8;
    v41 += 8LL;
  }
  v39 = i;
  v11 = (unsigned __int64 *)v43[0];
  v6 = 0LL;
  v7 = (unsigned __int64 *)v44[0];
  v17 = v39;
LABEL_13:
  v24 = v17;
  v11[7] = v17;
  MiUpdateSystemProtoPtesTree(v7, 1);
  v25 = v11[9];
  if ( !a2 )
  {
    ControlAreaPartition = (__int64)v40;
    goto LABEL_15;
  }
  v31 = v24 << 12;
  v32 = MmSizeOfMdl((PVOID)a2, v24 << 12);
  v33 = (struct _MDL *)MiAllocatePool(64, v32, 0x206C644Du);
  v6 = v33;
  if ( !v33 )
  {
    v26 = -1073741670;
    ControlAreaPartition = (__int64)v40;
    goto LABEL_16;
  }
  v33->Next = 0LL;
  v33->Size = 8 * (((v31 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  v33->MdlFlags = 0;
  v33->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v33->ByteOffset = a2 & 0xFFF;
  v33->ByteCount = v31;
  MmProbeAndLockPages(v33, 0, IoReadAccess);
  v34 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  v35 = v24;
  ControlAreaPartition = (__int64)v40;
  if ( !(unsigned int)MiChargeResident(v40, v35, 0LL) )
  {
LABEL_23:
    v26 = -1073741670;
    goto LABEL_16;
  }
  if ( (MiFlags & 0xC000) == 49152 && (v34 & 2) != 0 )
  {
    v43[1] = *(_QWORD *)(v42[12] + 56LL);
    v43[0] = (unsigned __int64)a3 << 12;
    v44[1] = 0LL;
    v44[0] = a4 + v43[0] + *(_QWORD *)(*v42 + 32LL);
    v38 = v44;
    v37 = v43;
  }
  else
  {
    v38 = 0LL;
    v37 = 0LL;
  }
  v26 = MiFillPerSessionProtos((_DWORD)v42, v25, (int)v6 + 48, v39, v34, a3, a4, (__int64)v37, (__int64)v38);
  if ( v26 >= 0 )
  {
LABEL_15:
    *a5 = v11;
    v11 = 0LL;
    v26 = 0;
  }
LABEL_16:
  if ( v6 )
  {
    MmUnlockPages(v6);
    ExFreePoolWithTag(v6, 0);
  }
  if ( v11 )
  {
    if ( v7 )
      MiUpdateSystemProtoPtesTree(v7, 0);
    v36 = (void *)v11[9];
    if ( v36 )
      ExFreePoolWithTag(v36, 0);
    ExFreePoolWithTag(v11, 0);
  }
  if ( v26 < 0 )
    MiReturnCommit(ControlAreaPartition, *v45, v10);
  return (unsigned int)v26;
}
