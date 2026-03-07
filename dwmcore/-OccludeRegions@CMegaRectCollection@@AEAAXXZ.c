void __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  __int64 v1; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 i; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  v3 = *(__int64 **)this;
  v4 = v1;
  v13[1] = 0LL;
  v13[0] = v3;
  while ( 1 )
  {
    v5 = *((_QWORD *)this + 4);
    v13[2] = v1;
    if ( v1 == v5 + v4 )
      break;
    if ( v3 )
      v6 = *v3;
    else
      v6 = 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * (v1 & (*(_QWORD *)(v6 + 16) - 1LL))) + 8LL) )
    {
      v7 = 0;
      for ( i = v1 + 1; ; ++i )
      {
        v4 = *((_QWORD *)this + 3);
        if ( i == v4 + v5 || v7 >= CCommonRegistryData::MegaRectSearchCount )
          break;
        if ( v3 )
          v9 = *v3;
        else
          v9 = 0LL;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * (i & (*(_QWORD *)(v9 + 16) - 1LL))) + 8LL) )
        {
          v10 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->(v13);
          if ( v3 )
            v11 = *v3;
          else
            v11 = 0LL;
          v12 = FastRegion::CRegion::Subtract(
                  *(FastRegion::CRegion **)(v10 + 8),
                  *(const struct CRegion **)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * (i & (*(_QWORD *)(v11 + 16) - 1LL)))
                                           + 8LL));
          if ( v12 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
          v5 = *((_QWORD *)this + 4);
        }
        ++v7;
      }
    }
    ++v1;
  }
}
