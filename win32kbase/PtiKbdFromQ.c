/*
 * XREFs of PtiKbdFromQ @ 0x1C00F43EE
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     GetCurrentKbdTables @ 0x1C021A790 (GetCurrentKbdTables.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C022D8A4 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 104);
}
