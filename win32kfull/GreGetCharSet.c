/*
 * XREFs of GreGetCharSet @ 0x1C0111B08
 * Callers:
 *     ?GrepGetTextCharsetInfo@@YAHPEAUHDC__@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C01119CC (-GrepGetTextCharsetInfo@@YAHPEAUHDC__@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiGetCharSet @ 0x1C0111AF0 (NtGdiGetCharSet.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00F5628 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0111C24 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C011AC70 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C011C60C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v1; // rdx
  struct LFONT *v2; // rbx
  Gre::Base *v3; // rcx
  unsigned int v4; // ebx
  struct LFONT *v6; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTL v7; // [rsp+38h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v11 = 0;
  v7 = 0LL;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v1 = v9[0];
  if ( v9[0] )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 152LL) & 0x10) == 0 )
    {
LABEL_10:
      v4 = *(_DWORD *)(*(_QWORD *)(v1 + 976) + 4LL);
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
      return v4;
    }
    v12 = *(_QWORD *)(v9[0] + 48LL);
    if ( (*(_DWORD *)(v12 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v12);
      v1 = v9[0];
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(*(_QWORD *)(v1 + 976) + 296LL), (struct PDEVOBJ *)&v12);
    v2 = v6;
    if ( v6 )
    {
      if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v8 = *((_QWORD *)Gre::Base::Globals(v3) + 6);
        GreAcquireSemaphore(v8);
        LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v6, (struct XDCOBJ *)v9, &v11, &v7, &v10, 0);
        SEMOBJ::vUnlock((SEMOBJ *)&v8);
        if ( v2 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
        v1 = v9[0];
        goto LABEL_10;
      }
      if ( v2 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return 0x10000LL;
}
