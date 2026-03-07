__int64 __fastcall IommuUnmapLogicalRange(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int16 v4; // bx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2;
  if ( v3 && v3 != 3 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v7 = a3 << 12;
  result = HalpIommuDomainUnmapLogicalRange(a1, a2, &v7, 0LL);
  if ( (int)result >= 0 )
    return HalpIommuDomainFreeLogicalAddressRange(a1, v4);
  return result;
}
