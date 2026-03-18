/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A583C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0124A18 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C016FEF6 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02A51B0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v3; // esi
  int v5; // ebx
  struct PFE *v6; // r8
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)this + 844LL);
  v8 = 0LL;
  memset(v9, 0, sizeof(v9));
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v9, a2);
  v6 = *(struct PFE **)((char *)&gappfeSystemDBCS + (v5 != 0 ? 8 : 0));
  if ( !v6 )
    v6 = gappfeSystemDBCS;
  RFONTOBJ::vInit((RFONTOBJ *)&v8, a2, v6, (struct _EUDCLOGFONT *)v9);
  if ( v8 )
    *(_QWORD *)(*(_QWORD *)this + 720LL) = v8;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 720LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  return v3;
}
