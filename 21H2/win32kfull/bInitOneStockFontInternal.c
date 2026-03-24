/*
 * XREFs of bInitOneStockFontInternal @ 0x1C0393720
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00E49D0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitOneStockFont @ 0x1C0393854 (bInitOneStockFont.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00A1DA4 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     hfontCreate @ 0x1C00BBF00 (hfontCreate.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00E4CF0 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00E4D28 (vIFIMetricsToEnumLogFontExDvW.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned int v7; // edi
  __int64 v9; // rbx
  struct HOBJ__ *v10; // rax
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  struct PFF *v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTHASH **v14; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Src[216]; // [rsp+60h] [rbp-A0h] BYREF

  v14 = gpPFTPublic;
  v7 = 0;
  v12 = 0;
  v13 = 0LL;
  memset(Src, 0, 0x1A4uLL);
  if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v14, a1, &v12, 2u, &v13, 0LL, 0) )
  {
    if ( v12 )
    {
      if ( v13 )
      {
        v9 = *((_QWORD *)v13 + 27);
        if ( v9 )
        {
          vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v9 + 32));
          if ( a3 == 13 )
          {
            gppfeMapperDefault = (struct PFE *)v9;
            HIBYTE(Src[11]) = gjCurCharset;
          }
          LOBYTE(Src[13]) = 2;
          v10 = hfontCreate(Src, a2, 2, 0LL, 0x48u);
          return (unsigned int)bSetStockFont(v10, a3, a4);
        }
      }
    }
  }
  return v7;
}
