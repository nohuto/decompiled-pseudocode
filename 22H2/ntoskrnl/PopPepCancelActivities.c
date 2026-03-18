/*
 * XREFs of PopPepCancelActivities @ 0x140313FF8
 * Callers:
 *     PopPepTriggerActivity @ 0x140313F1C (PopPepTriggerActivity.c)
 * Callees:
 *     PopPepCancelActivityRange @ 0x1403136B8 (PopPepCancelActivityRange.c)
 */

__int64 *__fastcall PopPepCancelActivities(__int64 a1, __int64 a2, int a3)
{
  __int64 *result; // rax
  volatile signed __int32 *v7; // rbx

  result = (__int64 *)(unsigned int)dword_140001AF4[34 * a3];
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v7 = (volatile signed __int32 *)(a1 + 120);
      PopPepCancelActivityRange(a1 + 72, a3, 0, 0, (volatile signed __int32 *)(a1 + 120));
      return PopPepCancelActivityRange(a1 + 72, a3, 4, 5, v7);
    }
    if ( (_DWORD)result == 2 )
    {
      v7 = (volatile signed __int32 *)(a1 + 120);
      if ( *(_BYTE *)(a1 + 125) )
        PopPepCancelActivityRange(a1 + 72, a3, 0, 0, (volatile signed __int32 *)(a1 + 120));
      result = PopPepCancelActivityRange(a2 + 56, a3, 1, 3, (volatile signed __int32 *)(a2 + 104));
      if ( *(_BYTE *)(a1 + 125) )
        return PopPepCancelActivityRange(a1 + 72, a3, 4, 5, v7);
    }
  }
  return result;
}
