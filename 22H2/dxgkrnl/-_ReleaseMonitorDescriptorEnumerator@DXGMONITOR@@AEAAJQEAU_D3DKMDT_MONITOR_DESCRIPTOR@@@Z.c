/*
 * XREFs of ?_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02FB5E8
 * Callers:
 *     ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02F8610 (-ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2)
{
  DXGMONITOR *v3; // rdi
  __int64 v4; // rax
  DXGMONITOR **v5; // rdx
  DXGMONITOR *v6; // rax
  DXGMONITOR *v7; // rdx
  DXGMONITOR **DataSize; // rax
  __int64 v10; // rax

  v3 = this;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (DXGMONITOR **)((char *)v3 + 192);
  if ( !a2 )
    goto LABEL_14;
  v6 = *v5;
  if ( *v5 == (DXGMONITOR *)v5 )
    goto LABEL_14;
  this = (DXGMONITOR *)&a2[1];
  while ( v6 != this )
  {
    if ( v5 == (DXGMONITOR **)v6 )
      goto LABEL_14;
    v6 = *(DXGMONITOR **)v6;
  }
  if ( *((_DWORD *)v3 + 32) <= a2->Id )
  {
LABEL_14:
    v10 = WdLogNewEntry5_WdError(this, v5);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v3;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  else
  {
    v7 = *(DXGMONITOR **)this;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this
      || (DataSize = (DXGMONITOR **)a2[1].DataSize, *DataSize != this) )
    {
      __fastfail(3u);
    }
    *DataSize = v7;
    *((_QWORD *)v7 + 1) = DataSize;
    operator delete(a2);
    return 0LL;
  }
}
