void __fastcall CEffectCompilationTask::~CEffectCompilationTask(CEffectCompilationTask *this)
{
  unsigned int v2; // edx
  __int64 v3; // rsi
  __int64 *v4; // rdi
  OLECHAR *v5; // rcx
  CCompiledEffectCache *v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel_RenderThread(this);
  v3 = *((_QWORD *)this + 1);
  v4 = (__int64 *)((char *)this + 48);
  if ( !*(_BYTE *)(v3 + 72) )
  {
    v9 = *v4;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
      (_QWORD *)(v3 + 112),
      &v8);
  }
  v5 = (OLECHAR *)*((_QWORD *)this + 10);
  if ( v5 )
    SysFreeString(v5);
  v6 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
  if ( v6 )
    CCompiledEffectCache::`scalar deleting destructor'(v6, v2);
  v7 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
