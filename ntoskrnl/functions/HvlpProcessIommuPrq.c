__int64 __fastcall HvlpProcessIommuPrq(_DWORD *a1)
{
  __int64 result; // rax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = *a1;
  result = HvcallFastExtended(65731LL, (__int64)v3, 8u, 0LL, 0);
  a1[1] = 1;
  return result;
}
