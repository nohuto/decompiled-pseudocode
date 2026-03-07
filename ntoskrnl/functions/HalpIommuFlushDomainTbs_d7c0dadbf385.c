__int64 __fastcall HalpIommuFlushDomainTbs(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx

  if ( HalpHvIommu )
  {
    IommupHvFlushDomainTbs();
  }
  else
  {
    v4 = ((unsigned __int64)(a2 & 0xFFF) + a3 + 4095) >> 12;
    v5 = a2 & 0xFFFFFFFFFFFFF000uLL;
    while ( v4 )
    {
      v6 = 1024LL;
      if ( v4 < 0x400 )
        v6 = v4;
      HalpIommuFlushDmaDomain(a1, v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v6 - 1)) & 0x3FF);
      v4 -= v6;
      v5 += v6 << 12;
    }
  }
  return 0LL;
}
