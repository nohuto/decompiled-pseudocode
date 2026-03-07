__int64 __fastcall SymCryptFdefModElementIsZero(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx

  v2 = 0LL;
  v3 = 16 * *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v4 = v3;
    do
    {
      v2 = *a2++ | (unsigned int)v2;
      --v4;
    }
    while ( v4 );
  }
  return (unsigned int)~((unsigned __int64)-v2 >> 32);
}
