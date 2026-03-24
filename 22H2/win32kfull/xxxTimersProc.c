/*
 * XREFs of xxxTimersProc @ 0x1C0168118
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C00D0C80 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ThreadLockExchangeWorker @ 0x1C00D1360 (ThreadLockExchangeWorker.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C00FB27C (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C0167FD0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxTimersProc(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int DLT; // eax
  unsigned __int64 v4; // rdx
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  unsigned __int64 v7; // r13
  unsigned int v8; // r12d
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // r10d
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  gbTimersProcActive = 1;
  v18 = 0LL;
  v19 = 0LL;
  gbRITAlerted = 0;
  DLT = DLT_HANDLEMANAGER::getDLT(a1, a2, a3);
  GetDomainLockRef(DLT);
  v4 = 0xFFFFF78000000004uLL;
  do
  {
    v5 = 0x7FFFFFFF;
    v6 = 0x7FFFFFFF;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    gbRITRescan = 0;
    v8 = v7 - gcmsLastTimer;
    gcmsLastTimer = v7;
    v9 = (_QWORD *)gtmrListHead[0];
    v10 = gptiCurrent;
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = 0LL;
    while ( v9 != (_QWORD *)gtmrListHead[0] )
    {
      v11 = v9 - 9;
      ThreadLockExchangeWorker((__int64)(v9 - 9), (__int64)&v18);
      v12 = *((_DWORD *)v9 - 6);
      if ( (v12 & 0x20) != 0 || (v13 = *(_DWORD *)(v9 - 3) & 0xC00, v13 == 1024) )
      {
LABEL_25:
        v9 = (_QWORD *)*v9;
      }
      else
      {
        if ( (v12 & 0x1000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1590LL);
          goto LABEL_25;
        }
        _m_prefetchw((char *)v11 + 52);
        if ( (v12 & 8) != 0 || v13 == 2048 )
        {
          LOWORD(v12) = -2049;
          v15 = *(_DWORD *)(v9 - 3) & 0xFFFFF7F7;
          *((_DWORD *)v11 + 12) = v15;
        }
        else
        {
          v14 = *((_DWORD *)v11 + 13);
          *((_DWORD *)v11 + 13) = v14 - v8;
          LOWORD(v15) = v12;
          if ( v14 <= v8 )
          {
            xxxReadyTimer((struct tagTIMER *)(v9 - 9), v7);
            v15 = *((_DWORD *)v11 + 12);
          }
        }
        v9 = (_QWORD *)*v9;
        if ( (v15 & 0x1000) != 0 || (*(_BYTE *)(_HMPheFromObjectWorker(v11) + 25) & 1) != 0 )
        {
          if ( (v11[6] & 0x1000) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1646LL);
          if ( (*(_BYTE *)(_HMPheFromObjectWorker(v11) + 25) & 1) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1648LL);
        }
        else
        {
          if ( (v12 & 0x800) != 0 )
            *((_DWORD *)v11 + 12) &= ~0x800u;
          v16 = CoalescableDueTime((const struct tagTIMER *)v11);
          if ( v17 >= v5 )
            v17 = v5;
          v5 = v17;
          if ( v16 >= v6 )
            v16 = v6;
          v6 = v16;
        }
      }
    }
    ThreadUnlockWorker1(v10, v4);
    v4 = 0xFFFFF78000000004uLL;
  }
  while ( gbRITRescan );
  gdmsNextTimer = v5;
  guNextCoalescableTimerDue = v6;
  SetDelayableTimer(v5, v6);
  gbTimersProcActive = 0;
}
