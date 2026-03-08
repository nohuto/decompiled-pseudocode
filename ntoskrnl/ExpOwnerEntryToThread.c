/*
 * XREFs of ExpOwnerEntryToThread @ 0x140283298
 * Callers:
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     ExReinitializeResourceLite @ 0x1402CB110 (ExReinitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     ExQuerySystemLockInformation @ 0x140AA7BF8 (ExQuerySystemLockInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpOwnerEntryToThread(__int64 *a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  if ( (a1[1] & 2) != 0 )
    return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v1 = *a1;
  result = 0LL;
  if ( (v1 & 3) == 0 )
    return v1;
  return result;
}
