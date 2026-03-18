/*
 * XREFs of CiSchedulerSleep @ 0x1C00014A0
 * Callers:
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001250 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerQueryCurrentTime @ 0x1C0001630 (CiSchedulerQueryCurrentTime.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002050 (CiSchedulerUpdateTimer.c)
 *     CiLogSchedulerSleep @ 0x1C0003F8C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0004010 (CiLogSchedulerWakeup.c)
 */

__int64 __fastcall CiSchedulerSleep(unsigned int a1, unsigned int a2, unsigned __int32 *a3)
{
  __int64 v4; // rsi
  __int64 CurrentTime; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // al
  __int32 i; // eax
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int32 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  if ( qword_1C0007218 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  CurrentTime = CiSchedulerQueryCurrentTime();
  v7 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  v8 = CurrentTime;
  byte_1C0007224 = 0;
  v9 = CurrentTime + v4;
  qword_1C0007218 = CurrentTime + v4;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
  {
LABEL_15:
    v10 = 0;
    if ( !v7 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 24) > v9 )
      {
        v13 = *(_QWORD *)v7;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_6;
          v13 ^= v7;
        }
        if ( !v13 )
          goto LABEL_6;
      }
      else
      {
        v13 = *(_QWORD *)(v7 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_27;
          v13 ^= v7;
        }
        if ( !v13 )
        {
LABEL_27:
          v10 = 1;
          goto LABEL_7;
        }
      }
      v7 = v13;
    }
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    v7 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    goto LABEL_15;
  }
  v7 = 0LL;
LABEL_6:
  v10 = 0;
LABEL_7:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v7, v10, &WPP_MAIN_CB.Reserved);
  CiSchedulerUpdateTimer(v8);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C00073C0 )
    CiLogSchedulerSleep(a1);
  for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
  {
    v14 = i;
    if ( !i )
      CiSchedulerWaitStatus = KeWaitForSingleObject(
                                *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                Executive,
                                0,
                                1u,
                                0LL);
    if ( CiSchedulerProcessDeadlines(&v14) )
      break;
    if ( byte_1C00073C0 )
      CiLogSchedulerWakeup(v14);
  }
  result = v14;
  *a3 = v14;
  return result;
}
