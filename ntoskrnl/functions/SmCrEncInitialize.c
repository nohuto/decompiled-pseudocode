__int64 __fastcall SmCrEncInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x90uLL);
  result = 1LL;
  a1[14] = 88;
  a1[2] = 1;
  a1[15] = 1;
  return result;
}
