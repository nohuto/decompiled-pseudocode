/*
 * XREFs of RtlInterlockedTimelineBitmapUpdate @ 0x140294BF4
 * Callers:
 *     PsUpdateComponentPower @ 0x140294B40 (PsUpdateComponentPower.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlInterlockedTimelineBitmapUpdate(volatile signed __int64 *a1, unsigned int a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // [rsp+8h] [rbp+8h]

  result = *a1;
  if ( a2 != (unsigned int)*a1 || (result & 0x100000000LL) == 0 )
  {
    do
    {
      if ( a2 <= (unsigned int)result )
      {
        if ( (unsigned int)result - a2 >= 0x20 )
          return result;
        HIDWORD(v4) = HIDWORD(result) | (1 << (result - a2));
        if ( HIDWORD(v4) == HIDWORD(result) )
          return result;
        LODWORD(v4) = result;
      }
      else
      {
        if ( a2 - (unsigned int)result >= 0x20 )
          HIDWORD(v4) = 1;
        else
          HIDWORD(v4) = (HIDWORD(result) << (a2 - result)) | 1;
        LODWORD(v4) = a2;
      }
      v3 = result;
      result = _InterlockedCompareExchange64(a1, v4, result);
    }
    while ( v3 != result );
  }
  return result;
}
