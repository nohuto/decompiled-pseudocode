/*
 * XREFs of ?TryGetDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA_NIAEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C01FF790
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C001F4B8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

char __fastcall DxgMonitor::EdidMonitorDescriptor::TryGetDescriptor(
        DxgMonitor::EdidMonitorDescriptor *this,
        D3DKMDT_MONITOR_DESCRIPTOR_ID a2,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *a3)
{
  if ( a2 >= *((_DWORD *)this + 2) || !*(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2) )
    return 0;
  _mm_lfence();
  a3->Id = a2;
  a3->DataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2) + 16LL);
  a3->pData = (void *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2) + 24LL);
  a3->Type = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2) + 12LL);
  ConvertMonitorCapablitiesOrigin(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2) + 8LL), &a3->Origin);
  return 1;
}
