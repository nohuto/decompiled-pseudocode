/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F2F78
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
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00F2FE4 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C015EF94 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 16);
  LOBYTE(v4) = 16;
  v5 = HmgShareLockCheck(a2, v4);
  *(_QWORD *)this = v5;
  if ( v5 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
