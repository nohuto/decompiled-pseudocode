/*
 * XREFs of ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C005AEDC
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C005B8C4 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     EditionActivateMitInput @ 0x1C00A4400 (EditionActivateMitInput.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C00E11D0 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     SetPointer @ 0x1C005CFA0 (SetPointer.c)
 */

void __fastcall CursorApiRouter::ForceSetCurrentCursorShape(CursorApiRouter *this)
{
  SetPointer(byte_1C035F127 == 0);
}
