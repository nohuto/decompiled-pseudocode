/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx2 @ 0x1408194D0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140819698 (PspSetCreateProcessNotifyRoutine.c)
 */

__int64 __fastcall PsSetCreateProcessNotifyRoutineEx2(int a1, __int64 a2, char a3)
{
  if ( a1 )
    return 3221225485LL;
  else
    return PspSetCreateProcessNotifyRoutine(a2, (unsigned int)(a3 != 0) + 6);
}
