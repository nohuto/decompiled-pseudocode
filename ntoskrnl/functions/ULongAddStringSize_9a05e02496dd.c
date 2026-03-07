__int64 __fastcall ULongAddStringSize(unsigned int a1, __int64 a2, int *a3)
{
  __int64 v4; // rax
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r10d
  unsigned int v8; // ecx

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  v5 = -1;
  v6 = 2LL * (unsigned int)v4;
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = v6;
  *a3 = v7;
  v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    if ( v7 + a1 >= a1 )
      v5 = v7 + a1;
    v8 = v7 + a1 < a1 ? 0xC0000095 : 0;
    *a3 = v5;
  }
  return v8;
}
