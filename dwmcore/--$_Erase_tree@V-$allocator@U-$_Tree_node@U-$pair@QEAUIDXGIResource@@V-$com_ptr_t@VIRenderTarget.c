/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801BB1C4
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801BB1C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUIDXGIResource@@V-$com_ptr_t@VIRenderTarget.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1801EB9A8 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801EC890 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801BB1C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUIDXGIResource@@V-$com_ptr_t@VIRenderTarget.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v6 + 40);
      std::_Deallocate<16,0>(v6, 0x30uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
