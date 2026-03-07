float __fastcall CExpressionManager::GetGlobalPlaybackRate(CExpressionManager *this, struct CChannelContext *a2)
{
  char *v3; // rdi
  unsigned __int64 appended; // rax
  __int64 v5; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CChannelContext *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( !a2 )
    return *(float *)&FLOAT_1_0;
  v3 = (char *)this + 464;
  appended = std::_Fnv1a_append_bytes((unsigned __int64)this, (const unsigned __int8 *const)&v8, 8uLL);
  v5 = *(_QWORD *)(std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Find_last<CChannelContext *>(
                     v3,
                     v7,
                     &v8,
                     appended)
                 + 8);
  if ( !v5 )
    v5 = *((_QWORD *)v3 + 1);
  if ( v5 == *((_QWORD *)this + 59) )
    return *(float *)&FLOAT_1_0;
  else
    return *(float *)(v5 + 24);
}
