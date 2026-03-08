/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C027ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C02B6748 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v8; // rsi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  _DWORD v14[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[48]; // [rsp+50h] [rbp-48h] BYREF
  Gre::Base *v17; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (int)a3;
  LinkedFontUFIs = 0;
  v8 = 0LL;
  v9 = (_DWORD)a3 == 0;
  if ( (int)a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 && 8 * (_DWORD)a3 )
        v8 = (struct _UNIVERSAL_FONT_ID *)Win32AllocPool((unsigned int)(8 * a3), 1684629063LL, a3, a4);
      LinkedFontUFIs = (v8 != 0LL) - 1;
      goto LABEL_7;
    }
    v9 = (_DWORD)a3 == 0;
  }
  if ( !v9 && !a2 )
  {
    LinkedFontUFIs = -1;
    goto LABEL_29;
  }
  if ( (int)a3 < 0 && a2 )
    LinkedFontUFIs = -1;
LABEL_7:
  if ( LinkedFontUFIs != -1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v15, a1);
    if ( v15[0] )
    {
      v11 = SGDGetSessionState(v10);
      EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v16, *(struct Gre::Full::SESSION_GLOBALS **)(v11 + 32));
      v12 = *(unsigned __int16 *)(v15[0] + 12LL);
      v14[0] = 3;
      v14[1] = v12;
      v17 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit(&v17, (struct XDCOBJ *)v15, 0, 2u, (const struct RFONTOBJ::Tag *)v14) )
        GreAcquireSemaphore(*((_QWORD *)v17 + 63));
      if ( v17 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v17, (struct XDCOBJ *)v15, v8, v4);
      else
        LinkedFontUFIs = -1;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v16);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    if ( LinkedFontUFIs > 0 && a2 )
    {
      ProbeForWrite(a2, 8 * v4, 4u);
      if ( LinkedFontUFIs < (int)v4 )
        LODWORD(v4) = LinkedFontUFIs;
      memmove(a2, v8, 8LL * (int)v4);
    }
  }
LABEL_29:
  if ( v8 )
    Win32FreePool(v8);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return (unsigned int)LinkedFontUFIs;
}
