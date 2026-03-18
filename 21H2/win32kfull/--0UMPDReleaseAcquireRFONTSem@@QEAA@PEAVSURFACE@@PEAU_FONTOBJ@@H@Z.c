/*
 * XREFs of ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015E008
 * Callers:
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0006B30 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028DCD8 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

UMPDReleaseAcquireRFONTSem *__fastcall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3,
        int a4)
{
  void **v4; // rdi
  __int64 v6; // rax
  struct RFONTOBJ *v7; // rcx

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = (void **)((char *)this + 56);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 7) = (char *)this + 12;
  v6 = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 8) = v6;
  v7 = (UMPDReleaseAcquireRFONTSem *)((char *)this + 72);
  *(_QWORD *)v7 = a3;
  if ( v6 && (*(_DWORD *)(v6 + 40) & 0x8080) == 0x8080 && a3 && a4 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(v7, 0LL, (unsigned int *)this + 1, (unsigned int *)this + 2, v4);
  return this;
}
