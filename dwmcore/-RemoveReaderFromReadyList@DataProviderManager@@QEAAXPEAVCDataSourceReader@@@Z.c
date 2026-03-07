void __fastcall DataProviderManager::RemoveReaderFromReadyList(DataProviderManager *this, struct CDataSourceReader *a2)
{
  struct CDataSourceReader **v2; // r8
  _QWORD *v3; // rbx
  struct CDataSourceReader **i; // rcx
  struct CDataSourceReader **j; // rax
  __int64 v7; // rdx

  v2 = (struct CDataSourceReader **)*((_QWORD *)this + 14);
  v3 = (_QWORD *)((char *)this + 104);
  for ( i = (struct CDataSourceReader **)*((_QWORD *)this + 13); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    for ( j = i + 1; j != v2; ++j )
    {
      if ( *j != a2 )
        *i++ = *j;
    }
  }
  memmove_0(i, i + 1, *((_QWORD *)this + 14) - (_QWORD)(i + 1));
  *((_QWORD *)this + 14) -= 8LL;
  v7 = *((_QWORD *)this + 14);
  if ( v7 != v3[2] )
  {
    if ( *v3 == v7 )
      std::vector<CDataSourceReader *>::_Tidy(v3);
    else
      std::vector<CDataSourceReader *>::_Reallocate_exactly(v3, (v7 - *v3) >> 3);
  }
}
