/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00BA638
 * Callers:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00B7C2C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     ?vInitEmergencyStockFont@@YAXPEBG@Z @ 0x1C00B9F44 (-vInitEmergencyStockFont@@YAXPEBG@Z.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C02A0B3C (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C03B6790 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C03B85AC (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadAFont(
        PUBLIC_PFTOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int a4,
        struct PFF **a5,
        struct _EUDCLOAD *a6,
        int a7)
{
  __int64 v7; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  unsigned int Fonts; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8

  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v12 = v7 + 1;
  if ( v12 > 0x1388000 )
    return 0LL;
  v13 = AllocFreeTmpBuffer(2 * v12);
  v14 = (unsigned __int16 *)v13;
  if ( !v13 )
    return 0LL;
  cCapString(v13, a2, v12);
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v14, v12, 1u, 0LL, 0, a3, a4, a5, 0, 0, a6, a7, 0);
  FreeTmpBuffer(v14, v16, v17);
  return Fonts;
}
