void __fastcall DxgMonitor::EdidMonitorDescriptor::SerializeToBuffer(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _DMM_MONITORDESCRIPTORSET_SERIALIZATION *a2,
        unsigned int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( a3 < (unsigned int)DxgMonitor::EdidMonitorDescriptor::GetSerializationSizeInBytes(this) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 2) > 0xFFu )
    WdLogSingleEntry0(1LL);
  v5 = 0LL;
  for ( *(_BYTE *)a2 = *((_BYTE *)this + 8);
        (unsigned int)v5 < *((_DWORD *)this + 2);
        *(_OWORD *)((char *)a2 + v6 + 128) = *(_OWORD *)(v7 + 136) )
  {
    if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5) )
      WdLogSingleEntry0(1LL);
    v6 = 140LL * (unsigned int)v5;
    *(_DWORD *)((char *)a2 + v6 + 4) = v5;
    *(_DWORD *)((char *)a2 + v6 + 8) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5) + 12LL);
    ConvertMonitorCapablitiesOrigin(
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5) + 8LL),
      (struct _DMM_MONITORDESCRIPTORSET_SERIALIZATION *)((char *)a2 + v6 + 12));
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5);
    v5 = (unsigned int)(v5 + 1);
    *(_OWORD *)((char *)a2 + v6 + 16) = *(_OWORD *)(v7 + 24);
    *(_OWORD *)((char *)a2 + v6 + 32) = *(_OWORD *)(v7 + 40);
    *(_OWORD *)((char *)a2 + v6 + 48) = *(_OWORD *)(v7 + 56);
    *(_OWORD *)((char *)a2 + v6 + 64) = *(_OWORD *)(v7 + 72);
    *(_OWORD *)((char *)a2 + v6 + 80) = *(_OWORD *)(v7 + 88);
    *(_OWORD *)((char *)a2 + v6 + 96) = *(_OWORD *)(v7 + 104);
    *(_OWORD *)((char *)a2 + v6 + 112) = *(_OWORD *)(v7 + 120);
  }
}
