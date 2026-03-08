/*
 * XREFs of ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C6250
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176048 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C01C33B0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C62F8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  ADAPTER_DISPLAY *v5; // rbx
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax

  v2 = *((_QWORD *)a1 + 235);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
    WdLogSingleEntry0(1LL);
  v5 = *(ADAPTER_DISPLAY **)(v2 + 2920);
  if ( (*(_DWORD *)(v2 + 436) & 0x100) != 0
    || (v6 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v5, v4, 0, 64, 0), v7 = v6, v6 >= 0) )
  {
    v8 = ADAPTER_DISPLAY::DestroyCddAllocations(v5, a1, v4);
    if ( v8 < 0 )
      WdLogSingleEntry3(2LL, v4, v2, v8);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, v2, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to disable scanning from primary on source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
      v4,
      v2,
      v7,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
}
