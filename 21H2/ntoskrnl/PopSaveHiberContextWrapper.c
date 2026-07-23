/*
 * XREFs of PopSaveHiberContextWrapper @ 0x140407920
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveStateForHibernate @ 0x1403FF0B0 (KeSaveStateForHibernate.c)
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x1409998A0 (PopHiberCheckResume.c)
 */

__int64 __fastcall PopSaveHiberContextWrapper(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rbp
  bool v2; // zf
  __int64 result; // rax

  if ( !__readgsdword(0x1A4u) )
  {
    v1 = BugCheckParameter3;
    KeSaveStateForHibernate((__int64)&PoWakeState);
    v2 = (unsigned __int8)PopHiberCheckResume() == 0;
    result = 1073742484LL;
    if ( !v2 )
      return result;
    BugCheckParameter3 = v1;
  }
  return PopSaveHiberContext(BugCheckParameter3);
}
