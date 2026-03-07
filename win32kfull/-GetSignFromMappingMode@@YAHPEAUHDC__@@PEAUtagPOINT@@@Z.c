__int64 __fastcall GetSignFromMappingMode(HDC a1, struct tagPOINT *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  if ( !(unsigned int)GreGetDCPoint(a1, 1LL, &v6) || !(unsigned int)GreGetDCPoint(a1, 2LL, &v5) )
    return 0LL;
  result = 1LL;
  a2->x = (((int)(v6 ^ v5) >> 31) & 0xFFFFFFFE) + 1;
  a2->y = (((HIDWORD(v6) ^ HIDWORD(v5)) >> 31) & 0xFFFFFFFE) + 1;
  return result;
}
