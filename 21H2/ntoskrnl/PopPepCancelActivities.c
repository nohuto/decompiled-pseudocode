/*
 * XREFs of PopPepCancelActivities @ 0x1402837B4
 * Callers:
 *     PopPepTriggerActivity @ 0x1402836C8 (PopPepTriggerActivity.c)
 * Callees:
 *     PopPepCancelActivityRange @ 0x140382978 (PopPepCancelActivityRange.c)
 */

__int64 __fastcall PopPepCancelActivities(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx

  result = (unsigned int)dword_140004FB4[34 * a3];
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v7 = a1 + 120;
      PopPepCancelActivityRange(a1 + 72, a3, 0, 0, a1 + 120);
      return PopPepCancelActivityRange((int)a1 + 72, a3, 4, 5, v7);
    }
    if ( (_DWORD)result == 2 )
    {
      v7 = a1 + 120;
      if ( *(_BYTE *)(a1 + 125) )
        PopPepCancelActivityRange(a1 + 72, a3, 0, 0, a1 + 120);
      result = PopPepCancelActivityRange((int)a2 + 56, a3, 1, 3, a2 + 104);
      if ( *(_BYTE *)(a1 + 125) )
        return PopPepCancelActivityRange((int)a1 + 72, a3, 4, 5, v7);
    }
  }
  return result;
}
