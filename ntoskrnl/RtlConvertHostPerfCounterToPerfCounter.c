/*
 * XREFs of RtlConvertHostPerfCounterToPerfCounter @ 0x1405A5100
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x1402F9390 (RtlGetMultiTimePrecise.c)
 */

__int64 __fastcall RtlConvertHostPerfCounterToPerfCounter(LARGE_INTEGER a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  LARGE_INTEGER v8[5]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  *(_OWORD *)&v8[0].LowPart = 0LL;
  if ( !a3 )
    return 3221225485LL;
  result = RtlGetMultiTimePrecise(v8, 3, &v9);
  if ( (int)result >= 0 )
  {
    if ( (v9 & 3) == 3
      && (a2 == -1LL
       || (a1.QuadPart >= (unsigned __int64)v8[1].QuadPart
         ? (v7 = a1.QuadPart - v8[1].QuadPart)
         : (v7 = v8[1].QuadPart - a1.QuadPart),
           v7 < a2)) )
    {
      *a3 = a1.QuadPart + v8[0].QuadPart - v8[1].QuadPart;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
