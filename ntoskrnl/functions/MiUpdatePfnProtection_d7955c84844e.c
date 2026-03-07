__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r9
  unsigned int v7; // r10d
  __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v7 = MiSanitizePfnProtection(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1F, a3);
  v8 = 32LL * (v7 & 0x1F);
  if ( v6 )
    *(_QWORD *)(a2 + 16) = v8 | v6 & 0xFFFFFFFFFFFFFC1FuLL;
  else
    *(_QWORD *)(a2 + 16) = MiSwizzleInvalidPte(v8);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v7;
}
