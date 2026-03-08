/*
 * XREFs of ?GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112400
 * Callers:
 *     GetCharDimensions @ 0x1C010F9F4 (GetCharDimensions.c)
 *     NtGdiGetTextMetricsW @ 0x1C0112560 (NtGdiGetTextMetricsW.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C0244494 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024FB18 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C01124D0 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrepGetTextMetricsW(HDC a1, struct _TMW_INTERNAL *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  _DWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-18h] BYREF
  Gre::Base *v10; // [rsp+78h] [rbp+28h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v6 = *(unsigned __int16 *)(v9[0] + 12LL);
    v10 = 0LL;
    v8[1] = v6;
    v8[0] = a3;
    if ( (unsigned int)RFONTOBJ::bInit(&v10, (struct XDCOBJ *)v9, 0, 2u, (const struct RFONTOBJ::Tag *)v8) )
      GreAcquireSemaphore(*((_QWORD *)v10 + 63));
    if ( v10 )
    {
      vGetTextMetrics((struct RFONTOBJ *)&v10, (struct DCOBJ *)v9, a2);
      v5 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  return v5;
}
