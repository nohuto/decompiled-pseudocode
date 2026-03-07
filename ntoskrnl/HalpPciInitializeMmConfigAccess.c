__int64 __fastcall HalpPciInitializeMmConfigAccess(__int64 a1)
{
  __int64 Table; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r8d
  _BYTE *v5; // rdx
  char v6; // al
  unsigned int v7; // r10d
  __int64 result; // rax

  if ( HalpAvoidMmConfigAccessMethod )
    return 0LL;
  Table = HalpAcpiGetTable(a1, 1195787085, 0, 0);
  v2 = Table;
  if ( !Table )
    return 0LL;
  v3 = *(unsigned int *)(Table + 4);
  if ( (unsigned int)v3 >= 0x3C )
  {
    HalpPciMcfgTableSegments = 0;
    v4 = 0;
    HalpPciMcfgTable = v2;
    HalpPciMcfgTableCount = (unsigned __int64)(v3 - 44) >> 4;
    if ( HalpPciMcfgTableCount )
    {
      v5 = (_BYTE *)(v2 + 55);
      do
      {
        v6 = 0;
        v7 = 0;
        if ( v4 )
        {
          do
          {
            if ( *(_WORD *)(v2 + 16LL * v7 + 52) == *(_WORD *)(v5 - 3) )
            {
              if ( *(_QWORD *)(v2 + 16LL * v7 + 44) != *(_QWORD *)(v5 - 11) && !HalpPciMultiBaseAddressSegmentAllowed
                || *(_BYTE *)(v2 + 16LL * v7 + 54) <= *v5 && *(_BYTE *)(v2 + 16LL * v7 + 55) >= *(v5 - 1) )
              {
                HalpPciMcfgTable = 0LL;
                result = 3221225473LL;
                HalpPciMcfgTableCount = 0;
                HalpPciMcfgTableSegments = 0;
                return result;
              }
              v6 = 1;
            }
            ++v7;
          }
          while ( v7 < v4 );
          if ( v6 )
            goto LABEL_8;
        }
        ++HalpPciMcfgTableSegments;
LABEL_8:
        ++v4;
        v5 += 16;
      }
      while ( v4 < HalpPciMcfgTableCount );
    }
    off_140C01E70 = (char (*)())HalpPciGetDeviceLocationFromPhysicalAddress;
    return 0LL;
  }
  return 3221225473LL;
}
