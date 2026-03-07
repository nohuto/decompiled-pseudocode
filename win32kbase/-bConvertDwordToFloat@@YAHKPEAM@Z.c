__int64 __fastcall bConvertDwordToFloat(int a1, float *a2)
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)a2 = a1;
  return result;
}
