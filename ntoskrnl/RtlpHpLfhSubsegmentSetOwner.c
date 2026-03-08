/*
 * XREFs of RtlpHpLfhSubsegmentSetOwner @ 0x14030AA5C
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14030A880 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x14030AA0C (RtlpHpLfhSlotAddSubsegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSetOwner(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = *(unsigned __int16 *)(a1 + 34);
  if ( *(_WORD *)(a1 + 32) == (_WORD)result )
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    v3 = _InterlockedExchange64((volatile __int64 *)(a1 + 16), a2);
    if ( (v3 & 1) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), v3 >> 1);
  }
  return result;
}
