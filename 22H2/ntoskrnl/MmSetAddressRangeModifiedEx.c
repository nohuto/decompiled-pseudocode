/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14028FCC0
 * Callers:
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcPurgeAndClearCacheSection @ 0x14026F814 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x140323360 (MmSetAddressRangeModified.c)
 *     CcZeroDataInCache @ 0x140359C58 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA6A0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetOptimal @ 0x140290314 (MiLockWorkingSetOptimal.c)
 *     MiGetSystemCacheReverseMap @ 0x140292630 (MiGetSystemCacheReverseMap.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140358424 (MI_TIGHTER_PERMISSIONS.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v4; // edi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  __int64 Flink; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  _KPROCESS *Process; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  struct _LIST_ENTRY *v20; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rbp
  unsigned __int8 CurrentIrql; // r12
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v32; // r9
  int v33; // eax
  __int64 v34; // rcx
  struct _LIST_ENTRY *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int8 v41; // [rsp+20h] [rbp-138h]
  unsigned __int8 v42[3]; // [rsp+21h] [rbp-137h] BYREF
  unsigned int v43; // [rsp+24h] [rbp-134h]
  __int64 v44; // [rsp+28h] [rbp-130h] BYREF
  int v45; // [rsp+30h] [rbp-128h] BYREF
  int ProtectionMask; // [rsp+34h] [rbp-124h]
  int v47; // [rsp+38h] [rbp-120h]
  __int64 v48; // [rsp+40h] [rbp-118h]
  __int64 v49; // [rsp+48h] [rbp-110h]
  __int64 v50; // [rsp+50h] [rbp-108h]
  int v51; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v52; // [rsp+64h] [rbp-F4h]
  __int16 v53; // [rsp+66h] [rbp-F2h]
  __int64 v54; // [rsp+68h] [rbp-F0h]
  __int64 v55; // [rsp+70h] [rbp-E8h]
  __int64 v56; // [rsp+78h] [rbp-E0h]
  _BYTE v57[152]; // [rsp+80h] [rbp-D8h] BYREF

  v2 = a2 - 1;
  v42[0] = 0;
  v53 = 0;
  memset(v57, 0, sizeof(v57));
  v41 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v54 = 20LL;
  v4 = ProtectionMask;
  v51 = 0;
  v52 = 0;
  v55 = 0LL;
  v56 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a1 + v2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v49 = MiLockWorkingSetOptimal(&unk_140C529C0, v5, v42);
  Flink = *(_QWORD *)(MiGetSystemCacheReverseMap(v7) + 24);
  v10 = Flink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (Flink & 1) == 0 )
    v10 = Flink;
  v11 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
  v12 = v5;
  v50 = v11 + 7232;
  do
  {
    v13 = *(_QWORD *)v5;
    v14 = MiPteInShadowRange(v12, Flink);
    v17 = v14;
    if ( v14 )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 && (v13 & 1) != 0 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          Flink = (__int64)Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v29 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
            Flink = v13 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v29;
            LOBYTE(Process) = v29 & 0x20;
            if ( (v29 & 0x20) == 0 )
              Flink = v13;
            v13 = Flink;
            if ( (v29 & 0x42) != 0 )
              v13 = Flink | 0x42;
          }
        }
      }
    }
    v44 = v13;
    if ( (v13 & 1) != 0 )
    {
      v47 = 0;
      v18 = 0LL;
      v19 = v13;
      v43 = MiPteInShadowRange(&v44, Flink);
      Flink = v43;
      if ( v43
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v20 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v20 )
        {
          v19 = v13 | 0x20;
          v28 = *((_QWORD *)&v20->Flink + (((unsigned __int64)&v44 >> 3) & 0x1FF));
          if ( (v28 & 0x20) == 0 )
            v19 = v13;
          if ( (v28 & 0x42) != 0 )
            v19 |= 0x42uLL;
        }
      }
      v22 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v20 = (struct _LIST_ENTRY *)((unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | SchedulerAssist[5]);
        Flink = v43;
        SchedulerAssist[5] = (_DWORD)v20;
      }
      v45 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v45, Flink, (__int64)v20, (__int64)SchedulerAssist);
          while ( *(__int64 *)(v22 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
        Flink = v43;
      }
      v24 = (*(_BYTE *)(v22 + 34) & 0x10) == 0;
      v25 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v22 + 40) >> 39) & 0x3FFLL));
      v48 = v25;
      if ( v24 || (*(_DWORD *)(v22 + 16) & 0x400LL) == 0 )
      {
        v26 = MiCaptureDirtyBitToPfn(v22);
        Flink = v43;
        v18 = v26;
        v25 = v48;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v33 & v32[5]) == 0;
            v32[5] &= v33;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v25 = v48;
            Flink = v43;
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v18 )
      {
        MiReleasePageFileInfo(v25, v18, 0LL);
        Flink = v43;
      }
      v4 = ProtectionMask;
      if ( ProtectionMask != 2 || (v13 & 0x800) == 0 )
      {
        if ( (v13 & 0x42) == 0 )
          goto LABEL_18;
        MiWriteValidPteNewProtection(v5, v13 & 0xFFFFFFFFFFFFFFBDuLL);
        v41 = 1;
LABEL_17:
        MiInsertTbFlushEntry(&v51, v7, 1LL, 0LL);
        goto LABEL_18;
      }
      v34 = v13;
      if ( (_DWORD)Flink
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        v34 = v13;
        if ( v35 )
        {
          v34 = v13 | 0x20;
          v36 = *((_QWORD *)&v35->Flink + (((unsigned __int64)&v44 >> 3) & 0x1FF));
          if ( (v36 & 0x20) == 0 )
            v34 = v13;
          if ( (v36 & 0x42) != 0 )
            v34 |= 0x42uLL;
        }
      }
      v8 ^= (v8 ^ v34) & 0xFFFFFFFFF000LL;
      MiWriteValidPteNewProtection(v5, v8);
      if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !(unsigned int)MI_TIGHTER_PERMISSIONS(v13, v8) )
        v37 = v47;
      else
        v37 = 1;
      if ( (v13 & 0x42) != 0 )
        v41 = 1;
      if ( v37 )
        goto LABEL_17;
    }
    else if ( v4 == 2 && (v13 & 8) == 0 )
    {
      v38 = v13 | 8;
      v44 = v38;
      v39 = v38;
      if ( !(_DWORD)v17 )
        goto LABEL_87;
      if ( !(unsigned int)MiPteHasShadow(Process, Flink, v17, v16) )
      {
        v39 = v38;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v38 & 1) != 0 )
        {
          v39 = v38 | 0x8000000000000000uLL;
        }
LABEL_87:
        *(_QWORD *)v5 = v39;
        goto LABEL_18;
      }
      v40 = v38;
      if ( !HIBYTE(word_140C4E008) && (v38 & 1) != 0 )
        v40 = v38 | 0x8000000000000000uLL;
      *(_QWORD *)v5 = v40;
      MiWritePteShadow(v5, v40);
    }
LABEL_18:
    v5 += 8LL;
    v7 += 4096LL;
    v12 = v5;
  }
  while ( v5 <= v6 );
  MiFlushTbList(&v51);
  MiUnlockPageTableInternal(v50, v49);
  MiUnlockWorkingSetShared(v50, v42[0]);
  return v41;
}
