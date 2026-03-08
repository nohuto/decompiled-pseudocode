/*
 * XREFs of ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01DA758
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C0188A74 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B6E2C (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BBA68 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  if ( *((_BYTE *)this + 108) )
  {
    (*(void (__fastcall **)(_QWORD, struct DXGPROCESS *))(*(_QWORD *)(*((_QWORD *)a3 + 95) + 8LL) + 1184LL))(
      *((_QWORD *)a3 + 96),
      a2);
    *((_BYTE *)this + 108) = 0;
  }
}
