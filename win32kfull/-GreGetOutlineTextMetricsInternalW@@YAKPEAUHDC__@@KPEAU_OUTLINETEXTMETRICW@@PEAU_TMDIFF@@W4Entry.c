/*
 * XREFs of ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0111D54
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0112170 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00F5628 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C010FC74 (cjIFIMetricsToOTMW.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0111C24 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C0112020 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C011AC70 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C011C60C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, unsigned int a2, unsigned int *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  struct _IFIMETRICS *v12; // rcx
  unsigned int v13; // eax
  int v14; // esi
  struct LFONT *v16; // rbx
  Gre::Base *v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  Gre::Base *v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct LFONT *v23; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v24[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  unsigned int Src[60]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0;
  v5 = a2;
  v8 = 0;
  if ( !a2 && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v9 = v20[0];
  if ( !v20[0] )
  {
    EngSetLastError(6u);
LABEL_33:
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return 0LL;
  }
  v24[1] = *(unsigned __int16 *)(v20[0] + 12LL);
  v10 = *(_QWORD *)(v20[0] + 976LL);
  v24[0] = 5;
  if ( (*(_DWORD *)(v10 + 152) & 0x10) != 0 )
  {
    v21 = 0;
    v25 = 0LL;
    v18 = 0;
    v22 = *(_QWORD *)(v20[0] + 48LL);
    if ( (*(_DWORD *)(v22 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v22);
      v9 = v20[0];
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v23, *(struct HLFONT__ **)(*(_QWORD *)(v9 + 976) + 296LL), (struct PDEVOBJ *)&v22);
    v16 = v23;
    if ( !v23 )
      goto LABEL_33;
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    {
      if ( v16 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v16);
      goto LABEL_33;
    }
    v26 = *((_QWORD *)Gre::Base::Globals(v17) + 6);
    GreAcquireSemaphore(v26);
    LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v23, (struct XDCOBJ *)v20, &v21, &v25, &v18, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v26);
    if ( v16 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v16);
  }
  v19 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v19, (struct XDCOBJ *)v20, 0, 2u, (const struct RFONTOBJ::Tag *)v24) )
    GreAcquireSemaphore(*((_QWORD *)v19 + 63));
  if ( !v19 || (v11 = *((_QWORD *)v19 + 15)) == 0 )
  {
    EngSetLastError(6u);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
    goto LABEL_33;
  }
  if ( !*(_QWORD *)(*((_QWORD *)v19 + 12) + 3056LL) )
  {
LABEL_14:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
    if ( v20[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v20);
    return v8;
  }
  v12 = *(struct _IFIMETRICS **)(v11 + 32);
  v18 = 0;
  *(_DWORD *)a4 = cjOTMAWSize(v12, &v18);
  if ( !a3 )
  {
    v8 = v18;
    goto LABEL_14;
  }
  if ( (unsigned int)v5 > 0xE8 )
  {
    if ( (unsigned int)v5 >= v18 )
    {
      v13 = cjIFIMetricsToOTMW(
              a4,
              a3,
              (struct RFONTOBJ *)&v19,
              (struct XDCOBJ *)v20,
              *(struct _IFIMETRICS **)(v11 + 32),
              1);
      v14 = v5 - v13;
      v8 = v13;
      if ( v14 > 0 )
        memset_0((char *)a3 + v13, 0, v14);
    }
    goto LABEL_14;
  }
  memset_0(Src, 0, 0xE8uLL);
  if ( (unsigned int)cjIFIMetricsToOTMW(
                       a4,
                       Src,
                       (struct RFONTOBJ *)&v19,
                       (struct XDCOBJ *)v20,
                       *(struct _IFIMETRICS **)(v11 + 32),
                       0) )
  {
    memmove(a3, Src, v5);
    v4 = v5;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v4;
}
