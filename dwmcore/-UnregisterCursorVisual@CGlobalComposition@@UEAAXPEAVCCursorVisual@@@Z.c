void __fastcall CGlobalComposition::UnregisterCursorVisual(CGlobalComposition *this, struct CCursorVisual *a2)
{
  struct CCursorVisual **v2; // r8
  char *v3; // rdi
  struct CCursorVisual **i; // rbx
  struct CCursorVisual **j; // rax
  char *v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  char *v10; // rax
  size_t v11; // rbx

  v2 = (struct CCursorVisual **)*((_QWORD *)this + 171);
  v3 = (char *)this + 1360;
  for ( i = (struct CCursorVisual **)*((_QWORD *)this + 170); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    for ( j = i + 1; j != v2; ++j )
    {
      if ( *j != a2 )
        *i++ = *j;
    }
  }
  v6 = *(char **)v3;
  v7 = *((_QWORD *)this + 171);
  v8 = ((__int64)i - *(_QWORD *)v3) >> 3;
  v9 = (v7 - *((_QWORD *)this + 170)) >> 3;
  if ( v8 >= v9 )
  {
    if ( v8 <= v9 )
      return;
    if ( v8 > (__int64)(*((_QWORD *)v3 + 2) - (_QWORD)v6) >> 3 )
    {
      std::vector<CCursorVisual *>::_Resize_reallocate<std::_Value_init_tag>((const void **)v3, v8);
      return;
    }
    v11 = 8 * (v8 - v9);
    memset_0(*((void **)v3 + 1), 0, v11);
    v10 = (char *)(v11 + v7);
  }
  else
  {
    v10 = &v6[8 * v8];
  }
  *((_QWORD *)v3 + 1) = v10;
}
