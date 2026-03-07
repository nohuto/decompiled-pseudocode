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
