/*
 * XREFs of MiLockProtoPoolPageForce @ 0x14028331C
 * Callers:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x1402EAAAC (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1402EFF50 (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14063A788 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063AA00 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063AB90 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializeProtoPfn @ 0x140668C90 (MiInitializeProtoPfn.c)
 * Callees:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(signed __int64 BugCheckParameter1, __int64 a2)
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
