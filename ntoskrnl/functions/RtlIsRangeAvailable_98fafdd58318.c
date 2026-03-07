__int64 __fastcall RtlIsRangeAvailable(__int64 a1, int a2, int a3, char a4, char a5, __int64 a6, __int64 a7, _BYTE *a8)
{
  __int64 result; // rax
  int v12; // r9d
  __int64 v13; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+58h] [rbp-30h] BYREF

  memset(v14, 0, 32);
  result = RtlGetFirstRange(a1, v14, &v13);
  if ( (_DWORD)result == -2147483622 )
  {
    *a8 = 1;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    LOBYTE(v12) = a5;
    *a8 = RtlpIsRangeAvailable((unsigned int)v14, a2, a3, v12, a4 & 1, a4 & 2, 1, a6, a7);
  }
  return 0LL;
}
