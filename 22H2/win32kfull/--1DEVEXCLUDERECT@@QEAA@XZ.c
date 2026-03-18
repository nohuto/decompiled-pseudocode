/*
 * XREFs of ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0274E7C
 * Callers:
 *     ?GreDrawEscape@@YAHPEAUHDC__@@HAEBV?$umptr_r@D@@@Z @ 0x1C02754CC (-GreDrawEscape@@YAHPEAUHDC__@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0276D58 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C027C090 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027AECC (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ??0BMPDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z @ 0x1C02A11C4 (--0BMPDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A2F10 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ??0REDIRDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z @ 0x1C02A4064 (--0REDIRDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A6678 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

void __fastcall DEVEXCLUDERECT::~DEVEXCLUDERECT(DEVEXCLUDERECT *this)
{
  int v2; // r8d
  struct SURFACE *v3; // [rsp+30h] [rbp+8h] BYREF
  struct SURFACE *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)this )
  {
    REDIRDEVDCOPEN::REDIRDEVDCOPEN((REDIRDEVDCOPEN *)&v4, *((struct XDCOBJ **)this + 4));
    BMPDEVDCOPEN::BMPDEVDCOPEN((BMPDEVDCOPEN *)&v3, *((struct XDCOBJ **)this + 4));
    GreUnTearDownSprites(*((HDEV *)this + 1), (struct _RECTL *)this + 1, v2);
    if ( v3 )
      bBmpMakeOpaque(v3);
    if ( v4 )
      bMakeOpaque(v4);
  }
}
