_BOOL8 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0
    || *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 6808) + 16LL * a2) >= *(int *)(a1 + 16512) )
  {
    return 1LL;
  }
  else
  {
    return (unsigned __int64)MiNodeFreeZeroPages(
                               (_QWORD *)(*(_QWORD *)(a1 + 16) + 25408 * ((unsigned __int64)a2 >> byte_140C6570D)),
                               (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140C6570E)),
                               a3 != 0 ? 4096 : 4098) <= 0x40;
  }
}
