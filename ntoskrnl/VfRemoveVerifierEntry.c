/*
 * XREFs of VfRemoveVerifierEntry @ 0x140ADA7C0
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140AD7A14 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
