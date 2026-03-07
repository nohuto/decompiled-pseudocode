__int64 __fastcall MiCopyToUntrustedMemory(_BYTE *a1, _BYTE *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r11d
  _BYTE *v5; // rdi
  _BYTE *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int i; // edx
  __int64 v11; // [rsp+40h] [rbp-28h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  v11 = 0LL;
  if ( a4 || (((unsigned __int8)a1 | (unsigned __int8)a2) & 7) != 0 || (a3 & 7) != 0 )
  {
    while ( v4 )
    {
      if ( a4 )
      {
        v8 = a4;
        if ( a4 > v4 )
          v8 = 1;
      }
      else
      {
        v8 = v4 & 7;
        if ( (v4 & 7) != 0 )
        {
          if ( ((v8 - 1) & v8) != 0 )
            v8 = 1;
        }
        else
        {
          v8 = 8;
        }
      }
      if ( ((v8 - 1) & (unsigned int)v6) != 0 )
        v8 = 1;
      for ( i = 0; i < v8; ++i )
      {
        *((_BYTE *)&v11 + i) = *v5++;
        v7 = v11;
      }
      switch ( v8 )
      {
        case 1u:
          *v6 = v7;
          break;
        case 2u:
          *(_WORD *)v6 = v7;
          break;
        case 4u:
          *(_DWORD *)v6 = v7;
          break;
        case 8u:
          *(_QWORD *)v6 = v7;
          break;
      }
      v4 -= v8;
      v6 += v8;
    }
  }
  else
  {
    memmove(a1, a2, a3);
  }
  return 0LL;
}
