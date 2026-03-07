unsigned __int64 __fastcall SymCryptFdefIntAddUint32(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v5; // ecx
  _DWORD *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rax

  result = a2;
  v5 = 16 * *(_DWORD *)(a3 + 4);
  if ( v5 )
  {
    v6 = (_DWORD *)(a3 + 32);
    v7 = a1 - a3;
    v8 = v5;
    do
    {
      v9 = *(unsigned int *)((char *)v6 + v7) + result;
      *v6++ = v9;
      result = HIDWORD(v9);
      --v8;
    }
    while ( v8 );
  }
  return result;
}
