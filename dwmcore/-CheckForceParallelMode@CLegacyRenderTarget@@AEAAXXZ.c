/*
 * XREFs of ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C8188
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E4810 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x1801E362C (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1801E3B40 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 */

void __fastcall CLegacyRenderTarget::CheckForceParallelMode(CLegacyRenderTarget *this)
{
  char v1; // bl
  struct CSyncLockGroup *Group; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 2321) )
  {
    if ( CCommonRegistryData::m_parallelModePolicy == 1 )
    {
      v1 = *((_BYTE *)this + 11497);
      if ( !v1 )
        goto LABEL_4;
    }
    else
    {
      if ( CCommonRegistryData::m_parallelModePolicy != 2 )
        goto LABEL_4;
      v1 = 1;
    }
    Group = CSyncLockGroup::GetGroup(0xFFFFFFFF);
    *((_QWORD *)this + 2321) = Group;
    *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 (char *)Group + 16,
                 (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = ((unsigned __int64)this + 144) & -(__int64)(this != 0LL);
  }
LABEL_4:
  *((_BYTE *)this + 18560) = v1;
}
