/*
 * XREFs of EtwpUpdateStackTracing @ 0x1409E5DD8
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x140748504 (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409E5CE4 (EtwpInitializeClassicStackTracing.c)
 */

__int64 __fastcall EtwpUpdateStackTracing(RTL_BITMAP *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // esi
  _BYTE *v8; // rcx
  int v9; // eax

  v6 = 0LL;
  v7 = 0;
  if ( a3 )
  {
    if ( a3 > 0x100 )
      return (unsigned int)-1073741811;
    if ( (a1[51].SizeOfBitMap & 0x80u) == 0 )
    {
      v7 = EtwpInitializeClassicStackTracing((__int64)a1);
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
    else
    {
      RtlClearAllBits(a1 + 62);
    }
    while ( (unsigned int)v6 < a3 )
    {
      v8 = (char *)a1[62].Buffer + ((unsigned __int64)(*(_WORD *)(a2 + 4 * v6) & 0x1FFF) >> 3);
      v9 = (char)*v8;
      _bittestandset(&v9, *(_WORD *)(a2 + 4 * v6) & 7);
      *v8 = v9;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  else if ( (a1[51].SizeOfBitMap & 0x80u) != 0 )
  {
    RtlClearAllBits(a1 + 62);
  }
  return (unsigned int)v7;
}
