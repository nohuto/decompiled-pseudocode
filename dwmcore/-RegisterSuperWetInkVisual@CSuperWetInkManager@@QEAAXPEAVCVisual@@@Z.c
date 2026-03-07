void __fastcall CSuperWetInkManager::RegisterSuperWetInkVisual(CSuperWetInkManager *this, struct CVisual *a2)
{
  struct CVisual **i; // r8
  _BYTE *v4; // rdx
  struct CVisual *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  for ( i = (struct CVisual **)*((_QWORD *)this + 2); i != *((struct CVisual ***)this + 3); ++i )
  {
    if ( *i == a2 )
      return;
  }
  v4 = (_BYTE *)*((_QWORD *)this + 3);
  if ( v4 == *((_BYTE **)this + 4) )
  {
    std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>((_QWORD *)this + 2, v4, &v5);
  }
  else
  {
    *(_QWORD *)v4 = a2;
    *((_QWORD *)this + 3) += 8LL;
  }
}
