/*
 * XREFs of ExCheckValidIRTimerId @ 0x140380D74
 * Callers:
 *     KeInitializeIRTimer @ 0x140380D20 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x1407725A8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140005250[3 * a1]);
}
