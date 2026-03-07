void __fastcall XLATE::vMapNewXlate(XLATE *this, struct _TRANSLATE *a2)
{
  __int64 v2; // r8
  _DWORD *v4; // rcx
  _DWORD *i; // rdx

  v2 = *((unsigned int *)this + 3);
  if ( a2 )
  {
    for ( i = (_DWORD *)((char *)this + 84); (_DWORD)v2; LODWORD(v2) = v2 - 1 )
    {
      *i = *((unsigned __int8 *)a2 + (unsigned int)*i + 4);
      ++i;
    }
  }
  else if ( (_DWORD)v2 )
  {
    v4 = (_DWORD *)((char *)this + 4 * v2 + 84);
    do
    {
      --v4;
      LODWORD(v2) = v2 - 1;
      if ( *v4 >= 0xAu )
        *v4 += 236;
    }
    while ( (_DWORD)v2 );
  }
}
