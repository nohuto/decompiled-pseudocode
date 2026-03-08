/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C00BA7B4 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     vProcessEntry @ 0x1C010F5B8 (vProcessEntry.c)
 *     cjIFIMetricsToOTMW @ 0x1C010FC74 (cjIFIMetricsToOTMW.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     EngGetFilePath @ 0x1C027C120 (EngGetFilePath.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C028D170 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C02A0D90 (FontAssocDefaultRoutine.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C02A0F54 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03B6ADC (InitializeDefaultFamilyFonts.c)
 *     DefaultFontQueryRoutine @ 0x1C03B7770 (DefaultFontQueryRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)&a1[v4];
      if ( !v5 )
        break;
      *(_WORD *)a1 = v5;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    v6 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v6 = (unsigned __int16 *)a1;
    *v6 = 0;
    return a2 == 0 ? 0x8007007A : 0;
  }
  return result;
}
