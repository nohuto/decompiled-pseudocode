/*
 * XREFs of InitiatePTPMouseProcessing @ 0x1C0217DF0
 * Callers:
 *     ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1C00F3970 (-PostProcessInput@CHidInput@@EEAAJXZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020E0C0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

LONG __fastcall InitiatePTPMouseProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  return KeSetEvent(*(PRKEVENT *)(v4 + 16824), 1, 0);
}
