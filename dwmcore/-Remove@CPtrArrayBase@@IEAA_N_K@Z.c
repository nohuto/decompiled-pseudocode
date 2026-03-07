char __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this, unsigned __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 *v6; // rax
  char v7; // cl
  unsigned __int64 v9; // rdx
  __int64 v10; // r10

  v2 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2) != 0 )
  {
    v6 = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = *v6;
  }
  else
  {
    v5 = *(_QWORD *)this & 1LL;
    v6 = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v7 = 0;
  if ( v5 == 1 )
  {
    if ( a2 == v6 )
    {
      *(_QWORD *)this = 0LL;
      return 1;
    }
  }
  else if ( v5 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( a2 == (unsigned __int64 *)v6[v10 + 2] )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 = (unsigned int)v9;
    }
    while ( (unsigned int)v9 < v5 );
    if ( v9 < v5 )
    {
      CPtrArrayBase::RemoveAt(this, v9, 1uLL);
      return 1;
    }
  }
  return v7;
}
