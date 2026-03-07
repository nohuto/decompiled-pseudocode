void __fastcall HalpDmaReturnPageToSource(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 48);
  if ( (v2 & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 152) )
      a1 = *(_QWORD *)(a1 + 160);
    v3 = v2 | 4;
    if ( (v3 & 2) != 0 )
    {
      *(_QWORD *)(a2 + 48) = v3 | 8;
      HalpDmaReturnToScatterPool(a1, a2, 1);
    }
    else
    {
      *(_QWORD *)(a2 + 48) = v3 & 0xFFFFFFFFFFFFFFF7uLL;
      HalpDmaReturnToContiguousPool(a1, a2, 1);
    }
  }
}
