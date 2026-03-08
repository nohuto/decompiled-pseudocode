/*
 * XREFs of ?GetSerializationSizeInBytes@EdidMonitorDescriptor@DxgMonitor@@UEBAIXZ @ 0x1C03CB6A0
 * Callers:
 *     ?SerializeToBuffer@EdidMonitorDescriptor@DxgMonitor@@UEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALIZATION@@I@Z @ 0x1C03CB6C0 (-SerializeToBuffer@EdidMonitorDescriptor@DxgMonitor@@UEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALIZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetSerializationSizeInBytes(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
    return (unsigned int)(140 * v1 + 4);
  else
    return 144LL;
}
