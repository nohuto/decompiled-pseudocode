char __fastcall IoFlushAdapterBuffersV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 520) == 3 )
    {
      if ( *(_BYTE *)(a3 + 64) )
        *(_DWORD *)(a3 + 16) = 0;
      else
        HalpDmaFreeLa(a1, (__int64 *)(a3 + 24));
    }
    if ( !*(_BYTE *)(a1 + 441) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
    if ( *(_BYTE *)(a1 + 440) )
    {
      if ( a3 )
        *(_QWORD *)(a3 + 56) = a3;
      if ( *(_BYTE *)(a1 + 442) )
        HalpDmaFlushScatterTransferV3(a1, a2, a3, a4, a5, a6, 0, 0LL);
      else
        HalpDmaFlushContiguousTransferV3(a1, a2, a3, a4, a5, a6, 0, 0LL);
    }
  }
  return 1;
}
