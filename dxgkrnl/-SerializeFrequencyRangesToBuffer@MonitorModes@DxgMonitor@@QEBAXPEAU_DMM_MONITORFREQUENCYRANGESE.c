void __fastcall DxgMonitor::MonitorModes::SerializeFrequencyRangesToBuffer(
        DxgMonitor::MonitorModes *this,
        struct _DMM_MONITORFREQUENCYRANGESET_SERIALIZATION *a2,
        unsigned int a3)
{
  DxgMonitor::MonitorModes *v5; // rax
  char *v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  DxgMonitor::MonitorModes *v9; // rax

  if ( (unsigned int)DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes((struct _ERESOURCE *)this) <= a3 )
  {
    *(_BYTE *)a2 = *((_BYTE *)this + 168);
    v5 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 22);
    if ( v5 != (DxgMonitor::MonitorModes *)((char *)this + 176) )
    {
      v6 = (char *)v5 - 48;
      v7 = 0;
      if ( !v5 )
        v6 = 0LL;
      while ( v6 )
      {
        if ( v7 >= *((_DWORD *)this + 42) )
          break;
        v8 = 6LL * v7;
        *(_OWORD *)((char *)a2 + 8 * v8 + 8) = *(_OWORD *)v6;
        *(_OWORD *)((char *)a2 + 8 * v8 + 24) = *((_OWORD *)v6 + 1);
        *(_OWORD *)((char *)a2 + 8 * v8 + 40) = *((_OWORD *)v6 + 2);
        v9 = (DxgMonitor::MonitorModes *)*((_QWORD *)v6 + 6);
        if ( v9 == (DxgMonitor::MonitorModes *)((char *)this + 176) )
          break;
        v6 = (char *)v9 - 48;
        if ( !v9 )
          v6 = 0LL;
        ++v7;
      }
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
  }
}
