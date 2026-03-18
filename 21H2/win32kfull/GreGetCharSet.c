/*
 * XREFs of GreGetCharSet @ 0x1C001C490
 * Callers:
 *     NtGdiGetCharSet @ 0x1C001C2B0 (NtGdiGetCharSet.c)
 *     GreGetTextCharsetInfo @ 0x1C001C364 (GreGetTextCharsetInfo.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C001CC60 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C011B934 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v2; // rdx
  struct LFONT *v3; // rbx
  unsigned int v4; // ebx
  struct LFONT *v6; // [rsp+30h] [rbp-50h] BYREF
  struct _POINTL v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+54h] [rbp-2Ch]
  _BYTE v12[40]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF

  v14 = 0;
  v7 = 0LL;
  v13 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v12);
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  v2 = v9;
  if ( !v9 )
  {
    EngSetLastError(6u);
LABEL_12:
    v4 = 0x10000;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 976) + 152LL) & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(v9 + 48);
    if ( (*(_DWORD *)(v15 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v15);
      v2 = v9;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(*(_QWORD *)(v2 + 976) + 296LL), (struct PDEVOBJ *)&v15);
    v3 = v6;
    if ( !v6 )
      goto LABEL_12;
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    {
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
      goto LABEL_12;
    }
    v8 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v6, (struct XDCOBJ *)&v9, &v14, &v7, &v13, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v8);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
    v2 = v9;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 976) + 4LL);
LABEL_10:
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
  return v4;
}
