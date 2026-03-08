/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801EC890
 * Callers:
 *     ?NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C2920 (-NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1801EB9A8 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801EC0A4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z @ 0x1801EC444 (-ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRE.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EC52C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EC648 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EC794 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801BB1C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUIDXGIResource@@V-$com_ptr_t@VIRenderTarget.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E6CD0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1801EBFD0 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  _QWORD *v2; // rsi
  char *v3; // r14
  __int64 *j; // rbx
  __int64 v5; // rcx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx
  _QWORD *v9; // rbx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  v2 = (_QWORD *)((char *)this + 1936);
  if ( *((_QWORD *)this + 243) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v11, &v10);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(*(_QWORD *)*v2 + 64LL))(*v2, v10, v11);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 243) + 16LL))(*((_QWORD *)this + 243));
    *((_QWORD *)this + 243) = 0LL;
  }
  v3 = (char *)this + 1880;
  j = (__int64 *)**((_QWORD **)this + 235);
  while ( !*((_BYTE *)j + 25) )
  {
    v5 = j[5] + 8 + *(int *)(*(_QWORD *)(j[5] + 8) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(
      v5,
      ((unsigned __int64)this + 1872) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v9 = *(_QWORD **)v3;
  std::_Tree_val<std::_Tree_simple_types<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 1880,
    (__int64)this + 1880,
    *(_QWORD *)(*(_QWORD *)v3 + 8LL));
  v9[1] = v9;
  *v9 = v9;
  v9[2] = v9;
  *((_QWORD *)this + 236) = 0LL;
  if ( *v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    *v2 = 0LL;
  }
  *((_BYTE *)this + 1756) = 0;
  *((_WORD *)this + 964) = 0;
  *((_BYTE *)this + 1930) = 0;
  *((_DWORD *)this + 480) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1896, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
}
