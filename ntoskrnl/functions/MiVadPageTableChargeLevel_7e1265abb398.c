__int64 __fastcall MiVadPageTableChargeLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // ecx
  __int64 AweVadPageSize; // rax

  v4 = *(_DWORD *)(a1 + 48);
  if ( (v4 & 0x200000) != 0 )
  {
    if ( (v4 & 0x800000) == 0 && (v4 & 0x180000u) < 0x100000 )
    {
LABEL_4:
      if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
      {
        AweVadPageSize = MiGetAweVadPageSize(a1, a2, a3, a4);
        return MiPageSizeToPteLevel(AweVadPageSize);
      }
      return 0LL;
    }
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    goto LABEL_4;
  }
  v6 = MiVadPageIndices[((unsigned __int64)*(unsigned int *)(a1 + 48) >> 19) & 3];
  if ( v6 > 1 )
    return 0LL;
  result = 1LL;
  if ( !v6 )
    return 2LL;
  return result;
}
