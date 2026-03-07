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
