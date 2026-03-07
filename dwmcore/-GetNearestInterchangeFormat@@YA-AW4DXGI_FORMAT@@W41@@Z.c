__int64 __fastcall GetNearestInterchangeFormat(enum DXGI_FORMAT a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 8;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 || v4 == 13 )
        return 11LL;
      else
        return 87LL;
    }
  }
  return result;
}
