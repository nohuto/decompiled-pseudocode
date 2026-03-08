/*
 * XREFs of ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801F627C
 * Callers:
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x1801E4580 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801EDC30 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1800C6CB0 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C6DFC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801F600C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801F687C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 */

__int64 __fastcall CDDARenderTarget::Create(
        struct IDXGIOutputDWM *a1,
        struct CDesktopTree *a2,
        const struct RenderTargetInfo *a3,
        const struct CMonitorTransform *a4,
        struct CDDARenderTarget **a5)
{
  CDDARenderTarget *v9; // rax
  __int64 v10; // rcx
  CDDARenderTarget *v11; // rax
  CDDARenderTarget *v12; // rdi
  unsigned int v13; // ebx

  *a5 = 0LL;
  v9 = (CDDARenderTarget *)DefaultHeap::AllocClear(0x868uLL);
  if ( v9 && (v11 = CDDARenderTarget::CDDARenderTarget(v9, a1, a3), (v12 = v11) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CDDARenderTarget *)((char *)v11 + 8));
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=((CResource **)v12 + 21, (__int64)a2);
    CRenderTarget::SetVisualTree(v12, a2);
    CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)v12 + 2) + 216LL), v12);
    v13 = 0;
    CDDARenderTarget::UpdateTransform(v12, a4);
    *a5 = v12;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v13;
}
