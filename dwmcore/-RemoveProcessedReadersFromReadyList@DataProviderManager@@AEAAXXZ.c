void __fastcall DataProviderManager::RemoveProcessedReadersFromReadyList(DataProviderManager *this)
{
  char *v1; // rdx
  _QWORD *v2; // rsi
  char *i; // rdi
  __int64 v5; // rdx
  char *j; // rax
  size_t v7; // rbx

  v1 = (char *)*((_QWORD *)this + 14);
  v2 = (_QWORD *)((char *)this + 104);
  for ( i = (char *)*((_QWORD *)this + 13); i != v1 && (*(_BYTE *)(*(_QWORD *)i + 80LL) & 2) != 0; i += 8 )
    ;
  if ( i != v1 )
  {
    for ( j = i + 8; j != v1; j += 8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)j + 80LL) & 2) != 0 )
      {
        *(_QWORD *)i = *(_QWORD *)j;
        i += 8;
      }
    }
    if ( i != v1 )
    {
      v7 = *((_QWORD *)this + 14) - (_QWORD)v1;
      memmove_0(i, v1, v7);
      *((_QWORD *)this + 14) = &i[v7];
    }
  }
  v5 = v2[1];
  if ( v5 != v2[2] )
  {
    if ( *v2 == v5 )
      std::vector<CDataSourceReader *>::_Tidy(v2);
    else
      std::vector<CDataSourceReader *>::_Reallocate_exactly(v2, (v5 - *v2) >> 3);
  }
}
