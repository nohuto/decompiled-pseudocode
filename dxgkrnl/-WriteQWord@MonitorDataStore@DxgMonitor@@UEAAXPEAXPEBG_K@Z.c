/*
 * XREFs of ?WriteQWord@MonitorDataStore@DxgMonitor@@UEAAXPEAXPEBG_K@Z @ 0x1C03CA860
 * Callers:
 *     <none>
 * Callees:
 *     ??$WriteData@_K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBG_K@Z @ 0x1C03CA480 (--$WriteData@_K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBG_K@Z.c)
 */

void __fastcall DxgMonitor::MonitorDataStore::WriteQWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3)
{
  DxgMonitor::MonitorDataStore::WriteData<unsigned __int64>((__int64)this, a2, a3);
}
