/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0173A30
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E3A58 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02179AC (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0255090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0002E48 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0002F00 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E0528 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C016D7B8 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0212318 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  PERESOURCE *v11; // rdx
  char v12; // r14
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // esi
  PERESOURCE *v16; // rcx
  __int64 v17; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v19 + 24) = 2978LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v20 + 24) = 2979LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v21 + 24) = 2980LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v10 = WdLogNewEntry5_WdEvent(v9, v8);
  *(_QWORD *)(v10 + 24) = a2;
  WdLogEvent5_WdEvent(v10);
  v12 = 0;
  v13 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v11 = (PERESOURCE *)*((_QWORD *)a2 + 231);
      if ( v11 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v14 = 496LL * v13;
        if ( a2 == (struct DXGDEVICE *)this[14][v14 + 86] )
        {
          if ( this[2] != v11 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v14 * 8, v11);
            *(_QWORD *)(v22 + 24) = 2998LL;
            WdLogEvent5_WdAssertion(v22);
          }
          if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v13) )
            break;
        }
      }
      if ( ++v13 >= *((_DWORD *)this + 20) )
        goto LABEL_12;
    }
    v12 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, 0xFFFFFFFD, 0);
  }
LABEL_12:
  v15 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v16 = this[14];
      v17 = 496LL * v15;
      if ( a2 == (struct DXGDEVICE *)v16[v17 + 88] )
        break;
      if ( a2 == (struct DXGDEVICE *)v16[v17 + 86] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 231) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v16, v11);
          *(_QWORD *)(v24 + 24) = 3031LL;
          WdLogEvent5_WdAssertion(v24);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v15);
LABEL_20:
        ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v15);
      }
      if ( ++v15 >= *((_DWORD *)this + 20) )
        return v12;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 231) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16, v11);
      *(_QWORD *)(v23 + 24) = 3024LL;
      WdLogEvent5_WdAssertion(v23);
      v16 = this[14];
    }
    v16[v17 + 88] = 0LL;
    goto LABEL_20;
  }
  return v12;
}
