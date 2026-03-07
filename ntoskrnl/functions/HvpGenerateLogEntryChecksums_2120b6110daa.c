__int64 __fastcall HvpGenerateLogEntryChecksums(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rdi
  size_t v7; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  _OWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v6 = *(_QWORD *)(a1 + 8) + 512LL;
  if ( !a3 )
    v6 = *(_QWORD *)(a1 + 8);
  SymCryptMarvin32Init((__int64)v11, &HvSymcryptSeed);
  v7 = (unsigned int)(*(_DWORD *)(a1 + 16) - 552);
  if ( !a3 )
    v7 = (unsigned int)(*(_DWORD *)(a1 + 16) - 40);
  SymCryptMarvin32Append((__int64)v11, (char *)(v6 + 40), v7);
  if ( a2 > 1 )
  {
    v9 = a1 + 32;
    v10 = a2 - 1;
    do
    {
      SymCryptMarvin32Append((__int64)v11, *(char **)v9, *(unsigned int *)(v9 + 8));
      v9 += 24LL;
      --v10;
    }
    while ( v10 );
  }
  SymCryptMarvin32Result((__int64)v11, (_DWORD *)(v6 + 24));
  return SymCryptMarvin32((int *)&HvSymcryptSeed, (unsigned __int16 *)v6, 0x20uLL, (_DWORD *)(v6 + 32));
}
