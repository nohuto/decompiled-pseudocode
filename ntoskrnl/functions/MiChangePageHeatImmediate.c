__int64 __fastcall MiChangePageHeatImmediate(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  bool v7; // zf
  _DWORD v8[36]; // [rsp+20h] [rbp-A8h] BYREF

  result = (__int64)memset(&v8[3], 0, 0x80uLL);
  if ( a3 )
  {
    v7 = (HvlEnlightenments & 0x200000) == 0;
  }
  else
  {
    result = MiColdPageSizeSupported(a2);
    v7 = (_DWORD)result == 0;
  }
  if ( !v7 )
  {
    v8[1] = 0;
    v8[0] = a3;
    v8[2] = 1;
    result = MiAddPageToHeatRanges((__int64)v8, a1, a2);
    if ( (_DWORD)result )
      return MiNotifyPageHeat(v8);
  }
  return result;
}
