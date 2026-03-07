void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  void *v4; // rcx

  *(_QWORD *)this = &CBspNode::`vftable';
  ReleaseInterface<CBspNode>((__int64 *)this + 2);
  ReleaseInterface<CBspNode>((__int64 *)this + 3);
  v2 = (_QWORD *)*((_QWORD *)this + 5);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i != v2; ++i )
  {
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  }
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 6) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
