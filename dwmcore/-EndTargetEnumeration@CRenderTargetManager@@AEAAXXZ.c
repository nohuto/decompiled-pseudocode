/*
 * XREFs of ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800F88D0
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18004FEF0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x180053430 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F8758 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800F8868 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x18010A114 (-UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x1801BA6A4 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CRenderTargetManager::EndTargetEnumeration(CRenderTargetManager *this)
{
  struct CRenderTarget **v2; // rbp
  struct CRenderTarget **i; // rbx

  *((_BYTE *)this + 576) = 0;
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 7); i != v2; ++i )
    CRenderTargetManager::RemoveRenderTarget(this, *i);
  std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::clear((char *)this + 56);
}
