__int64 __fastcall KasanTrackAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int ZeroedPageTables; // eax
  unsigned int v5; // ecx

  if ( !KasaniEnabled || !a2 )
    return 0LL;
  if ( a1 < 0xFFFF800000000000uLL )
    return 3221225711LL;
  if ( a1 + a2 < a1 )
    return 3221225621LL;
  if ( a3 > (unsigned __int16)KeNumberNodes )
    return 3221225713LL;
  ZeroedPageTables = MiMakeZeroedPageTablesEx(
                       (((KasaniShadow + ((a1 + 0x800000000000LL) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       (((KasaniShadow + ((a1 - (((_BYTE)a2 - 1) & 7) + 0x800000000006LL + a2) >> 3)) >> 9) & 0x7FFFFFFFF8LL)
                     - 0x98000000000LL,
                       560,
                       17,
                       a3);
  v5 = 0;
  if ( !ZeroedPageTables )
    return (unsigned int)-1073741670;
  return v5;
}
