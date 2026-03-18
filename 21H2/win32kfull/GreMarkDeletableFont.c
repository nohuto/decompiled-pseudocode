/*
 * XREFs of GreMarkDeletableFont @ 0x1C00C5A20
 * Callers:
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     UserSetFont @ 0x1C00C5854 (UserSetFont.c)
 *     CreateFontFromUserProfile @ 0x1C00C58D0 (CreateFontFromUserProfile.c)
 *     SetIconMetrics @ 0x1C00C6CF4 (SetIconMetrics.c)
 *     DeleteMetricsFont @ 0x1C00C7520 (DeleteMetricsFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C0158F68 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
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
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
  }
}
