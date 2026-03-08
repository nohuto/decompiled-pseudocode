/*
 * XREFs of HalpPrepareForBugcheck @ 0x140509440
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14051D4B4 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C6211C = -1;
    qword_140C62120 = 0LL;
    xmmword_140C62108 = 0uLL;
    qword_140C621C8 = 0LL;
    dword_140C62104 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C6A5A8 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
