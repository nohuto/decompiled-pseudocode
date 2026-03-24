/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C00076F0
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C00075C0 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

__int128 *__fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int128 *a2, _BYTE *a3)
{
  int v3; // r10d
  char v5; // bl
  _BYTE *v7; // rsi
  int v8; // r11d
  char v9; // bl
  unsigned __int64 v10; // r9
  char v11; // r15
  unsigned __int64 v12; // r9
  int v13; // r8d
  char v14; // cl
  int v15; // r8d
  char v16; // cl
  int v17; // r8d
  __int128 *result; // rax

  v3 = 0;
  v5 = 0;
  v7 = a3;
  do
  {
    if ( *v7 )
    {
      v8 = 0;
      v9 = 8 * v5;
      do
      {
        v10 = (unsigned __int8)(v8 + v9);
        if ( ((unsigned __int8)(1 << ((v8 + v9) & 7)) & a3[v10 >> 3]) != 0 )
        {
          v11 = v10 & 3;
          v12 = v10 >> 2;
          v13 = *(unsigned __int8 *)(v12 + a1 + 228);
          v14 = 2 * v11;
          if ( ((unsigned __int8)(1 << (2 * v11)) & *((_BYTE *)a2 + v12)) != 0 )
            v15 = v13 | (1 << v14);
          else
            v15 = v13 & ~(1 << v14);
          v16 = 2 * v11 + 1;
          *(_BYTE *)(v12 + a1 + 228) = v15;
          if ( ((unsigned __int8)(1 << v16) & *((_BYTE *)a2 + v12)) != 0 )
            v17 = (unsigned __int8)v15 | (1 << v16);
          else
            v17 = (unsigned __int8)v15 & ~(1 << v16);
          *(_BYTE *)(v12 + a1 + 228) = v17;
        }
        ++v8;
      }
      while ( v8 < 8 );
    }
    ++v3;
    ++v7;
    v5 = v3;
  }
  while ( v3 < 32 );
  ++*((_DWORD *)gpsi + 1746);
  result = &gafAsyncKeyState;
  if ( a2 != &gafAsyncKeyState )
    return (__int128 *)Win32FreePool(a2);
  return result;
}
