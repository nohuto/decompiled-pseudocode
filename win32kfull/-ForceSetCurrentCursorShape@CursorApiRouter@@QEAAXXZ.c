/*
 * XREFs of ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00DB69C
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C002A470 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     EditionActivateMitInput @ 0x1C00DB420 (EditionActivateMitInput.c)
 * Callees:
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
 */

void __fastcall CursorApiRouter::ForceSetCurrentCursorShape(CursorApiRouter *this)
{
  SetPointer(byte_1C0362177 == 0);
}
