/*
 * XREFs of MiDeleteEmptyPageTables @ 0x1402EB5E0
 * Callers:
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteEmptyPageTables(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  __int64 **Address; // rax
  __int64 **v9; // rsi
  int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int16 *p_SpecialApcDisable; // r12
  ULONG_PTR v14; // rdi
  struct _KTHREAD *v15; // r9
  __int64 v16; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v22; // eax
  char v23; // al
  __int64 result; // rax
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  struct _KTHREAD *v29; // [rsp+28h] [rbp-D8h]
  __m128i v30; // [rsp+38h] [rbp-C8h]
  _OWORD v31[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __m128i v33[11]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v34[22]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v35[24]; // [rsp+1E0h] [rbp+E0h] BYREF

  v30.m128i_i64[1] = a2;
  v30.m128i_i64[0] = a1;
  memset(v35, 0, 0xB8uLL);
  v32 = 0LL;
  memset(v31, 0, sizeof(v31));
  memset(v34, 0, 0xA8uLL);
  memset(v33, 0, sizeof(v33));
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (a3 & 1) != 0 )
  {
    v9 = 0LL;
    v14 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
    p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
    goto LABEL_20;
  }
  LOCK_ADDRESS_SPACE(CurrentThread, CurrentThread->ApcState.Process);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    return UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
  Address = MiLocateAddress(a1);
  v9 = Address;
  if ( !Address
    || a2 >> 12 > (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) )
  {
    return UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
  }
  MiLockVad(CurrentThread, Address);
  if ( ((_DWORD)v9[6] & 0x200000) == 0
    || !(unsigned int)MiVadPureReserve(v9)
    || (v10 & 0x6200000) == 0x4200000
    || (v11 = *((unsigned int *)v9 + 13),
        LODWORD(v11) = v11 & 0x7FFFFFFF,
        v12 = v11 | ((unsigned __int64)*((unsigned __int8 *)v9 + 34) << 31),
        v12 == 0x7FFFFFFFDLL)
    || (v10 & 4) != 0
    || v12 >= 0x7FFFFFFFDLL && v12 != 0x7FFFFFFFELL )
  {
LABEL_28:
    MiUnlockVad(CurrentThread, v9);
    return UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
  }
  p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
  v14 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  --CurrentThread->SpecialApcDisable;
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  v29 = v15;
  _disable();
  AbEntrySummary = v15->AbEntrySummary;
  if ( v15->AbEntrySummary )
    goto LABEL_12;
  AbEntrySummary = KiAbTryReclaimOrphanedEntries(&Process[1].Affinity.StaticBitmap[8], v15);
  if ( AbEntrySummary )
  {
    v15 = v29;
LABEL_12:
    _BitScanForward(&v18, AbEntrySummary);
    v28 = v18;
    v15->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v15 = v29;
      }
    }
    _enable();
    v16 = (__int64)(&v15[1].Process + 12 * v28);
    if ( v14 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v15->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v16 + 8) = SessionId;
    *(_QWORD *)v16 = v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &Process[1].Affinity.StaticBitmap[8],
      v16,
      (__int64)&Process[1].Affinity.StaticBitmap[8]);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
LABEL_20:
  v34[14] = v9;
  v34[4] = v31;
  LODWORD(v34[15]) = 128;
  v22 = MiTbFlushType((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  WORD2(v35[0]) = 0;
  v35[2] = 0LL;
  v35[3] = 0LL;
  LODWORD(v35[0]) = v22;
  v33[1].m128i_i64[0] = (__int64)v35;
  v23 = BYTE4(v34[15]);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    v23 = 1;
  LODWORD(v35[1]) = 20;
  v33[0].m128i_i32[3] = 0;
  BYTE4(v34[15]) = v23;
  v33[0].m128i_i32[0] = 7;
  v33[1].m128i_i64[1] = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v33[0].m128i_i8[4] = v33[0].m128i_i8[4] & 0xE3 | 4;
  v33[10].m128i_i64[1] = (__int64)v34;
  v33[9].m128i_i64[1] = (__int64)MiDeleteEmptyPageTable;
  v33[10].m128i_i64[0] = (__int64)MiDeleteEmptyPageTableTail;
  v33[2] = v30;
  v33[0].m128i_i8[7] = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  MiWalkPageTables(v33);
  result = MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v33[0].m128i_u8[7]);
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v14);
    KeAbPostRelease(v14);
    if ( (*p_SpecialApcDisable)++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_28;
  }
  return result;
}
