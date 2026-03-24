/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C02FA8A0
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C02F7560 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0180C48 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rdi
  DXGMONITOR *v9; // rax
  D3DKMDT_MONITOR_DESCRIPTOR_ID v10; // eax
  __int64 v12; // rbp
  __int64 v13; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR **v22; // rcx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v23; // rax
  __int64 v24; // rax

  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (char *)v5 + 192;
  if ( !a2 )
    goto LABEL_27;
  v9 = *(DXGMONITOR **)v8;
  if ( *(char **)v8 == v8 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v9 != this )
  {
    if ( v8 == (char *)v9 )
      goto LABEL_27;
    v9 = *(DXGMONITOR **)v9;
  }
  this = (DXGMONITOR *)*((unsigned int *)v5 + 32);
  if ( (unsigned int)this <= a2->Id )
  {
LABEL_27:
    v24 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v24 + 24) = a2;
    *(_QWORD *)(v24 + 32) = v5;
    WdLogEvent5_WdError(v24);
    return 3223192368LL;
  }
  v10 = a2->Id + 1;
  if ( (unsigned int)this <= v10 )
  {
LABEL_13:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = v5;
    *a3 = 0LL;
    return 0LL;
  }
  if ( a2->Id == -1 )
  {
    v12 = *((_QWORD *)v5 + 18);
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL * v10);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, a2);
    WdLogEvent5_WdAssertion(v13);
LABEL_19:
    if ( !v12 )
      goto LABEL_13;
  }
  v14 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v17 = v14;
  if ( v14 )
  {
    v14->Id = a2->Id + 1;
    v14->Type = *(_DWORD *)(v12 + 12);
    v14->DataSize = *(_QWORD *)(v12 + 16);
    v14->pData = (void *)(v12 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v12 + 8), &v14->Origin) < 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = (struct _D3DKMDT_MONITOR_DESCRIPTOR **)*((_QWORD *)v8 + 1);
    v23 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v17[1];
    if ( *v22 != (struct _D3DKMDT_MONITOR_DESCRIPTOR *)v8 )
      __fastfail(3u);
    *(_QWORD *)&v23->Id = v8;
    v17[1].DataSize = (SIZE_T)v22;
    *v22 = v23;
    *((_QWORD *)v8 + 1) = v23;
    *a3 = v17;
    return 0LL;
  }
  v18 = WdLogNewEntry5_WdError(v16, v15);
  WdLogEvent5_WdError(v18);
  return 3221225495LL;
}
