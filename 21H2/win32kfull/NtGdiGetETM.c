/*
 * XREFs of NtGdiGetETM @ 0x1C013F9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C009EC8C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C013FC84 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C01405BC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C016B364 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C016B450 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026D1C4 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026D1F0 (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02C29C0 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, ULONG64 a2)
{
  unsigned int v3; // edi
  SIZE sizLogResPpi; // rbx
  __int64 v5; // r8
  struct _SURFOBJ *v6; // rdx
  struct _SURFOBJ *v7; // rax
  __int64 v8; // r9
  _BYTE *v9; // rdx
  struct _FONTOBJ *v11; // [rsp+50h] [rbp-118h] BYREF
  int v12; // [rsp+58h] [rbp-110h]
  PVOID pvProducer; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v14[3]; // [rsp+68h] [rbp-100h] BYREF
  _QWORD v15[6]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v16[112]; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+120h] [rbp-48h] BYREF
  __int128 v18; // [rsp+130h] [rbp-38h]
  __int128 v19; // [rsp+140h] [rbp-28h]
  int v20; // [rsp+150h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( a2 && v15[0] )
  {
    v11 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v15, 0, 2u) )
      GreAcquireSemaphore(v11[7].pvProducer);
    if ( v11 )
    {
      sizLogResPpi = v11[1].sizLogResPpi;
      v14[2] = sizLogResPpi;
      if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3064LL) )
      {
        v12 = 256;
        v5 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 40LL) & 0x8000) != 0 )
          v5 = *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 1800LL);
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetETMFontManagement)(
                             &v11,
                             sizLogResPpi,
                             v5) )
        {
          v14[0] = *(_QWORD *)&v11[2].iUniq;
          v6 = (struct _SURFOBJ *)((*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 2552LL) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)&sizLogResPpi + 2552LL) >> 64));
          if ( v6 )
          {
            v3 = PFFOBJ::FontManagement((PFFOBJ *)v14, v6, v11, 0x100u, 0, 0LL, 0x34u, &v17);
          }
          else
          {
            SURFFAKEOBJ::SURFFAKEOBJ(
              (SURFFAKEOBJ *)v16,
              *(HDEV *)&v11[1].ulStyleSize,
              (struct DHPDEV__ *)v11[1].pvConsumer);
            if ( (unsigned int)SURFREF::bValid((SURFREF *)v16) )
            {
              v7 = SURFREF::pSurfobj((SURFREF *)v16);
              v3 = PFFOBJ::FontManagement((PFFOBJ *)v14, v7, v11, 0x100u, 0, 0LL, 0x34u, &v17);
            }
            SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v16);
          }
        }
      }
      if ( !v3 )
      {
        pvProducer = v11[1].pvProducer;
        if ( pvProducer )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)&pvProducer) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)&v17,
              (struct RFONTOBJ *)&v11,
              (struct DCOBJ *)v15,
              *(struct _IFIMETRICS **)(v8 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  }
  if ( v3 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[51] = v9[51];
    *(_OWORD *)a2 = v17;
    *(_OWORD *)(a2 + 16) = v18;
    *(_OWORD *)(a2 + 32) = v19;
    *(_DWORD *)(a2 + 48) = v20;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v3;
}
