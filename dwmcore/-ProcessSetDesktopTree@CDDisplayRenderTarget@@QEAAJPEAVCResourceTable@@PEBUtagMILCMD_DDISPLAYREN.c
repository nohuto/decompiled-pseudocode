/*
 * XREFs of ?ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1801E54D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1800C6CB0 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C6DFC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessSetDesktopTree(
        CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE *a3)
{
  struct CVisualTree *Resource; // rbx
  unsigned int v5; // edx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = (struct CVisualTree *)CResourceTable::GetResource((__int64)a2, v5, 0x35u);
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(this + 22, (__int64)Resource);
  CRenderTarget::SetVisualTree((CRenderTarget *)this, Resource);
  return 0LL;
}
