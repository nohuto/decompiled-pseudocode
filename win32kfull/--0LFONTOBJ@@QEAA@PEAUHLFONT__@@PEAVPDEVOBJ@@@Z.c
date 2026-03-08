/*
 * XREFs of ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0111C24
 * Callers:
 *     cjCopyFontDataW @ 0x1C0004330 (cjCopyFontDataW.c)
 *     FinishStockFontInit @ 0x1C00B9D70 (FinishStockFontInit.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00E42F0 (NtGdiQueryFontAssocInfo.c)
 *     GreMarkDeletableFont @ 0x1C010E8B4 (GreMarkDeletableFont.c)
 *     GreGetCharSet @ 0x1C0111B08 (GreGetCharSet.c)
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0111D54 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C0124150 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C014F852 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0290B74 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02B5E2C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B740C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B7BC0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02B9210 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C03057FC (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, struct PDEVOBJ *a3)
{
  struct HLFONT__ *v3; // rsi
  struct HLFONT__ *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 HDEV; // rbx
  int v11; // edi
  __int64 v12; // rdx
  struct PDEVOBJ *v13; // rax
  _QWORD *v14; // rcx
  int v15; // edi
  int v16; // edi
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = 10;
  v7 = HmgShareLock(v5, a2);
  *(_QWORD *)this = v7;
  if ( v7 && (*(_DWORD *)(v7 + 28) & 1) != 0 )
  {
    HDEV = UserGetHDEV(v8);
    v11 = *(_DWORD *)(*(_QWORD *)this + 24LL);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)this);
    *(_QWORD *)this = 0LL;
    v13 = (struct PDEVOBJ *)&v17;
    v17 = HDEV;
    if ( a3 )
      v13 = a3;
    v14 = *(_QWORD **)v13;
    if ( *(_QWORD *)v13 )
    {
      v15 = v11 - 4;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v3 = (struct HLFONT__ *)v14[180];
        }
        else
        {
          v3 = (struct HLFONT__ *)v14[179];
        }
      }
      else
      {
        v3 = (struct HLFONT__ *)v14[178];
      }
      LOBYTE(v12) = 10;
      *(_QWORD *)this = HmgShareLock(v3, v12);
    }
  }
  return this;
}
