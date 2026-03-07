void __fastcall CResource::~CResource(CResource *this)
{
  bool v1; // zf
  struct _RTL_GENERIC_TABLE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  PVOID v6; // rax
  __int64 v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v1 = (*((_BYTE *)this + 32) & 8) == 0;
  *(_QWORD *)this = &CResource::`vftable';
  if ( !v1 )
  {
    RestartKey = this;
    v5 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
           (__int64)this,
           (__int64)v8,
           (__int64 *)&RestartKey);
    CWeakResourceReference::OnResourceDestroyed(*(CWeakResourceReference **)(*(_QWORD *)v5 + 24LL));
  }
  v3 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    while ( 1 )
    {
      RestartKey = 0LL;
      v6 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
      if ( !v6 )
        break;
      CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(v3, v6);
    }
    operator delete(v3, 0x48uLL);
  }
  if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
  {
    v7 = *((_QWORD *)this + 6);
    if ( v7 )
      CAnimationLoggingManager::RemoveResourceDebugInfo(*(CAnimationLoggingManager **)(v7 + 64), this);
  }
  v4 = *((_QWORD *)this + 3);
  if ( (v4 & 2) != 0 )
    operator delete((void *)(v4 & 0xFFFFFFFFFFFFFFFCuLL));
  *((_QWORD *)this + 3) = 0LL;
}
