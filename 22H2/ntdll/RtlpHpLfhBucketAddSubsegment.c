/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180003144
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x1800031B4 (RtlpHpLfhSubsegmentFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006F350 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x180079C34 (RtlpHpLfhSubsegmentSetOwner.c)
 */

__int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16);
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
    result = RtlReleaseSRWLockExclusive(a2 + 16);
  }
  if ( v6 )
    return RtlpHpLfhSubsegmentFree(a1, v6, a2, a4 & 1);
  return result;
}
