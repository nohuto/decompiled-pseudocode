char **__fastcall CVisualTreePath::GetDebugString(_QWORD *a1, char **a2, __int64 a3)
{
  unsigned __int64 i; // r15
  const void **v6; // rax
  __int64 v7; // r8
  void *v8; // rbx
  unsigned __int64 Size; // rsi
  __int64 v10; // rcx
  char **v11; // rdi
  char *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  char **v15; // rax
  const char *v16; // rdx
  void *Src; // [rsp+30h] [rbp-30h] BYREF
  char *v19[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  unsigned __int64 v21; // [rsp+50h] [rbp-10h]

  std::string::string(v19, word_180338FC0, a3);
  for ( i = 0LL; i < (__int64)(a1[1] - *a1) >> 4; ++i )
  {
    v6 = (const void **)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
                          a1,
                          i);
    DwmDbg::DbgString::DbgString((char **)&Src, "{0x%p, 0x%p}", *v6, v6[1]);
    v8 = Src;
    Size = -1LL;
    do
      ++Size;
    while ( *((_BYTE *)Src + Size) );
    v10 = v20;
    if ( Size > v21 - v20 )
    {
      std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
        (void **)v19,
        Size,
        v7,
        Src,
        Size);
    }
    else
    {
      v11 = v19;
      v20 += Size;
      if ( v21 >= 0x10 )
        v11 = (char **)v19[0];
      v12 = (char *)v11 + v10;
      memmove_0(v12, Src, Size);
      v12[Size] = 0;
    }
    if ( v8 )
      operator delete(v8);
    if ( i < ((__int64)(a1[1] - *a1) >> 4) - 1 )
    {
      v14 = v20;
      if ( v21 - v20 < 4 )
      {
        std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
          (void **)v19,
          4uLL,
          v13,
          " -> ",
          4uLL);
      }
      else
      {
        v20 += 4LL;
        v15 = v19;
        if ( v21 >= 0x10 )
          v15 = (char **)v19[0];
        strcpy((char *)v15 + v14, " -> ");
      }
    }
  }
  v16 = (const char *)v19;
  if ( v21 >= 0x10 )
    v16 = v19[0];
  DwmDbg::DbgString::DbgString(a2, v16);
  if ( v21 >= 0x10 )
    std::_Deallocate<16,0>(v19[0], v21 + 1);
  return a2;
}
