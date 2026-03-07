__int64 __fastcall rimIDECheckConfidenceSupport(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5[8]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v6[80]; // [rsp+50h] [rbp-68h] BYREF

  memset(v6, 0, 0x48uLL);
  v5[0] = 1;
  result = rimHidP_GetSpecificButtonCaps(0LL, 13LL, 0LL, 71LL, (__int64)v6, (__int64)v5, a2);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1072627705 )
    *(_DWORD *)(a1 + 360) |= 4u;
  else
    *(_DWORD *)(a1 + 360) &= ~4u;
  return result;
}
