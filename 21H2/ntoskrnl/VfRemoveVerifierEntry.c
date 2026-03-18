/*
 * XREFs of VfRemoveVerifierEntry @ 0x140A9C7F8
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140A9AC40 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
