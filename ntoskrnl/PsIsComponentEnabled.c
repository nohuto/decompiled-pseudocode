/*
 * XREFs of PsIsComponentEnabled @ 0x1402FFC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsComponentEnabled(int a1)
{
  return (a1 & *(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].IdealProcessor[2]) == 0;
}
