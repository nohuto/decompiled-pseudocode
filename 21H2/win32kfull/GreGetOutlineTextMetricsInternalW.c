/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C0018120
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0017E90 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C0013FC0 (cjIFIMetricsToOTMW.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C0017FD4 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C001CC60 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C011B934 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v8; // r14d
  __int64 v10; // rdx
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
  struct _POINTL v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[40]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int Src[60]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  v8 = 0;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  v10 = v23[0];
  if ( v23[0] )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v23[0] + 976LL) + 152LL) & 0x10) != 0 )
    {
      v18 = 0;
      v21 = 0LL;
      v16 = 0;
      v19 = *(_QWORD *)(v23[0] + 48LL);
      if ( (*(_DWORD *)(v19 + 40) & 0x40) == 0 )
      {
        PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v19);
        v10 = v23[0];
      }
      LFONTOBJ::LFONTOBJ(
        (LFONTOBJ *)&v20,
        *(struct HLFONT__ **)(*(_QWORD *)(v10 + 976) + 296LL),
        (struct PDEVOBJ *)&v19);
      v11 = v20;
      if ( !v20 )
        goto LABEL_29;
      if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
        goto LABEL_29;
      }
      v22 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v20, (struct XDCOBJ *)v23, &v18, &v21, &v16, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v22);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
    }
    v17 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v23, 0, 2u) )
      GreAcquireSemaphore(v17[63]);
    if ( v17 && (v12 = v17[15]) != 0 )
    {
      if ( *(_QWORD *)(v17[12] + 3056LL) )
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
                                 (struct DCOBJ *)v23,
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
                    (struct DCOBJ *)v23,
                    *(struct _IFIMETRICS **)(v12 + 32),
                    1);
            v15 = v5 - v14;
            v8 = v14;
            if ( v15 > 0 )
              memset(&a3[v14], 0, v15);
          }
        }
        else
        {
          v8 = v16;
        }
      }
      v4 = v8;
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
  MDCOBJ::~MDCOBJ((MDCOBJ *)v23);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
  return v4;
}
