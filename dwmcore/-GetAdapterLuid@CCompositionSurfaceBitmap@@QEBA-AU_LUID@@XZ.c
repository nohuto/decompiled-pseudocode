/*
 * XREFs of ?GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA?AU_LUID@@XZ @ 0x18021F7E0
 * Callers:
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18021F57C (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18021F830 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x180252660 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CCompositionSurfaceBitmap::GetAdapterLuid(CCompositionSurfaceBitmap *this, struct _LUID *a2)
{
  __int64 v2; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 13);
  *a2 = g_luidZero;
  if ( v2 )
    *a2 = *(struct _LUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 80LL))(v2, &v5);
  return (struct _LUID)a2;
}
