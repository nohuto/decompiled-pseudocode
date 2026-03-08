/*
 * XREFs of RtlCompressWorkSpaceSizeXpressLz @ 0x140302800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompressWorkSpaceSizeXpressLz(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 256 )
    {
      *a2 = 393223;
      result = 0LL;
      *a3 = 0;
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    *a2 = 61223;
    result = 0LL;
    *a3 = 0;
  }
  return result;
}
