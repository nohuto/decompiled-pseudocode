__int64 __fastcall ClearKeyboardToggleStates(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 i; // rbx
  __int64 result; // rax
  unsigned int v9; // esi
  __int64 v10; // rdi
  int v11; // ebx
  _BYTE v12[16]; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = 0LL;
  do
  {
    v6 = SGDGetUserSessionState(a1, a2, a3, a4);
    a2 = 1LL;
    ++v4;
    a3 = (unsigned __int64)(unsigned __int8)byte_1C028B418[v5] >> 2;
    a1 = 2 * (byte_1C028B418[v5] & 3u) + 1;
    LOBYTE(a2) = *(_BYTE *)(a3 + v6 + 13992) & (1 << (2 * (byte_1C028B418[v5] & 3) + 1));
    v12[v5++] = a2;
  }
  while ( v4 < 0xE );
  for ( i = 0LL; i < 64; ++i )
  {
    result = SGDGetUserSessionState(a1, a2, a3, a4);
    *(_BYTE *)(result + i + 13992) &= 0x55u;
  }
  v9 = 0;
  v10 = 0LL;
  do
  {
    if ( v12[v10] )
    {
      v11 = 1 << (2 * (byte_1C028B418[v10] & 3) + 1);
      result = SGDGetUserSessionState(2 * (byte_1C028B418[v10] & 3u) + 1, a2, a3, a4);
      *(_BYTE *)(result + ((unsigned __int64)(unsigned __int8)byte_1C028B418[v10] >> 2) + 13992) |= v11;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 0xE );
  return result;
}
