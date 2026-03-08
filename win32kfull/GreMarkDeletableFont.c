/*
 * XREFs of GreMarkDeletableFont @ 0x1C010E8B4
 * Callers:
 *     DeleteMetricsFont @ 0x1C00B8050 (DeleteMetricsFont.c)
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     UserSetFont @ 0x1C010E6E8 (UserSetFont.c)
 *     CreateFontFromUserProfile @ 0x1C010E764 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C8BB4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0111C24 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1)
{
  __int64 v2; // rdx
  struct LFONT *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v4, a1, 0LL);
  v3 = (struct LFONT *)v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 28) & 2) == 0 )
    {
      LOBYTE(v2) = 10;
      HmgMarkDeletable(a1, v2);
    }
    if ( v3 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
  }
}
