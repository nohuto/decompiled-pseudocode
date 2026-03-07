__int64 __fastcall IommuMapLogicalRange(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // r8
  ULONG_PTR v6; // r10
  ULONG_PTR v7; // r11

  if ( *(_DWORD *)(a1 + 8) )
    return 3221225711LL;
  if ( !(unsigned __int8)IommupValidateMdl(a3) )
    return 3221225713LL;
  if ( (v6 & 0xFFF) != 0 )
    return 3221225714LL;
  return HalpIommuDomainMapLogical(
           v7,
           a2,
           (int)v5 + 8 * (*(_DWORD *)(v5 + 44) >> 12) + 48,
           (unsigned __int64)*(unsigned int *)(v5 + 40) >> 12,
           v6);
}
