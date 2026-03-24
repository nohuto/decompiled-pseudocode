/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x140272404
 * Callers:
 *     KiAbIoBoostOwners @ 0x1402713E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402714E4 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14022BA70 (PsGetBaseIoPriorityThread.c)
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140272D70 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbThreadBoostIoPriority @ 0x1402DE724 (KiAbThreadBoostIoPriority.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiAbThreadInsertList @ 0x14032116C (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1405A742C (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  ULONG_PTR v7; // rdi
  int IoPriorityThread; // eax
  unsigned int v9; // ebx
  char v10; // r12
  char v11; // r13
  char v12; // si
  int v13; // r14d
  char CpuPriorityKey; // al
  __int64 v15; // r8
  _BYTE *v16; // r10
  ULONG_PTR v17; // r15
  int BaseIoPriorityThread; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r10
  __int64 v23; // r9
  __int64 v24; // rdx
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v27; // rcx
  char v28; // cl
  int v29; // eax
  int v30; // eax
  char v31; // [rsp+50h] [rbp-58h]
  int v32; // [rsp+54h] [rbp-54h]
  int v33[20]; // [rsp+58h] [rbp-50h] BYREF
  char v34; // [rsp+B0h] [rbp+8h]

  v7 = a1 - 16LL * *(unsigned __int8 *)(a1 + 24);
  v31 = *(_BYTE *)(v7 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v7);
  v9 = 0;
  v10 = IoPriorityThread;
  v11 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v7 + 1360) )
    v10 = 2;
  v12 = 1;
  if ( !*(_DWORD *)(v7 + 1368) || (v34 = 0, *(_DWORD *)(v7 + 1364)) )
    v34 = 1;
  v32 = 0;
  v13 = 0;
  *a6 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
  v17 = (char)*v16;
  if ( CpuPriorityKey < (char)v17 )
  {
    v23 = 0x7FFFLL;
    LOBYTE(v32) = *v16;
    v24 = *(_WORD *)(a1 + 88) & 0x7FFF;
    LODWORD(v24) = v24 | (1 << (v17 - 1));
    LOWORD(v24) = *(_WORD *)(a1 + 88) ^ (*(_WORD *)(a1 + 88) ^ v24) & 0x7FFF;
    *(_WORD *)(a1 + 88) = v24;
    CurrentPrcb = KeGetCurrentPrcb();
    v33[0] = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v29 = SchedulerAssist[6];
          SchedulerAssist[6] = v29 + 1;
          if ( v29 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
        break;
      v27 = CurrentPrcb->SchedulerAssist;
      if ( v27 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v30 = v27[6] - 1;
          v27[6] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(v33, v24, v15, v23);
      while ( *(_QWORD *)(v7 + 64) );
    }
    v28 = *(_BYTE *)(v17 + v7 + 824);
    if ( v28 == -1 )
      KeBugCheckEx(0x157u, v7, v17, 1uLL, 0LL);
    *(_BYTE *)(v17 + v7 + 824) = v28 + 1;
    v13 = 0;
    *(_DWORD *)(v7 + 856) |= 1 << v17;
    if ( *(char *)(v7 + 195) < (char)v17 )
    {
      KiSetPriorityThread((_KTHREAD *)v7, a3, v17);
      v13 = 1;
    }
    KiReleaseThreadLockSafe(v7);
  }
  else
  {
    LOBYTE(v17) = 0;
  }
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v7);
  if ( BaseIoPriorityThread < *(char *)(v21 + 1)
    && *(__int16 *)(a1 + 88) >= 0
    && (unsigned int)KiAbThreadBoostIoPriority(v7, a5, 0LL) )
  {
    BYTE1(v32) = 2;
    *(_WORD *)(a1 + 88) |= 0x8000u;
    v13 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( (*(_DWORD *)(v7 + 1368) == 0) >= *(char *)(a2 + 2)
    || (*(_BYTE *)(a1 + 90) & 1) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, 1LL) )
  {
    v12 = 0;
  }
  else
  {
    *(_WORD *)(a1 + 90) |= 1u;
    v13 = 1;
    BYTE2(v32) = 1;
  }
  if ( a4 && v13 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, v7 + 808);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v32 )
  {
    LOBYTE(v20) = v11;
    LOBYTE(v19) = v17;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)(a1 + 32) & 0xFFFFFFFC, v19, v20, v12, v31, v10, v34, 0, *a6);
  }
  LOBYTE(v9) = (_BYTE)v17 != 0;
  return v9;
}
