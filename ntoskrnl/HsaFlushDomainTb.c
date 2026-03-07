__int64 __fastcall HsaFlushDomainTb(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v6; // [rsp+30h] [rbp-18h]

  v6 = a4;
  LOBYTE(a4) = 1;
  return HsaFlushTbInternal(a1, 0, *(_DWORD *)(a2 + 48), a4, 0LL, 0LL, v6, a5);
}
