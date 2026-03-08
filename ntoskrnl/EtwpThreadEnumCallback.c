/*
 * XREFs of EtwpThreadEnumCallback @ 0x140801B20
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14080DD60 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpTraceThreadRundown @ 0x14036FE60 (EtwpTraceThreadRundown.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405FF6DC (EtwpTraceThreadRundownWithStack.c)
 */

__int64 __fastcall EtwpThreadEnumCallback(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf

  if ( (*(_DWORD *)(a2 + 1376) & 1) == 0 || !*(_BYTE *)(a2 + 4) )
  {
    v3 = *(_BYTE *)(a3 + 66) == 0;
    *(_DWORD *)(a3 + 40) = 6297859;
    if ( v3 )
      EtwpTraceThreadRundown(a2, a3);
    else
      EtwpTraceThreadRundownWithStack((struct _KTHREAD *)a2, a3);
  }
  return 0LL;
}
