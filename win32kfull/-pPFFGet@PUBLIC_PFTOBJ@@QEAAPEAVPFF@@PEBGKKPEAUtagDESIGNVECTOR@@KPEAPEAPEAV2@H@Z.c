/*
 * XREFs of ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C011D0B8
 * Callers:
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026DA10 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026DF1C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     GreRemoveFontResourceW @ 0x1C0290E90 (GreRemoveFontResourceW.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D7F24 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     GetFontResourceInfoInternalW @ 0x1C0305498 (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C01181D0 (-iHash@@YAIPEBGI@Z.c)
 *     memcmp @ 0x1C012BEF0 (memcmp.c)
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
  __int64 v11; // rbx
  __int64 v12; // r11
  struct PFF **v13; // rbx
  struct PFF *i; // rbx
  unsigned int v16; // eax

  v9 = a3;
  v11 = (unsigned int)iHash(a2, *(_DWORD *)(*(_QWORD *)this + 24LL));
  v13 = (struct PFF **)(v12 + 8 * (v11 + 5));
  if ( a7 )
    *a7 = v13;
  for ( i = *v13; i; i = (struct PFF *)*((_QWORD *)i + 1) )
  {
    if ( a8 == ((*((_DWORD *)i + 13) >> 3) & 1)
      && (_DWORD)v9 == *((_DWORD *)i + 8)
      && a4 == *((_DWORD *)i + 9)
      && !memcmp(*((const void **)i + 3), a2, 2 * v9) )
    {
      v16 = *((_DWORD *)i + 12);
      if ( a6 == v16 && (!a6 || !memcmp(Buf1, *((const void **)i + 5), v16)) )
        break;
    }
  }
  return i;
}
