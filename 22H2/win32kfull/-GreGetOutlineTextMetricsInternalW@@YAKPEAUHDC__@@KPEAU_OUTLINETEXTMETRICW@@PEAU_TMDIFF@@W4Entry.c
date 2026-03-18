/*
 * XREFs of ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0081368
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0081200 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0076E28 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C00816AC (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C008299C (cjIFIMetricsToOTMW.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00BDC38 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C010F190 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01110BC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, unsigned int a2, char *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rax
  struct LFONT *v10; // rbx
  Gre::Base *v11; // rcx
  __int64 v12; // rbx
  struct _IFIMETRICS *v13; // rcx
  unsigned int v15; // eax
  int v16; // esi
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  struct LFONT *v21; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[32]; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Src[240]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0;
  v5 = a2;
  v8 = 0;
  if ( !a2 && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( !v23[0] )
  {
    EngSetLastError(6u);
LABEL_33:
    DCOBJ::~DCOBJ((DCOBJ *)v23);
    return 0LL;
  }
  v22[1] = *(unsigned __int16 *)(v23[0] + 12LL);
  v9 = *(_QWORD *)(v23[0] + 976LL);
  v22[0] = 5;
  if ( (*(_DWORD *)(v9 + 152) & 0x10) != 0 )
  {
    v19 = 0;
    v25 = 0LL;
    v17 = 0;
    v20 = *(_QWORD *)(v23[0] + 48LL);
    if ( (*(_DWORD *)(v20 + 40) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v20);
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v21,
      *(struct HLFONT__ **)(*(_QWORD *)(v23[0] + 976LL) + 296LL),
      (struct PDEVOBJ *)&v20);
    v10 = v21;
    if ( !v21 )
      goto LABEL_33;
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    {
      if ( v10 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
      goto LABEL_33;
    }
    v26 = *((_QWORD *)Gre::Base::Globals(v11) + 6);
    GreAcquireSemaphore(v26);
    LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v21, (struct XDCOBJ *)v23, &v19, &v25, &v17, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v26);
    if ( v10 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
  }
  v18 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v18, (struct XDCOBJ *)v23, 0, 2u, (const struct RFONTOBJ::Tag *)v22) )
    GreAcquireSemaphore(v18[63]);
  if ( !v18 || (v12 = v18[15]) == 0 )
  {
    EngSetLastError(6u);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    goto LABEL_33;
  }
  if ( !*(_QWORD *)(v18[12] + 3056LL) )
    goto LABEL_29;
  v13 = *(struct _IFIMETRICS **)(v12 + 32);
  v17 = 0;
  *a4 = cjOTMAWSize(v13, &v17);
  if ( !a3 )
  {
    v8 = v17;
LABEL_29:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    if ( v23[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v23);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
    return v8;
  }
  if ( (unsigned int)v5 > 0xE8 )
  {
    if ( (unsigned int)v5 >= v17 )
    {
      v15 = cjIFIMetricsToOTMW(a4, a3, &v18, v23, *(_QWORD *)(v12 + 32), 1);
      v16 = v5 - v15;
      v8 = v15;
      if ( v16 > 0 )
        memset_0(&a3[v15], 0, v16);
    }
    goto LABEL_29;
  }
  memset_0(Src, 0, 0xE8uLL);
  if ( (unsigned int)cjIFIMetricsToOTMW(a4, Src, &v18, v23, *(_QWORD *)(v12 + 32), 0) )
  {
    memmove(a3, Src, v5);
    v4 = v5;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return v4;
}
