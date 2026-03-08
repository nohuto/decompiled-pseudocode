/*
 * XREFs of TtmSessionMonitorControl @ 0x1409A18A0
 * Callers:
 *     PopControlMonitor @ 0x140994D70 (PopControlMonitor.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogSessionMonitorControl @ 0x1409A66B0 (TtmiLogSessionMonitorControl.c)
 *     TtmiTerminalMonitorControl @ 0x1409A8578 (TtmiTerminalMonitorControl.c)
 */

__int64 __fastcall TtmSessionMonitorControl(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = TtmpAcquireSessionById(&v11, a1);
  v7 = v11;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = TtmiTerminalMonitorControl(v11, *(_QWORD *)(v11 + 32), a2, a3);
    v8 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v9 = 4075LL;
  }
  else
  {
    v9 = 4063LL;
  }
  TtmiLogError("TtmSessionMonitorControl", v9, (unsigned int)v6, (unsigned int)v6);
LABEL_6:
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  TtmiLogSessionMonitorControl(a1, a2, a3, v8);
  return v8;
}
