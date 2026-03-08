/*
 * XREFs of ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C02B98B4
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C02B676C (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C02BAD1C (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall PostCompositionConfigsMatch(
        struct _POST_COMPOSITION_CONFIG *a1,
        char a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v4; // r10

  v4 = 0;
  if ( !a2 )
    return *(_BYTE *)a1 == 0;
  if ( *((_DWORD *)a1 + 1) == a3->left
    && *((_DWORD *)a1 + 3) == a3->right
    && *((_DWORD *)a1 + 2) == a3->top
    && *((_DWORD *)a1 + 4) == a3->bottom
    && *((_DWORD *)a1 + 5) == a4->left
    && *((_DWORD *)a1 + 7) == a4->right
    && *((_DWORD *)a1 + 6) == a4->top )
  {
    return *((_DWORD *)a1 + 8) == a4->bottom;
  }
  return v4;
}
