/*
 * XREFs of EtwpCheckForStackTracingExtension @ 0x140748504
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpGetFlagExtension @ 0x14074856C (EtwpGetFlagExtension.c)
 *     EtwpEnableStackCaching @ 0x1408A385A (EtwpEnableStackCaching.c)
 *     EtwpUpdateStackTracing @ 0x1409E5DD8 (EtwpUpdateStackTracing.c)
 */

__int64 __fastcall EtwpCheckForStackTracingExtension(__int64 a1, __int64 a2)
{
  _WORD *FlagExtension; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  int updated; // r10d
  __int64 v8; // r11

  FlagExtension = (_WORD *)EtwpGetFlagExtension(a1, 3LL);
  if ( FlagExtension )
  {
    updated = EtwpUpdateStackTracing(a2, FlagExtension + 2, (unsigned __int16)(4 * *FlagExtension - 4) >> 2);
    if ( updated < 0 )
      return (unsigned int)updated;
    EtwpGetFlagExtension(a1, 5LL);
  }
  v5 = EtwpGetFlagExtension(a1, 7LL);
  if ( v8 )
  {
    if ( v5 )
      return (unsigned int)-1073741053;
  }
  else
  {
    if ( !v5 )
      return (unsigned int)updated;
    v8 = v5;
  }
  if ( 4 * *(_WORD *)v8 == 12 )
  {
    LOBYTE(v6) = v5 != 0;
    return (unsigned int)EtwpEnableStackCaching(a2, *(unsigned int *)(v8 + 4), *(unsigned int *)(v8 + 8), v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
