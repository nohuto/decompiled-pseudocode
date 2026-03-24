/*
 * XREFs of MiRemoveMappedPtes @ 0x140288B80
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140289700 (MI_WSLE_LOG_ACCESS.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MiRemoveViewsFromSection @ 0x1402955F8 (MiRemoveViewsFromSection.c)
 *     MiLocateSubsectionNode @ 0x140297160 (MiLocateSubsectionNode.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     MiAppendWsleCluster @ 0x1402B6160 (MiAppendWsleCluster.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiTryDeleteTransitionPte @ 0x140363C98 (MiTryDeleteTransitionPte.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A864 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x140540350 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055502C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r8
  __int64 v4; // r12
  _DWORD *v5; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // r14
  ULONG_PTR *v13; // rax
  __int64 v14; // rbx
  unsigned __int8 v15; // bl
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbp
  ULONG_PTR v25; // r14
  int v26; // eax
  __int64 v27; // rsi
  BOOL v28; // edi
  KIRQL v29; // bl
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  __int64 SubsectionNode; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-98h]
  __int64 v51; // [rsp+28h] [rbp-90h] BYREF
  __int64 v52; // [rsp+30h] [rbp-88h]
  __int64 v53; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v54; // [rsp+40h] [rbp-78h]
  __int64 v55; // [rsp+48h] [rbp-70h]
  _OWORD v56[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v58; // [rsp+C8h] [rbp+10h]
  __int64 v59; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = a1;
  v4 = 0LL;
  v51 = 0LL;
  v59 = 0LL;
  v5 = *(_DWORD **)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(_QWORD *)v5;
  v9 = *(_QWORD *)(a1 + 32) >> 12;
  BugCheckParameter2 = (ULONG_PTR)v5;
  v53 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v55 = v8;
  v10 = *(unsigned int *)(v8 + 56);
  v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0LL;
  memset(v56, 0, 32);
  if ( (v10 & 0x400) != 0 )
    v13 = &MiSystemPartition;
  else
    v13 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(v8 + 60) & 0x3FF));
  v54 = v13;
  if ( (v10 & 0x420) != 0 )
  {
    v14 = 0LL;
    v52 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = MiOffsetToProtos(v8, v14, &v51);
    v52 = v9 + v51;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v8, v14 + (v9 << 12) - 1, 0LL);
    v25 = BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    v24 = 0LL;
    goto LABEL_24;
  }
  v58 = MiLockWorkingSetShared(a2, v10, v3, v5);
  v15 = v58;
  if ( !v9 )
    goto LABEL_21;
  v16 = v53;
  v17 = 0LL;
  do
  {
    if ( !v12 || (v11 & 0xFFF) == 0 )
    {
      v17 += MiTerminateWsleCluster(v56);
      if ( v12 )
        MiUnlockPageTableInternal(a2, v12);
      v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v12, 0LL);
    }
    v18 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v37 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
        v38 = v18 | 0x20;
        if ( (v37 & 0x20) == 0 )
          v38 = *(_QWORD *)v11;
        v18 = v38;
        if ( (v37 & 0x42) != 0 )
          v18 = v38 | 0x42;
      }
    }
    if ( !v18 )
      goto LABEL_18;
    if ( (v18 & 1) != 0 )
    {
      if ( dword_140C4E828 )
        MI_WSLE_LOG_ACCESS(a2, v11);
      MiAppendWsleCluster(v56, a2, v11);
      goto LABEL_18;
    }
    if ( (v18 & 0x400) == 0 )
    {
      if ( (v18 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v16, v18, 1LL);
        v19 = ZeroPte;
        if ( !(unsigned int)MiPteInShadowRange(v11, v45) )
          goto LABEL_16;
        if ( (unsigned int)MiPteHasShadow(v47, v46, v48, v49) )
        {
LABEL_75:
          if ( HIBYTE(word_140C4E008) || (v19 & 1) == 0 )
            goto LABEL_65;
LABEL_64:
          v19 |= 0x8000000000000000uLL;
LABEL_65:
          *(_QWORD *)v11 = v19;
          MiWritePteShadow(v11, v19);
          goto LABEL_17;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_16;
        }
LABEL_82:
        v19 |= 0x8000000000000000uLL;
        goto LABEL_16;
      }
      v39 = MiTryDeleteTransitionPte(v11);
      if ( v39 == 1 )
        continue;
      if ( v39 == 3 )
        ++v17;
      v19 = ZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(v11, v40) )
        goto LABEL_16;
      if ( (unsigned int)MiPteHasShadow(v42, v41, v43, v44) )
        goto LABEL_75;
LABEL_66:
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (v19 & 1) == 0 )
      {
        goto LABEL_16;
      }
      goto LABEL_82;
    }
    v19 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v11, v18) )
    {
      if ( (unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
      {
        if ( HIBYTE(word_140C4E008) || (ZeroPte & 1) == 0 )
          goto LABEL_65;
        goto LABEL_64;
      }
      goto LABEL_66;
    }
LABEL_16:
    *(_QWORD *)v11 = v19;
LABEL_17:
    v15 = v58;
LABEL_18:
    v11 += 8LL;
    --v9;
    if ( (v11 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(a2)
       || (unsigned int)MiPageTableLockIsContended(a2, v12)
       || KeShouldYieldProcessor()) )
    {
      v17 += MiTerminateWsleCluster(v56);
      MiUnlockPageTableInternal(a2, v12);
      MiUnlockWorkingSetShared(a2, v15);
      v12 = 0LL;
      MiLockWorkingSetShared(a2, v32, v33, v34);
    }
  }
  while ( v9 );
  v8 = v55;
  v59 = v17;
LABEL_21:
  v24 = MiTerminateWsleCluster(v56) + v59;
  if ( v12 )
    MiUnlockPageTableInternal(a2, v12);
  MiUnlockWorkingSetShared(a2, v15);
  v25 = BugCheckParameter2;
LABEL_24:
  v26 = *(_DWORD *)(v8 + 56);
  if ( (v26 & 0x20) != 0 || (v26 & 0x400) != 0 )
  {
    v27 = a1;
    v25 = 0LL;
    if ( (v26 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v8);
  }
  else
  {
    v27 = a1;
  }
  v28 = *(_QWORD *)(v8 + 64) != 0LL;
  v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  if ( v25 )
    v4 = MiRemoveViewsFromSection(v25);
  --*(_QWORD *)(v8 + 48);
  --*(_QWORD *)(v8 + 40);
  result = MiCheckControlArea(v8, v29);
  v31 = *(_QWORD *)(v27 + 40);
  if ( v31 )
  {
    if ( v24 )
      v31 -= v24;
    if ( v31 )
      result = MiReturnCommit(v53, v31);
  }
  if ( v4 )
    return MiReturnCrossPartitionSectionCharges(v54, v28, v4);
  return result;
}
