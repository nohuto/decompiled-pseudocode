/*
 * XREFs of ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801E4760
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x1800A08FC (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18000C168 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18000CA88 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000CCFC (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::OnDestroyingReceivingVisual(CProjectedShadowReceiver *this)
{
  CProjectedShadowScene **v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 **ReceiverEntry; // rax

  *((_QWORD *)this + 7) = 0LL;
  CProjectedShadowReceiver::InvalidateMaskContent(this);
  v2 = (CProjectedShadowScene **)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 9) - (_QWORD)v2 + 7LL) >> 3;
  if ( (unsigned __int64)v2 > *((_QWORD *)this + 9) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(*v2, this);
      ReceiverEntry[3] = 0LL;
      std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(ReceiverEntry + 1);
      ++v3;
      ++v2;
    }
    while ( v3 != v4 );
  }
}
