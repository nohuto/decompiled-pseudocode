/*
 * XREFs of MiLockProtoPoolPageForce @ 0x1402DDFD4
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A220 (MiInitializeImageProtos.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356790 (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x14035C74C (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x140369DE8 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x14061AF68 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14063CBF8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063CE70 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063D000 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializeProtoPfn @ 0x14066B2E0 (MiInitializeProtoPfn.c)
 * Callees:
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x1402DD200 (MiLockProtoPoolPage.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiLockProtoPoolPage(BugCheckParameter1, a2);
    if ( result )
      break;
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  return result;
}
