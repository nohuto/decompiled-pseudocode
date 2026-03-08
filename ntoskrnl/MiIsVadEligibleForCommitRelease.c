/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x140615D8C
 * Callers:
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiProcessCommitIntact @ 0x1402FDBAC (MiProcessCommitIntact.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x14031EE80 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x140327280 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( MiVadSupportsPrivateCommit(a1) && !(unsigned int)MiVadMapsLargeImage(v1) )
  {
    v3 = *(unsigned int *)(v2 + 52);
    LODWORD(v3) = v3 & 0x7FFFFFFF;
    if ( (v3 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) - 1 <= 0x7FFFFFFFBLL
      && (*(_DWORD *)(v2 + 48) & 8) == 0 )
    {
      return 1;
    }
  }
  return result;
}
