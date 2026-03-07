__int64 __fastcall HalpDmaReturnPageToOwner(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // zf

  *(_QWORD *)(a3 + 56) = a3;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a3 + 48);
    v6 = v5 & 4;
    if ( *(_BYTE *)(a1 + 442) )
    {
      if ( (v5 & 4) == 0 )
      {
        v4 = a3;
        return HalpDmaReturnToScatterPool(a1, v4, 0LL, a3);
      }
      v7 = (v5 & 8) == 0;
      a1 = a2;
      v4 = a3;
      if ( !v7 )
        return HalpDmaReturnToScatterPool(a1, v4, 0LL, a3);
    }
    else
    {
      v4 = a3;
      if ( v6 )
        a1 = a2;
    }
  }
  else
  {
    v4 = a3;
    a1 = a2;
    if ( (*(_BYTE *)(a3 + 48) & 8) != 0 )
      return HalpDmaReturnToScatterPool(a1, v4, 0LL, a3);
  }
  return HalpDmaReturnToContiguousPool(a1, v4, 0LL);
}
