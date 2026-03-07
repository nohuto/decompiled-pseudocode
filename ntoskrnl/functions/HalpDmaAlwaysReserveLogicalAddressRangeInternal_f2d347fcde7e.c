__int64 __fastcall HalpDmaAlwaysReserveLogicalAddressRangeInternal(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( !a2 || (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( a1 > ~a2 )
    return 3221225485LL;
  if ( HalpDmaDomainList )
    return 3221225865LL;
  result = ExtEnvAllocateMemory(a1, 0x20u, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_QWORD *)(v6 + 8) = a1;
    *(_QWORD *)(v5 + 16) = a2 >> 12;
    *(_BYTE *)(v5 + 24) = 0;
    *(_QWORD *)v5 = HalpDmaReservedLaRegions;
    ++HalpDmaReservedLaRegionsCount;
    HalpDmaReservedLaRegions = v5;
  }
  return result;
}
