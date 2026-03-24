/*
 * XREFs of TtmSessionMonitorControl @ 0x1408FEF64
 * Callers:
 *     PopControlMonitor @ 0x140779EA0 (PopControlMonitor.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     TtmiTerminalMonitorControl @ 0x1408FDC2C (TtmiTerminalMonitorControl.c)
 *     TtmpAcquireSessionById @ 0x1408FF640 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140902B14 (TtmiLogError.c)
 *     TtmiLogSessionMonitorControl @ 0x140903CB8 (TtmiLogSessionMonitorControl.c)
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
    v6 = TtmiTerminalMonitorControl(v11, *(unsigned int **)(v11 + 32), a2, a3);
    v8 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v9 = 4079LL;
  }
  else
  {
    v9 = 4067LL;
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
