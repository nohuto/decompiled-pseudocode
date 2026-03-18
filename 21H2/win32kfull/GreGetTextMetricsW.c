/*
 * XREFs of GreGetTextMetricsW @ 0x1C00C42C4
 * Callers:
 *     NtGdiGetTextMetricsW @ 0x1C00329A0 (NtGdiGetTextMetricsW.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     GetCharDimensions @ 0x1C00C40F8 (GetCharDimensions.c)
 *     xxxPSMTextOut @ 0x1C0250058 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025B488 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C00C4370 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, struct _TMW_INTERNAL *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v6[32]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v7 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v7, (struct XDCOBJ *)v5, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v7 + 504));
    if ( v7 )
    {
      vGetTextMetrics((struct RFONTOBJ *)&v7, (struct DCOBJ *)v5, a2);
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
  return v3;
}
