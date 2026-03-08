/*
 * XREFs of PopSaveHiberContextWrapper @ 0x140420200
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveStateForHibernate @ 0x1404170A0 (KeSaveStateForHibernate.c)
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 */

__int64 __fastcall PopSaveHiberContextWrapper(PVOID Address)
{
  PVOID v1; // rbp
  bool v2; // zf
  __int64 result; // rax

  if ( !__readgsdword(0x1A4u) )
  {
    v1 = Address;
    KeSaveStateForHibernate((__int64)&PoWakeState);
    v2 = (unsigned __int8)PopHiberCheckResume() == 0;
    result = 1073742484LL;
    if ( !v2 )
      return result;
    Address = v1;
  }
  return PopSaveHiberContext(Address);
}
