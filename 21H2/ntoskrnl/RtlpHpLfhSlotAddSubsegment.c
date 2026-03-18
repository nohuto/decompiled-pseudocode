/*
 * XREFs of RtlpHpLfhSlotAddSubsegment @ 0x140365B28
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSetOwner @ 0x140365B78 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x140365BA0 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

__int64 __fastcall RtlpHpLfhSlotAddSubsegment(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10

  RtlpHpLfhSubsegmentSetOwner(a2, a1);
  if ( !*(_QWORD *)(v3 + 8) || *(_WORD *)(v2 + 32) != *(_WORD *)(v2 + 34) )
    return RtlpHpLfhOwnerMoveSubsegment(v3, v2, 0LL);
  *(_QWORD *)(v2 + 16) = 0LL;
  return v2;
}
