/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C009B9F8
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C009BE40 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     cjIFIMetricsToOTMW @ 0x1C0064470 (cjIFIMetricsToOTMW.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0097A10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C009B854 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C009B920 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C009BCF4 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013008C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C0169DAC (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C016A2D0 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v9; // r14d
  struct LFONT *v11; // rbx
  __int64 v12; // rbx
  struct _IFIMETRICS *v13; // rcx
  unsigned int v14; // eax
  int v15; // esi
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  struct LFONT *v20; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[32]; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v23; // [rsp+88h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  unsigned int Src[60]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  v9 = 0;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v21[0] = 0LL;
  v21[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v22);
  XDCOBJ::vLock((XDCOBJ *)v21, a1);
  if ( v21[0] )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 152LL) & 0x10) != 0 )
    {
      v18 = 0;
      v23 = 0LL;
      v16 = 0;
      v19 = *(_QWORD *)(v21[0] + 48LL);
      if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v19) )
        PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v19);
      LFONTOBJ::LFONTOBJ(
        (LFONTOBJ *)&v20,
        *(struct HLFONT__ **)(*(_QWORD *)(v21[0] + 976LL) + 296LL),
        (struct PDEVOBJ *)&v19);
      v11 = v20;
      if ( !v20 )
        goto LABEL_29;
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
        goto LABEL_29;
      }
      v24 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v20, (struct XDCOBJ *)v21, &v18, &v23, &v16, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v24);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
    }
    v17 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v21, 0, 2u) )
      GreAcquireSemaphore(v17[63]);
    if ( v17 && (v12 = v17[15]) != 0 )
    {
      if ( *(_QWORD *)(v17[12] + 3080LL) )
      {
        v13 = *(struct _IFIMETRICS **)(v12 + 32);
        v16 = 0;
        *(_DWORD *)a4 = cjOTMAWSize(v13, &v16);
        if ( a3 )
        {
          if ( (unsigned int)v5 <= 0xE8 )
          {
            memset(Src, 0, 0xE8uLL);
            if ( (unsigned int)cjIFIMetricsToOTMW(
                                 a4,
                                 Src,
                                 (struct RFONTOBJ *)&v17,
                                 (struct DCOBJ *)v21,
                                 *(struct _IFIMETRICS **)(v12 + 32),
                                 0) )
            {
              memmove(a3, Src, v5);
              v4 = v5;
            }
            goto LABEL_28;
          }
          if ( (unsigned int)v5 >= v16 )
          {
            v14 = cjIFIMetricsToOTMW(
                    a4,
                    (unsigned int *)a3,
                    (struct RFONTOBJ *)&v17,
                    (struct DCOBJ *)v21,
                    *(struct _IFIMETRICS **)(v12 + 32),
                    1);
            v15 = v5 - v14;
            v9 = v14;
            if ( v15 > 0 )
              memset(&a3[v14], 0, v15);
          }
        }
        else
        {
          v9 = v16;
        }
      }
      v4 = v9;
    }
    else
    {
      EngSetLastError(6u);
    }
LABEL_28:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    goto LABEL_29;
  }
  EngSetLastError(6u);
LABEL_29:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v21);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v22);
  return v4;
}
