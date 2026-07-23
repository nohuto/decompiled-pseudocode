/*
 * XREFs of SeCreateAccessState @ 0x1406566A0
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     WmipCreateGuidObject @ 0x1406345A8 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x140691E18 (PsOpenThread.c)
 *     NtGetNextThread @ 0x1406CA5A0 (NtGetNextThread.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 *     NtGetNextProcess @ 0x14078AA70 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140958444 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1406566F0 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  return SeCreateAccessStateEx(
           (unsigned int)KeGetCurrentThread(),
           KeGetCurrentThread()->ApcState.Process,
           a1,
           a2,
           a3,
           a4);
}
