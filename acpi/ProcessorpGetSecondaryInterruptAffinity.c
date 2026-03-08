/*
 * XREFs of ProcessorpGetSecondaryInterruptAffinity @ 0x1C009B990
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpGetSecondaryInterruptAffinity(__int64 a1, int a2, _OWORD *a3)
{
  unsigned int v4; // ebx
  KAFFINITY GroupAffinity; // rax

  if ( a2 == 1 )
  {
    *a3 = 0LL;
    GroupAffinity = KeQueryGroupAffinity(0);
    v4 = 0;
    *(_QWORD *)a3 = GroupAffinity;
    if ( GroupAffinity )
      *(_QWORD *)a3 = 1LL << RtlFindLeastSignificantBit(GroupAffinity);
    else
      return (unsigned int)-1073741823;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
