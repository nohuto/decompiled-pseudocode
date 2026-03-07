void __fastcall CChannelContext::~CChannelContext(CChannelContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  CChannelContext *v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CChannelContext::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v7 = this;
    std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::erase(
      (_QWORD *)(*(_QWORD *)(v3 + 424) + 464LL),
      (const unsigned __int8 *)&v7);
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  ReleaseInterface<CProcessAttribution>((char *)this + 48);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  operator delete(*((void **)this + 7));
  v6 = (void *)*((_QWORD *)this + 3);
  if ( v6 )
    operator delete(v6);
}
