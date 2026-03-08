/*
 * XREFs of MiDeleteVad @ 0x1407C82E0
 * Callers:
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1402D5768 (MiDeletePartialVad.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1406A2850 (MiUnmapVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406A5278 (MiFreeToSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140797184 (MiUnmapLockedPagesInUserSpace.c)
 *     MiCleanVad @ 0x1407D36F8 (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x140A3A9F4 (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140A46058 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     MiFinishVadDeletion @ 0x140248200 (MiFinishVadDeletion.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiReturnFullProcessCharges @ 0x140289980 (MiReturnFullProcessCharges.c)
 *     MiUnmapViewSubsections @ 0x1402DADD4 (MiUnmapViewSubsections.c)
 *     MiDereferenceExtendInfo @ 0x1402FAE84 (MiDereferenceExtendInfo.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiDrainSystemAccessLog @ 0x140330B34 (MiDrainSystemAccessLog.c)
 *     MiIsVadLargePrivate @ 0x1403316C0 (MiIsVadLargePrivate.c)
 *     MiLockAddressSpaceToo @ 0x140332B7C (MiLockAddressSpaceToo.c)
 *     MiDeleteVirtualAddresses @ 0x140332E60 (MiDeleteVirtualAddresses.c)
 *     MiSetVadDeleted @ 0x140332ED8 (MiSetVadDeleted.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     MiManageSubsectionView @ 0x140335DC0 (MiManageSubsectionView.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiControlAreaRequiresCharge @ 0x14034C4DC (MiControlAreaRequiresCharge.c)
 *     MiDereferenceControlArea @ 0x14036CC30 (MiDereferenceControlArea.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061B438 (MiLogPerfMemoryRangeEvent.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiInitPerfMemoryFlags @ 0x14063F1FC (MiInitPerfMemoryFlags.c)
 *     MiDereferencePerSessionProtos @ 0x14075B72C (MiDereferencePerSessionProtos.c)
 *     MiRemoveSharedCommitNode @ 0x1407D6770 (MiRemoveSharedCommitNode.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A3F408 (MiRemoveUserPhysicalPagesView.c)
 *     MiFreeLargePageView @ 0x140A46E40 (MiFreeLargePageView.c)
 *     MiDeleteEnclavePages @ 0x140AAA2F8 (MiDeleteEnclavePages.c)
 */

