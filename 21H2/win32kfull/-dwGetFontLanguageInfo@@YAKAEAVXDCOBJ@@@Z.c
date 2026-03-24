/*
 * XREFs of ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028B274
 * Callers:
 *     NtGdiGetDCDword @ 0x1C00FA870 (NtGdiGetDCDword.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0097AA0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C009B8E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C009B9B0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013043C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall dwGetFontLanguageInfo(struct XDCOBJ *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  struct PFE *v4; // rax
  __int64 v5; // rcx
  struct _POINTL v7; // [rsp+30h] [rbp-10h] BYREF
  __int64 v8; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+28h] BYREF
  struct LFONT *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0x8000;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v12 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 40) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v12);
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v11,
      *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL),
      (struct PDEVOBJ *)&v12);
    if ( v11 )
    {
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v8 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v10 = 0;
        v9 = 0;
        v7 = 0LL;
        v4 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v11, a1, &v10, &v7, &v9, 0);
        if ( v4 )
        {
          v5 = *((_QWORD *)v4 + 4);
          v2 = *(_DWORD *)(v5 + 164) != 0 ? 8 : 0;
          if ( (*(_DWORD *)(v5 + 48) & 0x80000001) != 0 )
            v2 |= 0x40000u;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v8);
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
    }
  }
  return v2;
}
