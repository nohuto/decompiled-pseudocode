__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPool(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV2(v1, v2);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v1, v2);
}
