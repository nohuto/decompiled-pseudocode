__int64 __fastcall MiPfPrepareReadList(__int64 *a1, __int64 *a2, _QWORD *a3, unsigned int *a4, __int64 a5)
{
  __int64 *v5; // rbp
  unsigned int v6; // ebx
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // r8d
  __int64 *v10; // rcx
  __int64 v11; // r14
  __int64 *Pool; // rax
  __int64 *v13; // rdi
  _QWORD *v14; // rax
  __int64 *SubsectionNode; // r15
  __int64 Process; // rsi
  _QWORD *ControlAreaPartition; // rax
  int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r12
  __int64 *v21; // r13
  int v22; // edi
  unsigned __int64 v23; // r11
  __int64 v24; // r14
  __int64 v25; // r10
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // rsi
  unsigned __int64 PteShadow; // rbx
  __int64 *v30; // r9
  __int64 v31; // r8
  __int64 PteAddress; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  _QWORD *v35; // rbp
  unsigned int NextPageColor; // esi
  int v37; // eax
  unsigned int v38; // ebp
  _QWORD *v39; // rbx
  __int64 SlabPage; // rax
  _QWORD *v41; // rbx
  __int64 v42; // r8
  _DWORD *v43; // rsi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r11
  __int64 v46; // rdx
  bool v47; // cl
  unsigned int v48; // edi
  __int16 v50; // si
  int v51; // eax
  _DWORD *v52; // rcx
  _DWORD *v53; // rax
  PVOID *v54; // rax
  __int64 *v55; // rax
  unsigned int Mdls; // ebx
  int v57; // esi
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // r8
  int v61; // [rsp+30h] [rbp-D8h]
  __int64 *P; // [rsp+38h] [rbp-D0h]
  unsigned int SessionId; // [rsp+40h] [rbp-C8h]
  __int64 v64; // [rsp+48h] [rbp-C0h]
  unsigned int v65; // [rsp+50h] [rbp-B8h]
  unsigned int v66; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-B0h]
  __int64 *v68; // [rsp+60h] [rbp-A8h]
  __int64 v69; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v70; // [rsp+70h] [rbp-98h]
  __int64 *v71; // [rsp+78h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-88h]
  __int64 *v73; // [rsp+88h] [rbp-80h]
  _QWORD *v74; // [rsp+90h] [rbp-78h]
  __int64 *v75; // [rsp+98h] [rbp-70h]
  __int64 **v76; // [rsp+A0h] [rbp-68h]
  _OWORD v77[2]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = a1;
  *a2 = 0LL;
  v77[0] = 0LL;
  v6 = *((_DWORD *)a1 + 4);
  v71 = 0LL;
  if ( (v6 & 0x180) != 0 )
    return 3221225711LL;
  v7 = *((_DWORD *)a1 + 3) == 0;
  v8 = *a1;
  v9 = *((_DWORD *)a1 + 2);
  v67 = v9;
  v10 = (__int64 *)(*(_QWORD *)(v8 + 40) + 16LL);
  if ( v7 )
    v10 = *(__int64 **)(v8 + 40);
  v11 = *v10;
  v69 = v11;
  if ( (*(_DWORD *)(v11 + 56) & 0x400) != 0 || !*(_QWORD *)(v11 + 64) )
    return 3221225711LL;
  Pool = (__int64 *)MiAllocatePool(64, 8LL * (v9 - 1) + 144, 0x6C526D4Du);
  P = Pool;
  v13 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = v11;
  v14 = Pool + 15;
  SubsectionNode = (__int64 *)(v11 + 128);
  v14[1] = v14;
  *v14 = v14;
  v13[4] = (__int64)(v13 + 3);
  v13[3] = (__int64)(v13 + 3);
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  ControlAreaPartition = (_QWORD *)MiGetControlAreaPartition(v11);
  v18 = *(_DWORD *)(v11 + 56);
  v74 = ControlAreaPartition;
  if ( (v18 & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx(Process);
  }
  else
  {
    v19 = v5[2];
    if ( v19 > 0x3FFFFFFFFFF000LL
      || (SubsectionNode = (__int64 *)MiOffsetToProtos(v11, v19, (unsigned __int64 *)&v71)) == 0LL )
    {
      ExFreePoolWithTag(v13, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v71 = 0LL;
  v70 = 0LL;
  *((_DWORD *)v13 + 20) = v6 & 7;
  v65 = v6 & 7;
  v20 = 0LL;
  v68 = 0LL;
  v76 = (__int64 **)(v13 + 17);
  v64 = 0LL;
  v75 = 0LL;
  v73 = 0LL;
  v61 = 0;
  *((_DWORD *)v13 + 21) = (v6 & 0x40) != 0 ? 5 : 0;
  v21 = 0LL;
  v66 = 0;
  *((_DWORD *)v13 + 22) = (v6 >> 3) & 7;
  v22 = (*(_DWORD *)(v11 + 56) >> 20) & 0x7F;
  MiInitializePageColorBase(Process + 1664, v22, (__int64)v77);
  v24 = 0LL;
  if ( v67 <= (unsigned int)v23 )
  {
    v48 = v23;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v25 = 1LL;
    v26 = v5[v24 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v26 >= v23 || v20 > v26 )
      break;
    v27 = SubsectionNode[1];
    v28 = (__int64 *)(v27 + 8 * ((v26 - v20) >> 12));
    if ( (unsigned __int64)v28 >= v27 + 8 * (unsigned __int64)*((unsigned int *)SubsectionNode + 11) )
      goto LABEL_58;
    if ( (*((_BYTE *)SubsectionNode + 34) & 2) == 0 || (*(_DWORD *)(v69 + 56) & 0x8000000) == 0 )
    {
LABEL_16:
      if ( v28 == v21 )
        goto LABEL_20;
      PteShadow = *v28;
      v21 = v28;
      if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v28, *v28);
      if ( (PteShadow & 1) != 0 )
      {
LABEL_19:
        MiUpdatePfnForPrefetchByPte((unsigned __int64)v28, v65, (__int64)a4);
        goto LABEL_20;
      }
      if ( (PteShadow & 0x400) != 0 )
      {
        if ( (*(_BYTE *)(v69 + 62) & 0xC) == 4 )
        {
          if ( a4 )
          {
            MiNotifyPageHeat(a4);
            MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
            v57 = MiRefillPurgedExtents(SubsectionNode, (__int64)v28, SessionId);
            v61 = v57;
            MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
          }
          else
          {
            v57 = MiRefillPurgedExtents(SubsectionNode, (__int64)v28, SessionId);
            v61 = v57;
          }
          if ( v57 >= 0 )
            goto LABEL_20;
          if ( !v64 )
          {
            v48 = -1073741670;
LABEL_61:
            MiReleaseReadListResources((__int64)P);
            ExFreePoolWithTag(P, 0);
            return v48;
          }
        }
        else
        {
LABEL_26:
          v7 = v75 == 0LL;
          v30 = (__int64 *)v76;
          *v76 = v28;
          if ( v7 )
            v75 = v30;
          v31 = (__int64)v28;
          if ( v73 != SubsectionNode
            || (MiGetPteAddress((unsigned __int64)v71),
                PteAddress = MiGetPteAddress((unsigned __int64)v28),
                v33 != PteAddress) )
          {
            v31 |= 2uLL;
            v73 = SubsectionNode;
            *v30 = v31;
          }
          v71 = v28;
          if ( v28 == v68 )
            *v30 = v31 | 1;
          v34 = (__int64)P;
          v35 = v74;
          v76 = (__int64 **)(v30 + 1);
          if ( !(unsigned int)MiPrefetchNormally(v74, v25, *((_DWORD *)P + 22) + 1) )
            goto LABEL_59;
          if ( a3 )
          {
            if ( !*a3 )
              goto LABEL_59;
            --*a3;
          }
          if ( !MiObtainFaultCharges(v35, 1uLL, 1) )
          {
            if ( !v64 )
            {
              v61 = -1073741670;
              goto LABEL_60;
            }
            goto LABEL_77;
          }
          NextPageColor = MiGetNextPageColor((__int64)v77);
          v37 = MiUseSlabAllocator((__int64)v35, SubsectionNode, PteShadow, &v66);
          v38 = v66;
          if ( v37 && v66 <= 3 )
          {
            v58 = 10LL;
            v39 = v74;
            if ( v22 )
              v58 = 8LL;
            SlabPage = MiGetSlabPage((__int64)v74, v66, NextPageColor, v58, (__int64 *)0xFFFFFFFFFFFFFFFFLL);
          }
          else
          {
            v39 = v74;
            SlabPage = MiGetPage((__int64)v74, NextPageColor, 0x200u);
          }
          if ( SlabPage != -1 )
          {
            v41 = (_QWORD *)(48 * SlabPage - 0x220000000000LL);
            if ( (unsigned int)MiCheckSlabPfnBitmap((__int64)v41, 1LL, 0) )
            {
              if ( v38 > 3 )
                v38 -= 4;
              MiSetPfnLink(v41, P[v38 + 6]);
              *(_QWORD *)(v60 + 8 * v59 + 48) = v41;
            }
            else
            {
              MiSetPfnLink(v41, P[5]);
              *(_QWORD *)(v42 + 40) = v41;
            }
            ++v64;
            v5 = a1;
            goto LABEL_20;
          }
          MiReturnFaultCharges((__int64)v39, 1LL, (struct _KPRCB *)1);
          if ( !v64 )
          {
            v48 = -1073741801;
            goto LABEL_61;
          }
        }
        v34 = (__int64)P;
        goto LABEL_77;
      }
      if ( (PteShadow & 0x800) != 0 )
        goto LABEL_19;
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow) )
        goto LABEL_26;
    }
LABEL_20:
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= v67 )
      goto LABEL_58;
    v23 = v70;
  }
  v43 = (_DWORD *)v69;
  while ( 1 )
  {
    if ( (v43[14] & 0x20) != 0
      && !*((_DWORD *)SubsectionNode + 9)
      && SubsectionNode[1] != *(_QWORD *)(*(_QWORD *)v43 + 64LL) )
    {
      SubsectionNode = (__int64 *)SubsectionNode[2];
      goto LABEL_57;
    }
    v20 = MiStartingOffsetNeedLock(SubsectionNode, SessionId);
    v44 = MiEndingOffsetWithLock(SubsectionNode);
    v70 = v44;
    v45 = v44;
    if ( v26 < v20 )
      goto LABEL_20;
    if ( v26 < v44 )
      break;
    if ( v26 < v20 )
      goto LABEL_20;
    if ( (v43[14] & 0x20) != 0 )
    {
      SubsectionNode = (__int64 *)SubsectionNode[2];
    }
    else
    {
      if ( v26 > 0x3FFFFFFFFFF000LL )
        goto LABEL_58;
      SubsectionNode = MiLocateSubsectionNode((__int64)v43, v26, 0);
    }
LABEL_57:
    if ( !SubsectionNode )
      goto LABEL_58;
  }
  if ( (v43[14] & 0x20) != 0 )
    goto LABEL_49;
  v50 = 4;
  if ( a4 )
    v50 = 2052;
  v51 = MiAddViewsForSection((ULONG_PTR)SubsectionNode, *((unsigned int *)SubsectionNode + 11), v50);
  v61 = v51;
  if ( v51 < 0 )
  {
    if ( (v50 & 0x800) == 0
      || v51 != -1073741078
      || (MiNotifyPageHeat(a4),
          MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread),
          v61 = MiAddViewsForSection((ULONG_PTR)SubsectionNode, *((unsigned int *)SubsectionNode + 11), v50 & 0xF7FF),
          MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread),
          v61 < 0) )
    {
LABEL_58:
      v34 = (__int64)P;
      goto LABEL_59;
    }
  }
  v34 = (__int64)P;
  v52 = (_DWORD *)P[4];
  if ( (__int64 *)P[3] != P + 3 && v52[4] != 5 )
  {
LABEL_73:
    v45 = v70;
    *(_QWORD *)&v52[2 * v52[4]++ + 6] = SubsectionNode;
    if ( !P[2] )
      P[2] = (__int64)SubsectionNode;
LABEL_49:
    v46 = SubsectionNode[1];
    v28 = (__int64 *)(v46 + 8 * ((v26 - v20) >> 12));
    if ( (unsigned __int64)v28 >= v46 + 8 * (unsigned __int64)*((unsigned int *)SubsectionNode + 11) )
      goto LABEL_58;
    v25 = 1LL;
    v47 = (*(_DWORD *)(v69 + 56) & 0x8000000) != 0 && (*((_WORD *)SubsectionNode + 17) & 2) != 0;
    if ( (((_WORD)v45 - (_WORD)v20) & 0xFFF) != 0 )
      v68 = (__int64 *)(v46 + 8 * (((v45 - v20 + 4095) >> 12) - 1));
    else
      v68 = 0LL;
    if ( v47 )
      goto LABEL_20;
    goto LABEL_16;
  }
  v53 = MiAllocatePool(256, 0x40uLL, 0x6C536D4Du);
  v52 = v53;
  if ( v53 )
  {
    v53[4] = 0;
    v54 = (PVOID *)P[4];
    if ( *v54 != P + 3 )
      __fastfail(3u);
    *(_QWORD *)v52 = P + 3;
    *((_QWORD *)v52 + 1) = v54;
    *v54 = v52;
    P[4] = (__int64)v52;
    goto LABEL_73;
  }
  MiRemoveViewsFromSectionWithPfn(SubsectionNode);
LABEL_59:
  if ( !v64 )
  {
LABEL_60:
    v48 = v61;
    goto LABEL_61;
  }
LABEL_77:
  v55 = v75;
  *(_DWORD *)(v34 + 92) = ((__int64)v76 - v34 - 136) >> 3;
  *(_QWORD *)(v34 + 96) = v55;
  Mdls = MiPfAllocateMdls(v34, SessionId, 0LL, a5);
  if ( *(_QWORD *)(v34 + 120) == v34 + 120 )
  {
    MiReleaseReadListResources(v34);
    ExFreePoolWithTag((PVOID)v34, 0);
    v34 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *a2 = v34;
  return Mdls;
}
