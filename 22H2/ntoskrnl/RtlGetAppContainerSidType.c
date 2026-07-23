/*
 * XREFs of RtlGetAppContainerSidType @ 0x1406EF2F0
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1406EC384 (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x14070F440 (SepValidateReferencedCachedHandles.c)
 *     RtlGetAppContainerParent @ 0x140913810 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409145B8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140348290 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerSidType(PSID AppContainerSid, PAPPCONTAINER_SID_TYPE AppContainerSidType)
{
  UCHAR v4; // cl

  if ( *((_BYTE *)AppContainerSid + 1) >= 2u
    && *(_BYTE *)AppContainerSid == 1
    && RtlCompareMemory((char *)AppContainerSid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)AppContainerSid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(AppContainerSid);
    if ( v4 == 8 )
    {
      *AppContainerSidType = ParentAppContainerSidType;
      return 0;
    }
    if ( v4 == 12 )
    {
      *AppContainerSidType = ChildAppContainerSidType;
      return 0;
    }
    *AppContainerSidType = InvalidAppContainerSidType;
  }
  else
  {
    *AppContainerSidType = NotAppContainerSidType;
  }
  return -1073700352;
}
