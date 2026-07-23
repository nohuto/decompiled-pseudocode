/*
 * XREFs of SmProcessCreateNotification @ 0x1406B095C
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     SmpKeyedStoreCreate @ 0x1406BF194 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1, char a2)
{
  if ( (dword_140D24180 & 0xC) == 0 || *(_WORD *)(a1 + 1838) )
    return 3221225659LL;
  if ( (a2 & 3) != 0 )
    return SmpKeyedStoreCreate((ULONG_PTR)qword_140D24188);
  return 3221266944LL;
}
