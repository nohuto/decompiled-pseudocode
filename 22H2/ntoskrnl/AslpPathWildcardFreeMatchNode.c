/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x140969FA4
 * Callers:
 *     AslPathWildcardFindFirst @ 0x140968B44 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140969114 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969CB0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x140969ED4 (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ZwClose(v2);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[1];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
}
