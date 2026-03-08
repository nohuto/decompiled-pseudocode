/*
 * XREFs of FsRtlGetNextFileLock @ 0x14053B030
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRealSuccessor @ 0x1402C1970 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1402C272C (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1402C3018 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  _QWORD *LockInformation; // rsi
  PRTL_SPLAY_LINKS LastReturnedLock; // rdi
  char v5; // r14
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rax
  RTL_SPLAY_LINKS *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int32 v10; // r12d
  _RTL_SPLAY_LINKS *v11; // rbx
  _RTL_SPLAY_LINKS *v12; // r13
  __int64 v13; // rax
  __int64 j; // rcx
  __int128 v15; // xmm0
  RTL_SPLAY_LINKS *FirstOverlappingSharedNode; // rax
  PRTL_SPLAY_LINKS v17; // rcx
  _RTL_SPLAY_LINKS *Parent; // rbx
  bool v19; // cf
  PRTL_SPLAY_LINKS v20; // rax
  RTL_SPLAY_LINKS *v21; // rax
  __int64 i; // rcx
  unsigned __int8 CurrentIrql; // al
  KIRQL v24; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  PFILE_LOCK_INFO result; // rax
  __int128 v32; // xmm0
  PRTL_SPLAY_LINKS Links; // [rsp+38h] [rbp-48h] BYREF
  __int128 v34; // [rsp+40h] [rbp-40h]
  __int128 v35; // [rsp+50h] [rbp-30h] BYREF
  __m256i v36; // [rsp+60h] [rbp-20h] BYREF
  char v38; // [rsp+D0h] [rbp+50h] BYREF
  KIRQL v39; // [rsp+D8h] [rbp+58h]

  Links = 0LL;
  LockInformation = FileLock->LockInformation;
  v38 = 0;
  if ( !LockInformation )
    return 0LL;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  v5 = 0;
  v35 = *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  v34 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  *(_OWORD *)v36.m256i_i8 = v34;
  *(_OWORD *)&v36.m256i_u64[2] = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  v39 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( Restart )
  {
    v21 = (RTL_SPLAY_LINKS *)LockInformation[5];
    if ( v21 )
    {
      do
      {
        LastReturnedLock = v21;
        v21 = v21->LeftChild;
      }
      while ( v21 );
      v35 = *(_OWORD *)&LastReturnedLock[1].Parent;
      v34 = *(_OWORD *)&LastReturnedLock[1].RightChild;
      *(_OWORD *)v36.m256i_i8 = v34;
      v15 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
      goto LABEL_55;
    }
    v13 = LockInformation[4];
    if ( !v13 )
      goto LABEL_62;
    for ( i = *(_QWORD *)(v13 + 8); i; i = *(_QWORD *)(i + 8) )
      v13 = i;
    goto LABEL_27;
  }
  if ( (_BYTE)v34 )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        (_QWORD *)LockInformation[5],
                                                        (unsigned __int64 *)&v35,
                                                        &v36.m256i_u64[3],
                                                        &Links,
                                                        &v38);
    if ( FirstOverlappingExclusiveNode )
    {
      v8 = v36.m256i_i64[2];
      v9 = v36.m256i_i64[1];
      v10 = v36.m256i_i32[1];
      v11 = (_RTL_SPLAY_LINKS *)*((_QWORD *)&v35 + 1);
      v12 = (_RTL_SPLAY_LINKS *)v35;
      while ( LastReturnedLock != FirstOverlappingExclusiveNode
           || v12 != FirstOverlappingExclusiveNode[1].Parent
           || v11 != FirstOverlappingExclusiveNode[1].LeftChild
           || v10 != HIDWORD(FirstOverlappingExclusiveNode[1].RightChild)
           || (_RTL_SPLAY_LINKS *)v9 != FirstOverlappingExclusiveNode[2].Parent
           || (_RTL_SPLAY_LINKS *)v8 != FirstOverlappingExclusiveNode[2].LeftChild )
      {
        if ( FirstOverlappingExclusiveNode[1].LeftChild || v11 )
          goto LABEL_22;
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          goto LABEL_23;
      }
      v7 = FirstOverlappingExclusiveNode;
    }
    else
    {
      if ( v38 )
      {
        FirstOverlappingExclusiveNode = Links;
        goto LABEL_22;
      }
      v7 = Links;
      if ( !Links )
      {
LABEL_23:
        v13 = LockInformation[4];
        if ( !v13 )
        {
          v5 = 0;
          goto LABEL_62;
        }
        for ( j = *(_QWORD *)(v13 + 8); j; j = *(_QWORD *)(j + 8) )
          v13 = j;
LABEL_27:
        LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v13 - 24);
        v35 = *(_OWORD *)&LastReturnedLock->LeftChild;
        v34 = *(_OWORD *)&LastReturnedLock[1].Parent;
        *(_OWORD *)v36.m256i_i8 = v34;
        v15 = *(_OWORD *)&LastReturnedLock[1].RightChild;
LABEL_55:
        *(_OWORD *)&v36.m256i_u64[2] = v15;
        v5 = 1;
        goto LABEL_62;
      }
    }
    FirstOverlappingExclusiveNode = RtlRealSuccessor(v7);
LABEL_22:
    if ( FirstOverlappingExclusiveNode )
    {
      LastReturnedLock = FirstOverlappingExclusiveNode;
      v35 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].Parent;
      v34 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].RightChild;
      *(_OWORD *)v36.m256i_i8 = v34;
      v15 = *(_OWORD *)&FirstOverlappingExclusiveNode[2].LeftChild;
      goto LABEL_55;
    }
    goto LABEL_23;
  }
  FirstOverlappingSharedNode = (RTL_SPLAY_LINKS *)FsRtlFindFirstOverlappingSharedNode(
                                                    LockInformation[4],
                                                    (unsigned __int64 *)&v35,
                                                    &v36.m256i_u64[3],
                                                    &Links,
                                                    &v38);
  if ( FirstOverlappingSharedNode )
  {
    v17 = FirstOverlappingSharedNode;
  }
  else
  {
    FirstOverlappingSharedNode = Links;
    if ( !Links )
      goto LABEL_62;
    v17 = Links;
    if ( !v38 )
    {
      FirstOverlappingSharedNode = RtlRealSuccessor(Links);
      v17 = FirstOverlappingSharedNode;
      if ( !FirstOverlappingSharedNode )
        goto LABEL_62;
    }
  }
  if ( v17 == (PRTL_SPLAY_LINKS)24 )
    goto LABEL_62;
  Parent = v17[-1].Parent;
  if ( !Parent )
    goto LABEL_48;
  while ( 1 )
  {
    if ( LastReturnedLock == Parent )
    {
      v19 = (_RTL_SPLAY_LINKS *)v35 < Parent->LeftChild;
      if ( (_RTL_SPLAY_LINKS *)v35 != Parent->LeftChild )
        goto LABEL_44;
      if ( (_RTL_SPLAY_LINKS *)*((_QWORD *)&v35 + 1) == Parent->RightChild
        && v36.m256i_i32[1] == HIDWORD(Parent[1].Parent)
        && *(_OWORD *)&v36.m256i_u64[1] == *(_OWORD *)&Parent[1].LeftChild )
      {
        break;
      }
    }
    v19 = (_RTL_SPLAY_LINKS *)v35 < Parent->LeftChild;
LABEL_44:
    if ( v19 )
      goto LABEL_47;
    Parent = Parent->Parent;
    if ( !Parent )
      goto LABEL_48;
  }
  Parent = Parent->Parent;
LABEL_47:
  if ( Parent )
  {
LABEL_51:
    LastReturnedLock = Parent;
    v35 = *(_OWORD *)&Parent->LeftChild;
    v34 = *(_OWORD *)&Parent[1].Parent;
    *(_OWORD *)v36.m256i_i8 = v34;
    v15 = *(_OWORD *)&Parent[1].RightChild;
    goto LABEL_55;
  }
LABEL_48:
  v20 = RtlRealSuccessor(FirstOverlappingSharedNode);
  if ( v20 )
    Parent = v20[-1].Parent;
  if ( Parent )
    goto LABEL_51;
LABEL_62:
  KxReleaseSpinLock(LockInformation + 3);
  if ( !KiIrqlFlags || (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0) || CurrentIrql > 0xFu )
  {
    v24 = v39;
LABEL_71:
    v29 = v34;
    goto LABEL_72;
  }
  v24 = v39;
  if ( v39 > 0xFu || CurrentIrql < 2u )
    goto LABEL_71;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v27 = ~(unsigned __int16)(-1LL << (v39 + 1));
  v28 = (v27 & SchedulerAssist[5]) == 0;
  SchedulerAssist[5] &= v27;
  if ( v28 )
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  v29 = *(_OWORD *)v36.m256i_i8;
LABEL_72:
  __writecr8(v24);
  if ( v5 )
  {
    v30 = v35;
    result = &FileLock->LastReturnedLockInfo;
    FileLock->LastReturnedLock = LastReturnedLock;
    *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart = v30;
    v32 = *(_OWORD *)&v36.m256i_u64[2];
    *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock = v29;
    *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId = v32;
    return result;
  }
  return 0LL;
}
