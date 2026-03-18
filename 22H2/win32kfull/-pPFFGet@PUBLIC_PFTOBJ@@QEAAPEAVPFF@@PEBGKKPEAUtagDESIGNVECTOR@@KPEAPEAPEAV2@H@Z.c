/*
 * XREFs of ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00A4C34
 * Callers:
 *     bAddAllFlEntry @ 0x1C00897FC (bAddAllFlEntry.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0112870 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01149B0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026AF54 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026B460 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     GreRemoveFontResourceW @ 0x1C028E63C (GreRemoveFontResourceW.c)
 *     GreEudcLoadLinkW @ 0x1C029E958 (GreEudcLoadLinkW.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D6348 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     GetFontResourceInfoInternalW @ 0x1C03036BC (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C0115910 (-iHash@@YAIPEBGI@Z.c)
 *     memcmp @ 0x1C01384A0 (memcmp.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::pPFFGet(
        PUBLIC_PFTOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct tagDESIGNVECTOR *Buf1,
        unsigned int a6,
        struct PFF ***a7,
        int a8)
{
  __int64 v9; // rsi
  __int64 v11; // rcx
  __int64 v12; // r11
  struct PFF **v13; // rcx
  struct PFF *i; // rcx
  unsigned int v15; // eax
  struct PFF *v16; // rax
  struct PFF *v17; // rbx

  v9 = a3;
  v11 = iHash(a2, *(_DWORD *)(*(_QWORD *)this + 24LL));
  v13 = (struct PFF **)(v12 + 8 * (v11 + 5));
  if ( a7 )
    *a7 = v13;
  for ( i = *v13; ; i = (struct PFF *)*((_QWORD *)v17 + 1) )
  {
    v16 = SkipInvalidPff(i);
    v17 = v16;
    if ( !v16 )
      break;
    if ( a8 == ((*((_DWORD *)v16 + 13) >> 3) & 1)
      && (_DWORD)v9 == *((_DWORD *)v16 + 8)
      && a4 == *((_DWORD *)v16 + 9)
      && !memcmp(*((const void **)v16 + 3), a2, 2 * v9) )
    {
      v15 = *((_DWORD *)v17 + 12);
      if ( a6 == v15 && (!a6 || !memcmp(Buf1, *((const void **)v17 + 5), v15)) )
        break;
    }
  }
  return v17;
}
