/*
 * XREFs of ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CBF8
 * Callers:
 *     CitProcessForegroundChange @ 0x1C004CBB0 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C0240944 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CD04 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CitpProcessForegroundChange(
        struct tagPROCESSINFO *a1,
        struct tagWND *a2,
        struct tagPROCESSINFO *a3,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a4)
{
  struct tagWND *v5; // rbp
  struct _CIT_IMPACT_CONTEXT *v7; // rbx
  unsigned __int64 v8; // rsi
  __int16 v10; // cx

  v5 = a2;
  if ( a3 )
    PsUpdateComponentPower(*(_QWORD *)a3, 4LL);
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
    {
      a1 = 0LL;
      v5 = 0LL;
    }
    else
    {
      PsUpdateComponentPower(*(_QWORD *)a1, 4LL);
    }
  }
  v7 = xmmword_1C029A230;
  if ( !xmmword_1C029A230 )
    return 0LL;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( qword_1C029CC70 )
  {
    if ( (unsigned int)qword_1C029CC70(0xFFFFF78000000004uLL, a2, a3) )
    {
      v10 = *((_WORD *)v7 + 57);
      if ( !v10 )
      {
        if ( (unsigned int)dword_1C028D7EC < MEMORY[0xFFFFF7800000037C] )
        {
          EtwTelemetryCoverageReport(&off_1C028D7E0);
          v10 = *((_WORD *)v7 + 57);
        }
        *((_BYTE *)v7 + 112) |= 4u;
        *((_WORD *)v7 + 57) = v10 + 1;
      }
    }
  }
  *((_QWORD *)v7 + 16) = a1;
  return CitpSetForegroundProcess(v7, v8, a1, v5, a4);
}
