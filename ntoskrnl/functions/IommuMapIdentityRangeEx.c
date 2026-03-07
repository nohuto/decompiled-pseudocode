__int64 __fastcall IommuMapIdentityRangeEx(ULONG_PTR a1, unsigned int a2, int a3)
{
  int v3; // r9d
  int LogicalAddressRange; // edi
  int v6; // r14d
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 i; // rbx
  unsigned __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v16; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  char v19; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+48h]
  ULONG_PTR v21; // [rsp+A8h] [rbp+58h] BYREF

  v20 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  LogicalAddressRange = 0;
  v18 = 0LL;
  v16 = 0LL;
  v19 = 0;
  v6 = 0;
  v15 = 0LL;
  v17 = 0LL;
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( !v7 )
      return (unsigned int)LogicalAddressRange;
    if ( v7 != 2 )
      return (unsigned int)-1073741585;
  }
  if ( (int)IommupProcessPhysicalAddress(a3, (unsigned int)&v15, (unsigned int)&v19, (unsigned int)&v17, (__int64)&v16) < 0 )
    return (unsigned int)-1073741583;
  v8 = v16;
  v9 = (__int64)v17;
  v10 = v15 >> 12;
  v21 = v16;
  if ( v19 )
  {
    LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, &v21, v15, 0LL, 0LL, &v18);
    if ( LogicalAddressRange < 0 )
      return (unsigned int)LogicalAddressRange;
    v6 = 1;
    v12 = HalpIommuDomainMapLogicalRange(a1, v20, v8, v15, v21);
    goto LABEL_15;
  }
  if ( (int)v10 <= 0 )
  {
LABEL_12:
    v12 = HalpIommuDomainMapIdentityRange(a1, v20, v9, v10);
LABEL_15:
    LogicalAddressRange = v12;
    if ( v12 >= 0 )
      return (unsigned int)LogicalAddressRange;
    goto LABEL_16;
  }
  v11 = v17;
  while ( 1 )
  {
    v21 = *v11 << 12;
    LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, &v21, 4096LL, 0LL, 0LL, &v18);
    if ( LogicalAddressRange < 0 )
      break;
    ++v6;
    ++v11;
    if ( v6 >= (int)v10 )
      goto LABEL_12;
  }
LABEL_16:
  if ( v6 > 0 )
  {
    if ( v19 )
    {
      HalpIommuDomainFreeLogicalAddressRange(a1, v21);
    }
    else
    {
      for ( i = v6; i >= 0; --i )
      {
        v21 = *(_QWORD *)(v9 + 8 * i) << 12;
        HalpIommuDomainFreeLogicalAddressRange(a1, v21);
      }
    }
  }
  return (unsigned int)LogicalAddressRange;
}
