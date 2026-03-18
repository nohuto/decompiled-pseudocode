/*
 * XREFs of SeCreateAccessState @ 0x14071F140
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     PsOpenThread @ 0x1406634A0 (PsOpenThread.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x1406D7150 (NtGetNextThread.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x140782F2C (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A03FB4 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
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
