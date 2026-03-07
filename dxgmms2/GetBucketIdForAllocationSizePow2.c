__int64 __fastcall GetBucketIdForAllocationSizePow2(unsigned __int64 a1)
{
  int v3; // eax

  if ( a1 > 0x100000000LL )
    return 21LL;
  if ( !_BitScanReverse((unsigned int *)&v3, a1 >> 12) )
    return 0LL;
  else
    return (unsigned int)(v3 + 1);
}
