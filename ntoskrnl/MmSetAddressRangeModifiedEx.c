/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x140329510
 * Callers:
 *     CcFlushCacheOneRange @ 0x14021B070 (CcFlushCacheOneRange.c)
 *     CcZeroDataInCache @ 0x140241DBC (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x14029FCE4 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x1402F8530 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x140390990 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiGetSystemCacheReverseMap @ 0x140222030 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14032E62C (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x14032F7CC (MiLockWorkingSetOptimal.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // r12
  __int64 CurrentIrql; // r10
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  unsigned __int8 v24; // dl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v26; // r9
  int v27; // eax
  int v28; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int8 v34[4]; // [rsp+20h] [rbp-138h] BYREF
  int v35; // [rsp+24h] [rbp-134h]
  int ProtectionMask; // [rsp+28h] [rbp-130h]
  int v37; // [rsp+2Ch] [rbp-12Ch] BYREF
  int v38; // [rsp+30h] [rbp-128h]
  __int64 v39; // [rsp+38h] [rbp-120h]
  __int64 v40; // [rsp+40h] [rbp-118h]
  unsigned __int64 v41; // [rsp+48h] [rbp-110h]
  __int64 v42; // [rsp+50h] [rbp-108h]
  int v43; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v44; // [rsp+64h] [rbp-F4h]
  __int16 v45; // [rsp+66h] [rbp-F2h]
  __int64 v46; // [rsp+68h] [rbp-F0h]
  __int64 v47; // [rsp+70h] [rbp-E8h]
  __int64 v48; // [rsp+78h] [rbp-E0h]
  _BYTE v49[152]; // [rsp+80h] [rbp-D8h] BYREF

  v3 = a2 - 1;
  v34[0] = 0;
  v45 = 0;
  memset(v49, 0, sizeof(v49));
  LOBYTE(v2) = 0;
  v35 = v2;
  ProtectionMask = MiMakeProtectionMask(4u);
  v46 = 20LL;
  v43 = 0;
  v5 = ProtectionMask;
  v44 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a1 + v3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = 0LL;
  v41 = MiLockWorkingSetOptimal(&unk_140C6F480, v6, v34);
  v10 = *(_QWORD *)(MiGetSystemCacheReverseMap(v8) + 24);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) == 0 )
    v11 = v10;
  v42 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF)) + 17344LL;
  do
  {
    v12 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) != 0 )
    {
      v38 = 0;
      v13 = 0LL;
      v14 = (v12 >> 12) & 0xFFFFFFFFFFLL;
      v2 = 48 * v14 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      v39 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v23) = 4;
        else
          v23 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v23;
      }
      v37 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v37);
          while ( *(__int64 *)(v2 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) );
        LOBYTE(CurrentIrql) = v39;
      }
      v16 = (*(_BYTE *)(v2 + 34) & 0x10) == 0;
      v17 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
      v40 = v17;
      if ( v16 || (*(_DWORD *)(v2 + 16) & 0x400LL) == 0 )
      {
        v18 = MiCaptureDirtyBitToPfn(v2);
        LOBYTE(CurrentIrql) = v39;
        v13 = v18;
        v17 = v40;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v24 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v16 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v16 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            LOBYTE(CurrentIrql) = v39;
          }
          v17 = v40;
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v13 )
        MiReleasePageFileInfo(v17, v13, 0);
      v5 = ProtectionMask;
      if ( ProtectionMask != 2 || (v12 & 0x800) == 0 )
      {
        if ( (v12 & 0x42) == 0 )
        {
          LOBYTE(v2) = v35;
          goto LABEL_19;
        }
        v19 = *(_QWORD *)v6;
        if ( !MiPteInShadowRange(v6) )
        {
          v20 = v19 & 0x7F00000000000000LL | v12 & 0x80FFFFFFFFFFFFBDuLL;
          goto LABEL_16;
        }
        if ( (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v30 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
            v31 = v19 | 0x20;
            if ( (v30 & 0x20) == 0 )
              v31 = v19;
            v19 = v31;
            if ( (v30 & 0x42) != 0 )
              v19 = v31 | 0x42;
          }
        }
        v20 = v19 & 0x7F00000000000000LL | v12 & 0x80FFFFFFFFFFFFBDuLL;
        if ( MiPteHasShadow() )
        {
          v33 = v20;
          if ( !HIBYTE(word_140C6697C) && (v20 & 1) != 0 )
            v33 = v20 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v33;
          MiWritePteShadow(v6, v33, v32);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v20 & 1) != 0 )
          {
            v20 |= 0x8000000000000000uLL;
          }
LABEL_16:
          *(_QWORD *)v6 = v20;
        }
        v5 = ProtectionMask;
        LOBYTE(v2) = 1;
        v35 = v2;
LABEL_18:
        MiInsertTbFlushEntry(&v43, v8, 1LL);
        goto LABEL_19;
      }
      v9 = (v14 << 12) | v9 & 0xFFF0000000000FFFuLL;
      MiWriteValidPteNewProtection(v6, v9);
      if ( (MiFlags & 0x300) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v12, v9) )
        v28 = 1;
      else
        v28 = v38;
      LODWORD(v2) = (unsigned __int8)v35;
      if ( (v12 & 0x42) != 0 )
        LODWORD(v2) = 1;
      v35 = v2;
      if ( v28 )
        goto LABEL_18;
    }
    else if ( v5 == 2 && (v12 & 8) == 0 )
    {
      *(_QWORD *)v6 = v12 | 8;
    }
LABEL_19:
    v6 += 8LL;
    v8 += 4096LL;
  }
  while ( v6 <= v7 );
  MiFlushTbList(&v43);
  MiUnlockPageTableInternal(v42, v41);
  MiUnlockWorkingSetShared(v42, v34[0]);
  return (unsigned __int8)v2;
}
