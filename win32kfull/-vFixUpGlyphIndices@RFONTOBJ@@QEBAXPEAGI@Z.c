/*
 * XREFs of ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C01225B4
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C010F854 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112B88 (-GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0121B00 (-GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02901F4 (-GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFixUpGlyphIndices(RFONTOBJ *this, unsigned __int16 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int16 v5; // r9
  unsigned __int16 *v6; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 32);
    v5 = *(unsigned __int8 *)(v4 + 108);
    if ( *(_BYTE *)(v4 + 108) )
    {
      v6 = &a2[a3];
      while ( a2 < v6 )
        *a2++ -= v5;
    }
  }
}
