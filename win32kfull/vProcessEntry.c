__int64 __fastcall vProcessEntry(unsigned __int16 *a1, __int64 a2, void *a3)
{
  unsigned __int16 *v3; // rax
  unsigned __int16 *v5; // rcx
  unsigned int v6; // edi
  _WORD *v9; // rbx
  __int64 v10; // rsi

  v3 = a1;
  v5 = a1 + 32;
  v6 = 0;
  if ( *v3 )
  {
    while ( v3 < v5 )
    {
      v9 = v3 + 1;
      if ( *v3 == 44 )
      {
        if ( v3 == (unsigned __int16 *)-2LL )
          goto LABEL_6;
        v10 = v9 - a1;
        vCheckCharSet(a2, v3 + 1);
        goto LABEL_9;
      }
      ++v3;
      if ( !*v9 )
        break;
    }
  }
  v9 = 0LL;
LABEL_6:
  LODWORD(v10) = 32;
  *(_WORD *)(a2 + 64) = 257;
LABEL_9:
  cCapString(a2, a1, (unsigned int)v10);
  if ( a3 )
  {
    if ( v9 )
    {
      memmove(a3, a1, 2LL * (int)v10 - 2);
      *((_WORD *)a3 + (int)v10 - 1) = 0;
    }
    else
    {
      return (unsigned int)StringCchCopyW((unsigned __int16 *)a3, (int)v10, a1);
    }
  }
  return v6;
}
