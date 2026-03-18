/*
 * XREFs of GreGetCharSet @ 0x1C0076CB8
 * Callers:
 *     ?GrepGetTextCharsetInfo@@YAHPEAUHDC__@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0076B44 (-GrepGetTextCharsetInfo@@YAHPEAUHDC__@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiGetCharSet @ 0x1C0076CA0 (NtGdiGetCharSet.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0076E28 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00BDC38 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C010F190 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01110BC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v1; // rdx
  struct LFONT *v3; // rbx
  Gre::Base *v4; // rcx
  unsigned int v5; // ebx
  struct LFONT *v6; // [rsp+30h] [rbp-50h] BYREF
  struct _POINTL v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+98h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF

  v12 = 0;
  v7 = 0LL;
  v11 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v1 = v9[0];
  if ( !v9[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    DCOBJ::~DCOBJ((DCOBJ *)v9);
    return 0x10000LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 152LL) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(v9[0] + 48LL);
    if ( (*(_DWORD *)(v13 + 40) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v13);
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v6,
      *(struct HLFONT__ **)(*(_QWORD *)(v9[0] + 976LL) + 296LL),
      (struct PDEVOBJ *)&v13);
    v3 = v6;
    if ( !v6 )
      goto LABEL_3;
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    {
      if ( v3 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
      goto LABEL_3;
    }
    v8 = *((_QWORD *)Gre::Base::Globals(v4) + 6);
    GreAcquireSemaphore(v8);
    LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v6, (struct XDCOBJ *)v9, &v12, &v7, &v11, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v8);
    if ( v3 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
    v1 = v9[0];
  }
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 976) + 4LL);
  XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v5;
}
