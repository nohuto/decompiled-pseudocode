/*
 * XREFs of ??1?$AutoReleasePtr@U_FD_GLYPHSET@@$1?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z@@QEAA@XZ @ 0x1C030838C
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00C3B70 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C012511C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 */

void __fastcall AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>::~AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>(
        char **a1)
{
  char *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(v2);
    *a1 = 0LL;
  }
}
