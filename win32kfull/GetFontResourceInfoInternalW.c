/*
 * XREFs of GetFontResourceInfoInternalW @ 0x1C0305498
 * Callers:
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02C56E0 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C011D0B8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vIFIMetricsToLogFontW @ 0x1C02B5CC4 (vIFIMetricsToLogFontW.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C02E3154 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 */

__int64 __fastcall GetFontResourceInfoInternalW(
        Gre::Base *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        int a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v11; // rdi
  struct Gre::Base::SESSION_GLOBALS *v12; // rbx
  __int64 v13; // rcx
  struct PFF *v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rdx
  unsigned int FontFile; // eax
  _QWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-28h] BYREF

  v7 = a4;
  v11 = 0LL;
  v12 = Gre::Base::Globals(a1);
  v22 = *((_QWORD *)v12 + 6);
  GreAcquireSemaphore(v22);
  v21[0] = *((_QWORD *)v12 + 796);
  if ( !v21[0]
    || (v14 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v21, (const unsigned __int16 *)a1, a2, a3, 0LL, 0, 0LL, 0)) == 0LL )
  {
    v21[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 32) + 20272LL);
    v14 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v21, (const unsigned __int16 *)a1, a2, a3, 0LL, 0, 0LL, 0);
    if ( !v14 )
    {
      if ( a7 != 5 )
        goto LABEL_43;
      if ( (_DWORD)v7 )
      {
        if ( !a6 || (unsigned int)v7 < 4 )
          goto LABEL_43;
        *a6 = 1;
      }
LABEL_41:
      LODWORD(v11) = 1;
      goto LABEL_42;
    }
  }
  switch ( a7 )
  {
    case 0:
      if ( (_DWORD)v7 )
      {
        if ( (unsigned int)v7 < 4 )
          goto LABEL_43;
        *a6 = *((_DWORD *)v14 + 52);
      }
      goto LABEL_14;
    case 1:
      v18 = *((_QWORD *)v14 + 10);
      v21[0] = *((_QWORD *)v14 + 11);
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)v21, v18, 1u, 0, 0LL);
      if ( FontFile == -1 )
        goto LABEL_43;
      if ( (_DWORD)v7 )
      {
        if ( FontFile > (unsigned int)v7 )
          goto LABEL_43;
        FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)v21, *((_QWORD *)v14 + 10), 1u, v7, a6);
        if ( FontFile == -1 )
          goto LABEL_43;
      }
      v16 = FontFile;
LABEL_32:
      LODWORD(v11) = 1;
      *a5 = v16;
      goto LABEL_43;
    case 2:
      v15 = *((unsigned int *)v14 + 52);
      v16 = 92 * v15;
      if ( (_DWORD)v7 )
      {
        if ( v7 < v16 )
          goto LABEL_43;
        v17 = 0;
        if ( (_DWORD)v15 )
        {
          do
          {
            vIFIMetricsToLogFontW((__int64)a6 + v11, *(_QWORD *)(*((_QWORD *)v14 + v17 + 27) + 32LL));
            v11 += 92LL;
            ++v17;
          }
          while ( v17 < *((_DWORD *)v14 + 52) );
        }
        v16 = v11;
      }
      goto LABEL_32;
    case 3:
      if ( (_DWORD)v7 )
      {
        if ( !a6 || (unsigned int)v7 < 4 )
          goto LABEL_43;
        if ( *((_QWORD *)v14 + 11) == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 32) + 23448LL)
          && !*(_DWORD *)(*((_QWORD *)v14 + 10) + 8LL) )
        {
          LODWORD(v11) = 1;
        }
        *a6 = v11;
      }
      goto LABEL_41;
  }
  if ( a7 != 5 )
  {
    EngSetLastError(0x57u);
    goto LABEL_43;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_14;
  if ( a6 && (unsigned int)v7 >= 4 )
  {
    *a6 = 0;
LABEL_14:
    LODWORD(v11) = 1;
LABEL_42:
    *a5 = 4LL;
  }
LABEL_43:
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  return (unsigned int)v11;
}
