__int64 __fastcall DpiGetGlobalDebugData(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 4) = word_1C013B49C;
  result = 0LL;
  *(_BYTE *)(a1 + 5) = 0;
  return result;
}
