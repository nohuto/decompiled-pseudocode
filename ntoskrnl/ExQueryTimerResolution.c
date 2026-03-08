/*
 * XREFs of ExQueryTimerResolution @ 0x1403B1630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExQueryTimerResolution(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  *a1 = KeMaximumIncrement;
  *a2 = KeMinimumIncrement;
  result = (unsigned int)KePseudoHrTimeIncrement;
  *a3 = KePseudoHrTimeIncrement;
  return result;
}
