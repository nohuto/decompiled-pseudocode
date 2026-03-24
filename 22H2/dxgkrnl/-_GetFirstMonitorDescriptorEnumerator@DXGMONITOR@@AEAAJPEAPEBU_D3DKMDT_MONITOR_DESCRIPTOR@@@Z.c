/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02FA5FC
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02F6F40 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0180C48 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  char *v16; // rbx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v17; // rax
  char **v18; // rcx

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 32) )
  {
    v5 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdDmmEvent(v5);
LABEL_5:
    *a2 = 0LL;
    return 0LL;
  }
  v6 = *((_QWORD *)this + 18);
  if ( !v6 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    goto LABEL_5;
  }
  v7 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v10 = v7;
  if ( !v7 )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    WdLogEvent5_WdError(v11);
    return 3221225495LL;
  }
  v7->Id = 0;
  v7->Type = *(_DWORD *)(v6 + 12);
  v7->DataSize = *(_QWORD *)(v6 + 16);
  v7->pData = (void *)(v6 + 24);
  if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v6 + 8), &v7->Origin) < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = (char *)this + 192;
  v17 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v10[1];
  v18 = (char **)*((_QWORD *)v16 + 1);
  if ( *v18 != v16 )
    __fastfail(3u);
  *(_QWORD *)&v17->Id = v16;
  v10[1].DataSize = (SIZE_T)v18;
  *v18 = (char *)v17;
  *((_QWORD *)v16 + 1) = v17;
  *a2 = v10;
  return 0LL;
}
