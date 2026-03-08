/*
 * XREFs of ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00C490C
 * Callers:
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C00C48B8 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C03083B4 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z @ 0x1C03085F0 (-CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C0308670 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C0308F48 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Win32ProbeForRead(char *a1, __int64 a2, int a3)
{
  char *v3; // rdx

  if ( a2 )
  {
    if ( ((a3 - 1) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = &a1[a2];
    if ( (unsigned __int64)v3 > MmUserProbeAddress || v3 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
}
