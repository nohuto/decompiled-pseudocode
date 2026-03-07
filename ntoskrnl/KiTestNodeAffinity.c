__int64 __fastcall KiTestNodeAffinity(_WORD *a1)
{
  unsigned __int16 v3; // dx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // r10

  if ( (unsigned int)KeIsEqualAffinityEx(a1, &KeActiveProcessors) )
    return 1LL;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v3 = 0;
    if ( !*a1 )
      return 1LL;
    while ( 1 )
    {
      v4 = *(_QWORD *)&a1[4 * v3 + 4];
      if ( v4 )
        break;
LABEL_9:
      if ( ++v3 >= *a1 )
        return 1LL;
    }
    while ( 1 )
    {
      _BitScanReverse64(&v5, v4);
      v6 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v3 + (int)v5]] + 192)
                     + 128LL);
      if ( (v4 & v6) != v6 )
        break;
      v4 &= ~v6;
      if ( !v4 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
