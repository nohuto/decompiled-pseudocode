/*
 * XREFs of SeCreateAccessState @ 0x1406DA670
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     NtGetNextThread @ 0x1405DAE20 (NtGetNextThread.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     PsOpenThread @ 0x140626120 (PsOpenThread.c)
 *     WmipCreateGuidObject @ 0x1406B8578 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1406D9EC0 (ObReferenceObjectByName.c)
 *     NtGetNextProcess @ 0x14078A7B0 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C690 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x1409582C4 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1406DA6C0 (SeCreateAccessStateEx.c)
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
