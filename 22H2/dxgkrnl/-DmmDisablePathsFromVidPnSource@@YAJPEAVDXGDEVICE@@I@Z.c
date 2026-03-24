/*
 * XREFs of ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1F48
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C00DFF10 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E316C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E68A0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1FF0 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax

  v2 = *((_QWORD *)a1 + 231);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v17);
  }
  v7 = *(ADAPTER_DISPLAY **)(v2 + 2696);
  if ( (*(_DWORD *)(v2 + 348) & 0x100) != 0
    || (v8 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v7, v4, 0, 0x40u, 0), v11 = v8, v8 >= 0) )
  {
    v12 = ADAPTER_DISPLAY::DestroyCddAllocations(v7, a1, v4);
    v15 = v12;
    if ( v12 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v19[3] = v4;
      v19[4] = v2;
      v19[5] = v15;
      WdLogEvent5_WdError(v19);
    }
    return 0LL;
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v18[3] = v4;
    v18[4] = v2;
    v18[5] = v11;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v11;
  }
}
