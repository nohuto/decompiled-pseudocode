__int64 HalpParseChannelCount()
{
  unsigned int v1; // ecx
  unsigned __int16 v2; // r10
  __int64 v3; // rdx
  unsigned __int16 v4; // r8

  if ( !HalpAcpiMpst )
    return 0LL;
  v1 = 0;
  v2 = *(_WORD *)(HalpAcpiMpst + 40);
  v3 = HalpAcpiMpst + 44;
  v4 = 0;
  if ( v2 )
  {
    do
    {
      if ( v3 + 34 > HalpAcpiMpst + (unsigned __int64)*(unsigned int *)(HalpAcpiMpst + 4) )
        return 0;
      if ( *(_DWORD *)(v3 + 24) && (*(_BYTE *)v3 & 1) != 0 )
        ++v1;
      ++v4;
      v3 += *(unsigned int *)(v3 + 4);
    }
    while ( v4 < v2 );
    if ( v1 && !*(_WORD *)v3 )
      return 0;
  }
  return v1;
}
