/*
 * XREFs of ExpTimerAdjust @ 0x140609980
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x1405A2390 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 *     KeCancelTimerInternal @ 0x1402FDCC4 (KeCancelTimerInternal.c)
 */

char __fastcall ExpTimerAdjust(PKTIMER Timer, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG v6; // esi
  char v9; // r12
  __int64 v10; // rdi
  ULONG Dpc; // ecx
  int Dpc_high; // edx
  ULONG v13; // eax
  unsigned int v14; // edx
  ULONG v15; // eax
  volatile LONG Lock; // r9d
  char v17; // bl
  __int64 v19[9]; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v6 = 0;
  v19[0] = 0LL;
  v20 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)&Timer[1]);
  v9 = KeCancelTimerInternal((__int64)Timer, v19, &v20, (unsigned int *)&Timer[5]);
  if ( v9 )
  {
    v10 = 0LL;
    if ( v20 == 1 )
    {
      v10 = a4 + a3 + v19[0] - a5;
      if ( v10 < 0 )
        v10 = a4;
    }
    else if ( (unsigned int)(v20 - 2) <= 1 )
    {
      v10 = a5 - v19[0] - a3;
      if ( v10 > 0 )
      {
        v10 = -1LL;
        if ( a3 > 0 )
          v10 = a5 - v19[0];
      }
    }
    Dpc = (ULONG)Timer[3].Dpc;
    Dpc_high = HIDWORD(Timer[3].Dpc);
    if ( Dpc )
    {
      v13 = Dpc - Dpc_high;
      if ( !Dpc_high )
        v13 = (ULONG)Timer[3].Dpc;
      Dpc = v13;
      v14 = v21 / 0x2710;
      v15 = v13 + v21 / 0x2710;
      if ( v15 >= Dpc )
      {
        Dpc = v15;
        LODWORD(Timer[3].Dpc) = v15;
        HIDWORD(Timer[3].Dpc) = v14;
      }
    }
    Lock = Timer[5].Header.Lock;
    v17 = (__int64)Timer[4].Dpc & 1;
    *(_QWORD *)&Timer[4].Processor = v10;
    if ( !v17 )
      v6 = Dpc;
    KeSetCoalescableTimer(
      Timer,
      (LARGE_INTEGER)v10,
      v6,
      Lock,
      (PKDPC)((unsigned __int64)&Timer[2].TimerListEntry & -(__int64)(v17 != 0)));
  }
  KxReleaseSpinLock((volatile signed __int64 *)&Timer[1].Header.Lock);
  return v9;
}
