/*
 * XREFs of SmProcessCreateNotification @ 0x14070EE20
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     SmpKeyedStoreCreate @ 0x1406ED260 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(LUID a1, char a2)
{
  if ( (dword_140D321C0 & 0xC) == 0 || *(_WORD *)(*(_QWORD *)&a1 + 1838LL) )
    return 3221225659LL;
  if ( (a2 & 3) != 0 )
    return SmpKeyedStoreCreate((ULONG_PTR)&qword_140D321C8, (__int64)&SmGlobals, a1);
  return 3221266944LL;
}
