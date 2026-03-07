__int64 __fastcall RIMIDECheckScanTimeSupport(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5[8]; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v6[20]; // [rsp+50h] [rbp-68h] BYREF

  v5[0] = 1;
  memset(v6, 0, 0x48uLL);
  result = rimHidP_GetSpecificValueCaps(0LL, 13LL, 0LL, 86LL, (__int64)v6, (__int64)v5, a2);
  if ( (int)result >= 0 )
  {
    result = v6[11];
    if ( v6[10] < v6[11] && v6[10] >= 0 && v6[11] >= 0xFFFF )
    {
      *(_DWORD *)(a1 + 360) |= 0x80u;
      *(_DWORD *)(a1 + 888) = result;
    }
  }
  return result;
}
