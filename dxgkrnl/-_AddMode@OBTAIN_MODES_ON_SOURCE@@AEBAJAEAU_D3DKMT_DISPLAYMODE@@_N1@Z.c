__int64 __fastcall OBTAIN_MODES_ON_SOURCE::_AddMode(
        OBTAIN_MODES_ON_SOURCE *this,
        struct _D3DKMT_DISPLAYMODE *a2,
        __int64 a3,
        char a4)
{
  MODE_UNION_LIST *v4; // rbp
  __int64 result; // rax
  unsigned int v8; // ebx
  int v9; // eax

  v4 = (OBTAIN_MODES_ON_SOURCE *)((char *)this + 64);
  result = MODE_UNION_LIST::AddUniqueMode((OBTAIN_MODES_ON_SOURCE *)((char *)this + 64), a2);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      ++a2->IntegerRefreshRate;
      *(_DWORD *)&a2->Flags |= 2u;
      v9 = MODE_UNION_LIST::AddUniqueMode(v4, a2);
      if ( v9 < 0 )
        return (unsigned int)v9;
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
