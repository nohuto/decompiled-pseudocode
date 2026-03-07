void __fastcall CWeakResourceReference::OnResourceDestroyed(CWeakResourceReference *this)
{
  char *v1; // rbx
  __int64 v3; // rdx
  _QWORD *i; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = (char *)this + 16;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
    (__int64)this,
    (__int64)this + 16);
  *(_DWORD *)(*(_QWORD *)v1 + 32LL) &= ~8u;
  *(_QWORD *)v1 = 0LL;
  (**(void (__fastcall ***)(CWeakResourceReference *))this)(this);
  v6 = 0LL;
  v3 = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
  v5 = 0LL;
  std::vector<CResource *>::_Construct_n<CResource * * const &,CResource * * const &>(&v5, v3);
  for ( i = (_QWORD *)v5; i != *((_QWORD **)&v5 + 1); ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 72LL))(*i, 0LL, 0LL);
  std::vector<CResource *>::_Tidy(&v5);
  (*(void (__fastcall **)(CWeakResourceReference *))(*(_QWORD *)this + 8LL))(this);
}
