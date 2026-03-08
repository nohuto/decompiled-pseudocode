/*
 * XREFs of ?GreGetRealizationInfo@@YAHPEAUHDC__@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112848
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C0112910 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C0112704 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // ebx
  int v4; // eax
  _DWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-18h] BYREF
  Gre::Base *v8; // [rsp+78h] [rbp+28h] BYREF

  RealizationInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(unsigned __int16 *)(v7[0] + 12LL);
    v8 = 0LL;
    v6[1] = v4;
    v6[0] = 12;
    if ( (unsigned int)RFONTOBJ::bInit(&v8, (struct XDCOBJ *)v7, 0, 2u, (const struct RFONTOBJ::Tag *)v6) )
      GreAcquireSemaphore(*((_QWORD *)v8 + 63));
    if ( v8 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v8, a2);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return RealizationInfo;
}
