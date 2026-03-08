/*
 * XREFs of GreGetCannonicalName @ 0x1C029D92C
 * Callers:
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C003589C (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int16 __fastcall GreGetCannonicalName(__int16 *Src, char *a2, unsigned int *a3, _DWORD *a4)
{
  __int16 v4; // ax
  unsigned int v8; // esi
  __int16 *i; // rdi
  size_t v10; // rbx
  __int64 v11; // rax
  _WORD *v12; // rdx
  __int16 v13; // cx
  unsigned __int16 v14; // cx
  int j; // r8d
  unsigned __int16 v16; // r9

  v4 = *Src;
  v8 = 0;
  for ( i = Src; v4 && (v4 != 95 || (unsigned __int16)(i[1] - 48) > 9u); v4 = *i )
    ++i;
  v10 = 2LL * (unsigned int)(i - Src);
  LOWORD(v11) = (unsigned __int16)memmove(a2, Src, v10);
  *(_WORD *)&a2[v10] = 0;
  if ( *i == 95 )
  {
    v12 = i + 1;
    v13 = i[1];
    LOWORD(v11) = v13 - 48;
    if ( (unsigned __int16)(v13 - 48) <= 9u )
    {
      while ( v13 )
      {
        LOWORD(v11) = v13;
        do
        {
          if ( (unsigned __int16)v11 >= 0x30u )
          {
            v14 = v11;
            if ( (unsigned __int16)v11 <= 0x39u )
              break;
          }
          v14 = *++v12;
          LOWORD(v11) = *v12;
        }
        while ( *v12 );
        if ( !v14 )
          break;
        for ( j = v14 - 48; ; j = v16 + 2 * (5 * j - 24) )
        {
          v16 = *++v12;
          if ( !*v12 || (unsigned __int16)(v16 - 48) > 9u )
            break;
        }
        v11 = v8++;
        a4[v11 + 2] = j;
        v13 = *v12;
      }
    }
  }
  *a3 = v8;
  a4[1] = v8;
  *a4 = 134248036;
  return v11;
}