void __fastcall MiDeleteVad(unsigned int *P, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  _KPROCESS *Process; // r12
  int v9; // r15d
  void *v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // esi
  unsigned __int64 v19; // r15
  unsigned int v20; // ecx
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // ebx
  __int64 v25; // rsi
  char v26; // al
  unsigned int SessionId; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r15
  __int64 VadEvent; // rax
  int v33; // edx
  unsigned __int64 v34; // rcx
  unsigned int inited; // eax
  __int64 *v36; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-48h]
  __int128 v38; // [rsp+40h] [rbp-40h] BYREF
  __int128 v39; // [rsp+50h] [rbp-30h]
  __int128 v40; // [rsp+60h] [rbp-20h]
  __int64 v41; // [rsp+70h] [rbp-10h]
  unsigned __int64 v42; // [rsp+C0h] [rbp+40h]
  __int64 *v43; // [rsp+D8h] [rbp+58h] BYREF

  v41 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  v43 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v42 = (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12;
  v37 = ((P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF;
  v9 = 64;
  if ( MiIsVadLargePrivate((__int64)P) )
    v4 = 64;
  if ( (P[12] & 0x200000) == 0 )
  {
    v10 = (void *)*((_QWORD *)P + 16);
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( (P[12] & 0x6200000) == 0x4200000 )
    MiDeleteEnclavePages(Process, P);
  if ( (P[12] & 0x70) == 0x30 )
    *((_QWORD *)&v40 + 1) = MiRemoveUserPhysicalPagesView(P);
  v11 = P[13];
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v11) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v4 |= 0x80u;
  if ( v4 < 0x80 )
    MiSetVadDeleted((__int64)P);
  v12 = P[12];
  if ( (v12 & 0x200000) != 0 )
  {
    v13 = P[12] & 0x70;
    if ( v13 == 48 )
    {
      v9 = 0;
      if ( (v12 & 0x6200000) != 0x4200000 )
        v9 = 16;
    }
    else if ( v13 == 16 )
    {
      if ( (v12 & 0x10000000) == 0 )
        v9 = 32;
    }
    else
    {
      v9 = 0;
      if ( v13 == 64 )
      {
        v9 = 8;
        goto LABEL_21;
      }
    }
    if ( (v12 & 0xA200000) == 0x8200000 )
      v9 |= 0x400u;
  }
  else
  {
    v9 = ((a3 >> 31) & 1) + 2;
    if ( (a3 & 1) != 0 )
      v9 |= 4u;
  }
LABEL_21:
  if ( MiIsVadLargePrivate((__int64)P) )
    v9 |= 0x800u;
  v18 = v9 | 0x1000;
  if ( (P[12] & 0x2200000) != 0x2200000 )
    v18 = v9;
  v19 = v37;
  if ( v4 < 0x80 )
  {
    MiDeleteVirtualAddresses(v15, v42, v37, v18, &v38);
    if ( (v18 & 0x800) != 0 )
    {
      v28 = P[13];
      LODWORD(v28) = v28 & 0x7FFFFFFF;
      v29 = v41;
      v30 = v28 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31);
      if ( v41 )
      {
        v41 = 0LL;
        MiReturnFullProcessCharges((__int64)Process, v29);
      }
      v14 = *((_QWORD *)&v39 + 1);
      v31 = v30 - *((_QWORD *)&v39 + 1);
      P[13] ^= (P[13] ^ v31) & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v31 >> 31;
      if ( v31 )
      {
        VadEvent = MiLocateVadEvent();
        MiFreeLargePageView(Process, P, VadEvent, (unsigned int)(v33 - 15));
        v14 = *((_QWORD *)&v39 + 1);
      }
      v34 = *((_QWORD *)&v38 + 1);
      P[13] ^= (P[13] ^ DWORD2(v38)) & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v34 >> 31;
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Spare2[39], v34 - v14);
      v19 = v37;
      *((_QWORD *)&v39 + 1) = 0LL;
    }
  }
  if ( (v18 & 2) != 0 )
  {
    v20 = P[12];
    v5 = **((_QWORD **)P + 9);
    if ( (v20 & 0x70) == 0x20 )
    {
      if ( (P[16] & 0x1000000) != 0 )
        v4 |= 0x18u;
    }
    else if ( *(_QWORD *)(v5 + 64) )
    {
      v21 = v20 & 0xF80;
      if ( v21 == 512 || v21 == 768 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
      MiGetProtoPteAddress((__int64)P, P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32), 0, &v36);
      if ( (P[16] & 0x1000000) != 0 )
        v4 |= 0x20u;
      MiGetProtoPteAddress((__int64)P, P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0, &v43);
    }
    if ( (v4 & 8) == 0 )
    {
      if ( (P[12] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v14, v16, v17);
        v22 = P[12];
        if ( (v22 & 0x70) == 0x20 )
        {
          if ( (*(_DWORD *)(v5 + 56) & 0x8000000) != 0 )
            v4 |= 2u;
          v4 |= 4u;
        }
        else if ( (v22 & 0x200000) == 0 && !*(_QWORD *)(v5 + 64) )
        {
          MiGetProtoPteAddress((__int64)P, P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32), 0, &v36);
          MiGetProtoPteAddress((__int64)P, P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0, &v43);
        }
      }
      v23 = v4;
      v24 = v4 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v24 = v23;
      v4 = v24 | 8;
    }
  }
  MiLockAddressSpaceToo((__int64)Process, (__int64)P, a2);
  if ( v4 < 0x80 )
  {
    if ( a2 )
    {
      MiRemoveVad((unsigned __int64)P, 1, a2);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 40));
      KeAbPostRelease(a2 + 40);
    }
    else
    {
      MiRemoveVad((unsigned __int64)P, 1, 0LL);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v38 + 1);
  *(_QWORD *)P = *((_QWORD *)&v39 + 1);
  if ( (v4 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(0, 13);
    v25 = v42;
    MiLogPerfMemoryRangeEvent(
      v42,
      LODWORD(Process[1].Header.WaitListHead.Flink),
      inited,
      (P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
    - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
    + 1);
  }
  else
  {
    v25 = v42;
  }
  if ( (v4 & 1) != 0 )
    MiDereferenceExtendInfo((__int64)P, v5);
  if ( (v4 & 8) != 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      SessionId = MmGetSessionIdEx((__int64)Process);
      MiDereferencePerSessionProtos((__int64 *)v5, SessionId);
    }
    if ( (v4 & 4) != 0 && (MiControlAreaRequiresCharge(v5, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v5);
    MiRemoveSharedCommitNode(v5, Process, 0LL);
    MiManageSubsectionView(*((__int64 **)P + 9), (_QWORD *)P + 12, 4);
  }
  v26 = a2 || v4 >= 0x80;
  MiFinishVadDeletion(P, v25, v19, v26);
  if ( v5 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      MiDereferenceControlArea(v5);
    }
    else
    {
      if ( v36 )
      {
        if ( (v4 & 0x20) != 0 )
          MiDecrementLargeSubsections(v36, v43);
      }
      MiUnmapViewSubsections(v5, (ULONG_PTR)v36);
    }
  }
}
