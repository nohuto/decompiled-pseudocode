/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C036CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E74 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005AA68 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_GPUP *this)
{
  struct _KTHREAD **v2; // rcx

  if ( *((_QWORD *)this + 12) )
  {
    v2 = (struct _KTHREAD **)*((_QWORD *)this + 13);
    if ( v2 )
    {
      DXGVIRTUALMACHINE::RemoveVirtualGpu(v2, (struct _LIST_ENTRY *)((char *)this + 136));
      *((_QWORD *)this + 13) = 0LL;
    }
    DXGPROCESS::ReleaseReference(*((DXGPROCESS **)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
}
