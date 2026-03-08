/*
 * XREFs of ?SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0002104
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SetCurrentVirtualMode(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax

  v3 = 4000LL * a2;
  if ( a3 )
  {
    *(struct _D3DKMT_DISPLAYMODE *)(*((_QWORD *)this + 16) + v3 + 644) = *a3;
  }
  else
  {
    v4 = *((_QWORD *)this + 16);
    *(_OWORD *)(v4 + v3 + 644) = 0LL;
    *(_OWORD *)(v4 + v3 + 660) = 0LL;
    *(_QWORD *)(v4 + v3 + 676) = 0LL;
    *(_DWORD *)(v4 + v3 + 684) = 0;
  }
  *(_DWORD *)(v3 + *((_QWORD *)this + 16) + 1120) = -1;
}
