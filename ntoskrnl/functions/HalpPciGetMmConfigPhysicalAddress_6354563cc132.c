__int64 __fastcall HalpPciGetMmConfigPhysicalAddress(__int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r10d
  unsigned __int8 *i; // r9

  v3 = 0;
  if ( !HalpPciMcfgTableCount )
    return 0LL;
  for ( i = (unsigned __int8 *)(HalpPciMcfgTable + 54); a1 != *((_WORD *)i - 1) || a2 < *i || a2 > i[1]; i += 16 )
  {
    if ( ++v3 >= (unsigned int)HalpPciMcfgTableCount )
      return 0LL;
  }
  return *(_QWORD *)(i - 10) + (((a3 >> 5) + 8 * ((a3 & 0x1F) + 32LL * a2)) << 12);
}
