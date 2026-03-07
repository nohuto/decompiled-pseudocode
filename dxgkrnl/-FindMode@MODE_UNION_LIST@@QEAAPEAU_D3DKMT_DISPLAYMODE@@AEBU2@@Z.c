struct _D3DKMT_DISPLAYMODE *__fastcall MODE_UNION_LIST::FindMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi

  v2 = 0;
  if ( !*((_DWORD *)this + 4) )
    return 0LL;
  while ( 1 )
  {
    v5 = *((_QWORD *)this + 1) + 44LL * v2;
    if ( operator==(&a2->Width, v5) )
      break;
    if ( ++v2 >= *((_DWORD *)this + 4) )
      return 0LL;
  }
  return (struct _D3DKMT_DISPLAYMODE *)v5;
}
