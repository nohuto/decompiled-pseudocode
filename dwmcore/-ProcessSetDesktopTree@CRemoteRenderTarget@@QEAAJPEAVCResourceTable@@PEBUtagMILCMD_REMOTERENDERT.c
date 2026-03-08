/*
 * XREFs of ?ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE@@@Z @ 0x18010AA44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1800C6CB0 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C6DFC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::ProcessSetDesktopTree(
        CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisualTree *Resource; // rdi
  __int64 v8; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CVisualTree *)CResourceTable::GetResource((__int64)a2, v5, 0x35u)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x28u, 0LL);
  }
  else
  {
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(this + 24, (__int64)Resource);
    CRenderTarget::SetVisualTree((CRenderTarget *)this, Resource);
  }
  return v4;
}
