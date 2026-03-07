__int64 __fastcall MiCopyFromUntrustedMemory(_BYTE *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r11d
  _DWORD *v5; // rbx
  _BYTE *v6; // r10
  unsigned int v7; // r8d
  unsigned int i; // edx
  __int64 v10; // [rsp+40h] [rbp-28h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v10 = 0LL;
  if ( a4 || (((unsigned __int8)a1 | (unsigned __int8)a2) & 7) != 0 || (a3 & 7) != 0 )
  {
    while ( v4 )
    {
      if ( a4 )
      {
        v7 = a4;
        if ( a4 > v4 )
          v7 = 1;
      }
      else
      {
        v7 = v4 & 7;
        if ( (v4 & 7) != 0 )
        {
          if ( ((v7 - 1) & v7) != 0 )
            v7 = 1;
        }
        else
        {
          v7 = 8;
        }
      }
      if ( ((v7 - 1) & (unsigned int)v5) != 0 )
        v7 = 1;
      switch ( v7 )
      {
        case 4u:
          LODWORD(v10) = *v5;
          break;
        case 1u:
          LOBYTE(v10) = *(_BYTE *)v5;
          break;
        case 2u:
          LOWORD(v10) = *(_WORD *)v5;
          break;
        case 8u:
          v10 = *(_QWORD *)v5;
          break;
      }
      for ( i = 0; i < v7; ++i )
        *v6++ = *((_BYTE *)&v10 + i);
      v4 -= v7;
      v5 = (_DWORD *)((char *)v5 + v7);
    }
  }
  else
  {
    memmove(a1, a2, a3);
  }
  return 0LL;
}
