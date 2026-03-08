/*
 * XREFs of ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180004334
 * Callers:
 *     ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x18000419C (-ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJ.c)
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180004234 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 * Callees:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180003FF0 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000410C (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180004C28 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180005178 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180005244 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 */

void __fastcall CProjectedShadowReceiver::SetReceivingVisual(CVisual **this, struct CVisual *a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rsi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax

  if ( a2 != this[8] )
  {
    if ( this[8] )
    {
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
      v4 = (CProjectedShadowScene **)this[10];
      for ( i = (CProjectedShadowScene **)this[9]; i != v4; ++i )
      {
        ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(*i, (const struct CProjectedShadowReceiver *)this);
        *((_QWORD *)ReceiverEntry + 3) = 0LL;
        std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear((char *)ReceiverEntry + 8);
      }
      CVisual::RemoveProjectedShadowReceiver(this[8], (struct CProjectedShadowReceiver *)this);
    }
    this[8] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowReceiver(a2, (struct CProjectedShadowReceiver *)this);
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
    }
  }
}
