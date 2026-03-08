/*
 * XREFs of ?TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_K@Z @ 0x1C01FDCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z @ 0x1C01FDCF8 (--$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z.c)
 */

__int64 DxgMonitor::MonitorDataStore::TryReadQWord()
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>();
}
