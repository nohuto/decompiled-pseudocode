__int64 __fastcall sub_14081A50C(__int64 a1, const void *a2, _DWORD *a3, void *a4, unsigned int a5, _DWORD *a6)
{
  void *v8; // rax
  unsigned __int16 *v9; // rdx

  v8 = bsearch(a2, (const void *)(a1 + 24), *(unsigned int *)(a1 + 46824), 0x10uLL, sub_140831820);
  if ( v8 )
  {
    v9 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
    *a6 = v9[3];
    if ( a3 )
      *a3 = v9[2];
    if ( v9[3] > a5 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      if ( a4 )
        memmove(a4, (char *)v9 + v9[1] + 16, v9[3]);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
}
