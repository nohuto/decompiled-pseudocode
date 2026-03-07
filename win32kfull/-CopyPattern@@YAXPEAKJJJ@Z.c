void __fastcall CopyPattern(unsigned int *a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v4; // r10
  unsigned int v5; // eax
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r10
  unsigned int *v8; // rcx

  v4 = &a1[a2];
  if ( (a2 & 1) != 0 )
  {
    *a1++ = a4;
    if ( !--a2 )
      return;
    v5 = a4;
    a4 = a3;
    a3 = v5;
  }
  v6 = (unsigned __int64)(v4 - 2);
  if ( (a2 & 2) != 0 )
  {
    while ( (unsigned __int64)a1 <= v6 )
    {
      *a1 = a4;
      a1[1] = a3;
      a1 += 2;
    }
  }
  else
  {
    v7 = v6 - 8;
    if ( (unsigned __int64)a1 <= v7 )
    {
      v8 = a1 + 2;
      do
      {
        *(v8 - 2) = a4;
        *(v8 - 1) = a3;
        *v8 = a4;
        v8[1] = a3;
        v8 += 4;
      }
      while ( (unsigned __int64)(v8 - 2) <= v7 );
    }
  }
}
