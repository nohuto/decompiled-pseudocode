__int64 __fastcall SymCryptScsTableStoreC(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // r9
  unsigned int v5; // r10d
  _QWORD *v6; // rcx
  __int64 v7; // r11
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_QWORD *)(a1 + 16) + 32 * (a2 & 3u) + (unsigned __int64)(v3 * (a2 - (a2 & 3)));
  v5 = v3 >> 5;
  do
  {
    v6 = (_QWORD *)v4;
    v7 = 4LL;
    do
    {
      result = *(_QWORD *)((char *)v6 + a3 - v4);
      *v6++ = result;
      --v7;
    }
    while ( v7 );
    v4 += 128LL;
    a3 += 32LL;
    --v5;
  }
  while ( v5 );
  return result;
}
