/*
 * XREFs of ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C00C48B8
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00C3B70 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00C490C (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 */

char __fastcall QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(
        QueryFontTreeRequest *this,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int *v5; // rbx

  v5 = (unsigned int *)*((_QWORD *)this + 11);
  Win32ProbeForRead(v5, 0x20uLL, 8u);
  *a2 = *v5;
  *a3 = v5[3];
  return 1;
}
