/*
 * XREFs of ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C0124BF8
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0124A18 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C02A57A4 (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::AddUFIToBuffer(
        RFONTOBJ *this,
        struct PFE *a2,
        struct _UNIVERSAL_FONT_ID **a3,
        int *a4,
        int a5)
{
  _QWORD **v6; // r10
  int *v7; // r11
  int v8; // edx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v9[0] = *((_QWORD *)a2 + 4);
    if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v9) )
    {
      v8 = *v7;
      if ( *v7 < a5 )
        *(*v6)++ = *(_QWORD *)((char *)a2 + 84);
      *v7 = v8 + 1;
    }
  }
}
