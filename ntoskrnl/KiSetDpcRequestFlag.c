__int64 __fastcall KiSetDpcRequestFlag(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 v3; // tt
  unsigned __int16 *v5; // r10
  __int16 v6; // r11
  unsigned __int16 v7; // tt
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  _m_prefetchw(a1);
  v2 = *a1;
  v3 = *a1;
  if ( v3 != _InterlockedCompareExchange16((volatile signed __int16 *)a1, a2 | v2, v2) )
  {
    do
    {
      RtlBackoff(&v8);
      _m_prefetchw(v5);
      v2 = *v5;
      v7 = *v5;
    }
    while ( v7 != _InterlockedCompareExchange16((volatile signed __int16 *)v5, v6 | v2, v2) );
  }
  return v2;
}
