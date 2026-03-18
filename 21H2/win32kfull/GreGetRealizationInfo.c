/*
 * XREFs of GreGetRealizationInfo @ 0x1C0123E74
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C0034580 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C0037300 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // ebx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  RealizationInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v6 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v6, (struct XDCOBJ *)v5, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v6 + 504));
    if ( v6 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v6, a2);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return RealizationInfo;
}
