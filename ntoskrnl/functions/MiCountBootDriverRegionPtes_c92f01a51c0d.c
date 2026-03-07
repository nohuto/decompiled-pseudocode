__int64 __fastcall MiCountBootDriverRegionPtes(__int64 a1, unsigned __int64 a2, int a3)
{
  char v5; // al
  unsigned int v6; // edx
  __int64 v8; // rcx
  __int64 v9; // r9

  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = 1;
  if ( (v5 & 1) != 0 )
  {
    v8 = 0LL;
    if ( v5 < 0 )
    {
      v8 = 1LL;
      if ( a3 > 1 )
      {
        v9 = (unsigned int)(a3 - 1);
        do
        {
          v8 <<= 9;
          --v9;
        }
        while ( v9 );
      }
    }
    else if ( a3 > 1 )
    {
      v6 = 0;
    }
    else
    {
      v8 = a3 == 1;
    }
    **(_QWORD **)(a1 + 168) += v8;
  }
  return v6;
}
