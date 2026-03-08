/*
 * XREFs of ?ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKW4MonitorDataStoreBehavior@2@PEBGK@Z @ 0x1C021AA40
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1C01D1BA4 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::ReadDWordWithDefault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v6 = a4;
  if ( DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, &v6) )
    return v6;
  return v4;
}
