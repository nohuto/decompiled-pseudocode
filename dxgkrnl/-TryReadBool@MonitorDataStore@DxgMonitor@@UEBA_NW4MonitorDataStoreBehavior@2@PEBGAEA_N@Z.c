/*
 * XREFs of ?TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_N@Z @ 0x1C021AB40
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1C01D1BA4 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadBool(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  char result; // al
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0;
  result = DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, v6);
  if ( result )
    *a4 = v6[0] != 0;
  return result;
}
