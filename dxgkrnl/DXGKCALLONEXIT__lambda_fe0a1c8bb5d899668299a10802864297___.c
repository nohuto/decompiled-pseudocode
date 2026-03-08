/*
 * XREFs of DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x1C00021A8
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01D5780 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01D5B30 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1

  result = a1;
  v3 = a2[1];
  *(_OWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 32) = 1;
  *(_OWORD *)(a1 + 16) = v3;
  return result;
}
