__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v5, a4);
  return v5;
}
