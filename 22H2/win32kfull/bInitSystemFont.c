/*
 * XREFs of bInitSystemFont @ 0x1C039434C
 * Callers:
 *     bInitStockFontsInternal @ 0x1C0392344 (bInitStockFontsInternal.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00A1C50 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     hfontCreate @ 0x1C00BBBA0 (hfontCreate.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00E49A0 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00E49D8 (vIFIMetricsToEnumLogFontExDvW.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall bInitSystemFont(unsigned __int16 *a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v6; // rdi
  unsigned int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // r11
  int v10; // edx
  struct HOBJ__ *v11; // rax
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  struct PFF *v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTHASH **v15; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD Src[108]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = 0;
  v13 = 0;
  memset(Src, 0, 0x1A4uLL);
  if ( !a1 )
    return v4;
  if ( !*a1 )
    return v4;
  if ( !a2 )
    return v4;
  v15 = gpPFTPublic;
  v14 = 0LL;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v15, a1, &v13, 2u, &v14, 0LL, 0) || !v13 || !v14 )
    return v4;
  v5 = 0x7FFFFFFF;
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_QWORD *)v14 + v7 + 27);
    if ( !v8 )
      goto LABEL_13;
    v9 = *(_QWORD *)(v8 + 32);
    if ( (*(_DWORD *)(v9 + 48) & 0x3000010) != 0 )
      break;
    v10 = a2 - *(__int16 *)(v9 + 62) - *(__int16 *)(v9 + 60);
    if ( v10 >= 0 && v10 < v5 )
    {
      v5 = a2 - *(__int16 *)(v9 + 62) - *(__int16 *)(v9 + 60);
      v6 = *((_QWORD *)v14 + v7 + 27);
      if ( !v10 )
        goto LABEL_16;
    }
LABEL_13:
    if ( ++v7 >= v13 )
      goto LABEL_16;
  }
  v6 = *((_QWORD *)v14 + v7 + 27);
LABEL_16:
  if ( v6 )
  {
    vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v6 + 32));
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 48LL) & 0x3000010) != 0 )
    {
      Src[0] = a2;
      Src[1] = 0;
    }
    gppfeMapperDefault = (struct PFE *)v6;
    BYTE2(Src[6]) = 2;
    v11 = hfontCreate((WCHAR *)Src, 1, 2, 0LL, 0x48u);
    return (unsigned int)bSetStockFont(v11, 13, 0);
  }
  return v4;
}
