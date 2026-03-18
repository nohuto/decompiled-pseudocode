/*
 * XREFs of RtlGetAppContainerSidType @ 0x140696D90
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9218 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
