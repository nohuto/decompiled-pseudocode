/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F2EEC
 * Callers:
 *     GreMarkDeletableBrush @ 0x1C00F2A7C (GreMarkDeletableBrush.c)
 *     GreExtCreatePen @ 0x1C00F2B80 (GreExtCreatePen.c)
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0132068 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B4800 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B4A00 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetObjectBitmapHandle @ 0x1C02B5D34 (GreGetObjectBitmapHandle.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00F2F28 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 16);
}
