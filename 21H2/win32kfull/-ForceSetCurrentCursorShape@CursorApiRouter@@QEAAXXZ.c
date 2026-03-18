/*
 * XREFs of ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00FCE3C
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     EditionActivateMitInput @ 0x1C00FCD90 (EditionActivateMitInput.c)
 * Callees:
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 */

void __fastcall CursorApiRouter::ForceSetCurrentCursorShape(CursorApiRouter *this)
{
  SetPointer(byte_1C03374BF == 0);
}
