/*
 * XREFs of EtwGetTraceEnableFlags @ 0x180081D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     EtwpGetMaxLogger @ 0x180081DA8 (EtwpGetMaxLogger.c)
 */

__int64 __fastcall EtwGetTraceEnableFlags(__int64 a1)
{
  unsigned int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  if ( ((unsigned __int16)a1 < (unsigned int)EtwpGetMaxLogger() || (_WORD)a1 == 0xFFFF) && a1 )
    return v3;
  RtlSetLastWin32Error(6);
  return 0LL;
}
