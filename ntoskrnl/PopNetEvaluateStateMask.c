/*
 * XREFs of PopNetEvaluateStateMask @ 0x14085780C
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403A7BD0 (PopNetEvaluationWorkerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopNetEvaluateStateMask(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)PopNetStandbyStateMask;
  if ( (PopNetStandbyStateMask & 4) != 0 )
  {
    *a1 = 2;
    *a2 = 2;
    return result;
  }
  if ( (PopNetStandbyStateMask & 8) != 0 )
  {
    *a1 = 2;
    *a2 = 3;
    return result;
  }
  if ( (PopNetStandbyStateMask & 0x40) != 0 )
  {
    *a1 = 2;
    *a2 = 6;
    return result;
  }
  if ( !PopNetResiliencyEngaged )
    goto LABEL_12;
  if ( (PopNetStandbyStateMask & 2) != 0 )
  {
    *a1 = 2;
    *a2 = 1;
    return result;
  }
  if ( (PopNetStandbyStateMask & 0x80u) != 0 )
  {
    *a1 = 2;
    *a2 = 7;
  }
  else
  {
LABEL_12:
    *a1 = 0;
    *a2 = 0;
  }
  return result;
}
