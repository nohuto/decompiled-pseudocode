__int64 __fastcall IommuUnmapIdentityRangeEx(ULONG_PTR a1, int a2)
{
  int v3; // r8d
  int v4; // r8d
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR v13; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  LOBYTE(v12) = 0;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
      return 0LL;
    if ( v4 != 2 )
      return 3221225711LL;
  }
  if ( (int)IommupProcessPhysicalAddress(a2, (unsigned int)&v14, (unsigned int)&v12, (unsigned int)&v11, (__int64)&v13) < 0 )
    return 3221225712LL;
  v6 = v14;
  v7 = v14 >> 12;
  if ( (_BYTE)v12 )
  {
    result = HalpIommuDomainFreeLogicalAddressRange(a1, v13);
    if ( (int)result >= 0 )
    {
      v12 = v6;
      return HalpIommuDomainUnmapLogicalRange(a1, v13, &v12, 0);
    }
  }
  else
  {
    v8 = v11;
    v9 = 0;
    if ( v7 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        result = HalpIommuDomainFreeLogicalAddressRange(a1, (unsigned __int16)*(_QWORD *)(v8 + 8 * v10) << 12);
        if ( (int)result < 0 )
          break;
        v10 = ++v9;
        if ( v9 >= v7 )
          return HalpIommuDomainUnmapIdentityRange(a1, v8, v7);
      }
    }
    else
    {
      return HalpIommuDomainUnmapIdentityRange(a1, v8, v7);
    }
  }
  return result;
}
