/*
 * XREFs of ?ReportPenKey@@YAXIE@Z @ 0x1C00509C4
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C0202140 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 */

void __fastcall ReportPenKey(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 v4; // rax

  if ( (a1 & 8) != 0 )
  {
    v2 = a2;
    v3 = a1;
    if ( (unsigned __int8)(a2 + 127) <= 2u )
    {
      v4 = SGDGetUserSessionState(a1);
      ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, v4, 0, 0);
      TraceLoggingPenHotkey(v3, v2);
    }
  }
}
