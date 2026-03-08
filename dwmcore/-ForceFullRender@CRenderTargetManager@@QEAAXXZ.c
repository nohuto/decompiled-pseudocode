/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800F8868
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005035C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800F87E0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x180100B58 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x1801B16E4 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801B209C (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi

  *((_BYTE *)this + 576) = 1;
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  for ( i = (_QWORD *)*((_QWORD *)this + 1); i != v2; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 224LL))(*i);
  CRenderTargetManager::EndTargetEnumeration(this);
}
