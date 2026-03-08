/*
 * XREFs of ViDeadlockAddParticipant @ 0x140AD53A8
 * Callers:
 *     ViDeadlockAnalyze @ 0x140AD5740 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViDeadlockAddParticipant(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = ViDeadlockGlobals;
  result = *((unsigned int *)ViDeadlockGlobals + 8216);
  if ( (unsigned int)result < 0x20 )
  {
    *((_QWORD *)ViDeadlockGlobals + result + 4109) = a1;
    ++v1[8216];
  }
  else
  {
    ViDeadlockState |= 0x10u;
  }
  return result;
}
