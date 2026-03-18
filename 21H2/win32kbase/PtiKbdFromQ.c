/*
 * XREFs of PtiKbdFromQ @ 0x1C01EA3D8
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     GetCurrentKbdTables @ 0x1C01E9BB0 (GetCurrentKbdTables.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01FA948 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 96);
}
