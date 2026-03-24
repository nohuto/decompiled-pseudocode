/*
 * XREFs of SeCreateAccessState @ 0x140661880
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     NtGetNextThread @ 0x1405DAE20 (NtGetNextThread.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 *     PsOpenThread @ 0x140625D00 (PsOpenThread.c)
 *     WmipCreateGuidObject @ 0x14063F798 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x140661100 (ObReferenceObjectByName.c)
 *     NtGetNextProcess @ 0x14078A8B0 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C640 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140958274 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1406618D0 (SeCreateAccessStateEx.c)
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
