/*
 * XREFs of MiRemoveMappedPtes @ 0x1403474D0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiTryDeleteTransitionPte @ 0x14029CB54 (MiTryDeleteTransitionPte.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiAppendWsleCluster @ 0x14031D6E0 (MiAppendWsleCluster.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiOffsetToProtos @ 0x140331B90 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x140332910 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSection @ 0x140334A28 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140349598 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // r12
  int v5; // eax
  __int64 *v6; // r8
  unsigned __int64 v7; // rdi
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  void *v14; // rax
  unsigned __int64 v15; // rbx
  __int64 Flink; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // bl
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rsi
  ULONG_PTR v24; // r14
  int v25; // eax
  __int64 v26; // rbp
  BOOL v27; // edi
  KIRQL v28; // bl
  __int64 v29; // r8
  __int64 v30; // rdx
  _QWORD *SubsectionNode; // rax
  __int64 v32; // rax
  int v33; // eax
  unsigned int *v34; // [rsp+20h] [rbp-98h]
  unsigned __int64 v35; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-88h]
  __int64 v37; // [rsp+38h] [rbp-80h]
  void *v38; // [rsp+40h] [rbp-78h]
  __int64 v39; // [rsp+48h] [rbp-70h]
  __int128 v40; // [rsp+50h] [rbp-68h] BYREF
  __int128 v41; // [rsp+60h] [rbp-58h]
  unsigned __int8 v43; // [rsp+C8h] [rbp+10h]
  int v44; // [rsp+D0h] [rbp+18h]
  __int64 v45; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 4;
  v35 = 0LL;
  v45 = 0LL;
  v6 = *(__int64 **)(a1 + 48);
  if ( (v2 & 4) != 0 )
    v5 = 24;
  v7 = *(_QWORD *)(a1 + 88);
  v44 = v5;
  v9 = *v6;
  v10 = *(_QWORD *)(a1 + 32) >> 12;
  v37 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v34 = (unsigned int *)v6;
  v39 = v9;
  v11 = *(_DWORD *)(v9 + 56);
  v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0LL;
  v41 = 0LL;
  DWORD2(v41) = 4;
  v40 = 0LL;
  if ( (v11 & 0x400) != 0 )
    v14 = &MiSystemPartition;
  else
    v14 = *(void **)(qword_140C67048 + 8LL * (*(_WORD *)(v9 + 60) & 0x3FF));
  v38 = v14;
  if ( (v11 & 0x420) != 0 )
  {
    v15 = 0LL;
    v36 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 24) << 12;
    v34 = MiOffsetToProtos(v9, v15, &v35);
    v36 = v10 + v35;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v9, v15 + (v10 << 12) - 1, 0);
    v24 = (ULONG_PTR)v34;
    MiDecrementLargeSubsections(v34, SubsectionNode);
    v23 = 0LL;
    goto LABEL_26;
  }
  v43 = MiLockWorkingSetShared(a2);
  v18 = v43;
  if ( !v10 )
    goto LABEL_23;
  v19 = v37;
  v20 = 0LL;
  do
  {
    if ( !v13 || (v12 & 0xFFF) == 0 )
    {
      v20 += MiTerminateWsleCluster((__int64 *)&v40);
      if ( v13 )
        MiUnlockPageTableInternal(a2, v13);
      v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v13, 0);
    }
    v21 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v32 = *(_QWORD *)(Flink + 8 * ((v12 >> 3) & 0x1FF));
        Flink = v21 | 0x20;
        if ( (v32 & 0x20) == 0 )
          Flink = *(_QWORD *)v12;
        v21 = Flink;
        if ( (v32 & 0x42) != 0 )
          v21 = Flink | 0x42;
      }
    }
    if ( !v21 )
      goto LABEL_20;
    if ( (v21 & 1) != 0 )
    {
      if ( dword_140C67C68 )
        MI_WSLE_LOG_ACCESS(a2, v12, Flink, v17);
      MiAppendWsleCluster((__int64)&v40, a2, v12);
      goto LABEL_20;
    }
    if ( (v21 & 0x400) == 0 )
    {
      if ( (v21 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v19, v21, 1LL);
        v22 = ZeroPte;
        if ( !MiPteInShadowRange(v12) )
          goto LABEL_18;
        if ( MiPteHasShadow() )
        {
LABEL_77:
          if ( HIBYTE(word_140C6697C) || (v22 & 1) == 0 )
            goto LABEL_67;
LABEL_66:
          v22 |= 0x8000000000000000uLL;
LABEL_67:
          *(_QWORD *)v12 = v22;
          MiWritePteShadow(v12, v22, Flink);
          goto LABEL_19;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_18;
        }
LABEL_84:
        v22 |= 0x8000000000000000uLL;
        goto LABEL_18;
      }
      v33 = MiTryDeleteTransitionPte(v12);
      if ( v33 == 1 )
        continue;
      if ( v33 == 3 )
        ++v20;
      v22 = ZeroPte;
      if ( !MiPteInShadowRange(v12) )
        goto LABEL_18;
      if ( MiPteHasShadow() )
        goto LABEL_77;
LABEL_68:
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (v22 & 1) == 0 )
      {
        goto LABEL_18;
      }
      goto LABEL_84;
    }
    v22 = ZeroPte;
    if ( MiPteInShadowRange(v12) )
    {
      if ( MiPteHasShadow() )
      {
        if ( HIBYTE(word_140C6697C) || (ZeroPte & 1) == 0 )
          goto LABEL_67;
        goto LABEL_66;
      }
      goto LABEL_68;
    }
LABEL_18:
    *(_QWORD *)v12 = v22;
LABEL_19:
    v18 = v43;
LABEL_20:
    v12 += 8LL;
    --v10;
    if ( (v12 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(a2)
       || (unsigned int)MiPageTableLockIsContended(a2, v13)
       || KeShouldYieldProcessor()) )
    {
      v20 += MiTerminateWsleCluster((__int64 *)&v40);
      MiUnlockPageTableInternal(a2, v13);
      MiUnlockWorkingSetShared(a2, v18);
      v13 = 0LL;
      MiLockWorkingSetShared(a2);
    }
  }
  while ( v10 );
  v9 = v39;
  v45 = v20;
LABEL_23:
  v23 = MiTerminateWsleCluster((__int64 *)&v40) + v45;
  if ( v13 )
    MiUnlockPageTableInternal(a2, v13);
  MiUnlockWorkingSetShared(a2, v18);
  v24 = (ULONG_PTR)v34;
LABEL_26:
  v25 = *(_DWORD *)(v9 + 56);
  if ( (v25 & 0x20) != 0 || (v25 & 0x400) != 0 )
  {
    v26 = a1;
    v24 = 0LL;
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 && (v25 & 0x20) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v9);
  }
  else
  {
    v26 = a1;
  }
  v27 = *(_QWORD *)(v9 + 64) != 0LL;
  v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
  if ( v24 )
    v4 = MiRemoveViewsFromSection(v24, v36, v44);
  --*(_QWORD *)(v9 + 48);
  --*(_QWORD *)(v9 + 40);
  MiCheckControlArea(v9, v28);
  v30 = *(_QWORD *)(v26 + 40);
  if ( v30 )
  {
    if ( !v23 || (v30 -= v23) != 0 )
      MiReturnCommit(v37, v30, v29);
  }
  if ( v4 )
    MiReturnCrossPartitionSectionCharges(v38, v27, v4);
}
