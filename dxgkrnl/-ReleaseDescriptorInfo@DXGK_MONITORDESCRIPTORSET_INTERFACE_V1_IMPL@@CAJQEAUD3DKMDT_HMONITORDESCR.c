__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::ReleaseDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int MonitorFromHandle; // eax
  PERESOURCE v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15; // edi
  struct _ERESOURCE *v16; // rbx
  struct _ERESOURCE *Flink; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v18; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v19; // rdx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR **DataSize; // rcx
  int v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h]
  char v23; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+50h] [rbp+10h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 7030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7030);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 7030);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    Resource = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&Resource);
    if ( MonitorFromHandle == -1073741816 )
    {
      WdLogSingleEntry1(2LL, a1);
      v15 = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
        WdLogSingleEntry0(1LL);
      v11 = Resource;
      if ( !Resource )
        WdLogSingleEntry0(1LL);
      RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        &Resource,
        (struct _ERESOURCE *)v11[2].SystemResourcesList.Blink,
        1);
      v16 = Resource;
      Flink = *(struct _ERESOURCE **)&Resource[1].ActiveEntries;
      if ( Flink == (struct _ERESOURCE *)&Resource[1].ActiveEntries )
      {
LABEL_28:
        WdLogSingleEntry2(2LL, a2, Resource);
        v15 = -1071774928;
      }
      else
      {
        v18 = a2 + 1;
        while ( Flink != (struct _ERESOURCE *)v18 )
        {
          if ( &Resource[1].ActiveEntries == (ULONG *)Flink )
            goto LABEL_28;
          Flink = (struct _ERESOURCE *)Flink->SystemResourcesList.Flink;
        }
        v19 = *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)&v18->Id;
        if ( *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)(*(_QWORD *)&v18->Id + 8LL) != v18
          || (DataSize = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)a2[1].DataSize, *DataSize != v18) )
        {
          __fastfail(3u);
        }
        *DataSize = v19;
        v19->DataSize = (SIZE_T)DataSize;
        operator delete(a2);
        v15 = 0;
      }
      if ( v16 )
      {
        ExReleaseResourceLite(v16);
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    v15 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v21);
  }
  return v15;
}
