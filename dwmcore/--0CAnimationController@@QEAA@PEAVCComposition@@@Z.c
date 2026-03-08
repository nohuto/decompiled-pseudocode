/*
 * XREFs of ??0CAnimationController@@QEAA@PEAVCComposition@@@Z @ 0x180022D04
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x180022DE8 (-OnPlaybackRateChanged@CAnimationController@@QEAAXXZ.c)
 *     ??$emplace@AEAPEAVIBatchProcessingCompleteListener@@@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@@std@@_N@1@AEAPEAVIBatchProcessingCompleteListener@@@Z @ 0x180023654 (--$emplace@AEAPEAVIBatchProcessingCompleteListener@@@-$_Hash@V-$_Uset_traits@PEAVIBatchProcessin.c)
 */

CAnimationController *__fastcall CAnimationController::CAnimationController(
        CAnimationController *this,
        struct CComposition *a2)
{
  __int64 v3; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  char *v6; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &CAnimationController::`vftable'{for `CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>'};
  *((_QWORD *)this + 14) = &CAnimationController::`vftable'{for `IBatchProcessingCompleteListener'};
  v3 = *((_QWORD *)this + 2);
  v6 = (char *)this + 112;
  std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::emplace<IBatchProcessingCompleteListener * &>(
    *(_QWORD *)(v3 + 424) + 592LL,
    v5,
    &v6);
  if ( 1.0 != *((float *)this + 21) )
  {
    *((_DWORD *)this + 21) = 1065353216;
    CAnimationController::OnPlaybackRateChanged(this);
  }
  return this;
}
