__int64 __fastcall HalpIommuJoinDmaDomain(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  char v10; // al
  __int64 v11; // rdx
  int v12; // ecx
  _QWORD *v13; // r14
  _QWORD *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( *(_DWORD *)(a1 + 392) == 1 )
    return 3221225659LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( HalpHvIommu )
  {
    v7 = *(_DWORD *)(a2 + 48);
    v14 = 0LL;
    v8 = *(_QWORD *)(a1 + 32);
    LODWORD(v14) = v7;
    BYTE4(v14) = *(_BYTE *)(a2 + 52);
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD **))qword_140C622B0)(v8, &v14);
    if ( v9 >= 0 )
      goto LABEL_21;
    return (unsigned int)v9;
  }
  if ( a2 != HalpIommuBypassDomain && HalpIommuIsInPermanentPassthrough(a1, a2) )
  {
    v9 = 0;
LABEL_21:
    *(_QWORD *)(a1 + 24) = a2;
    return (unsigned int)v9;
  }
  v10 = *(_BYTE *)(a2 + 52);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = v10 != 0 ? 128 : 256;
  if ( (v12 & *(_DWORD *)(v11 + 488)) == v12 )
  {
    result = HalpIommuGetHardwareDomain(a2, v11, 1, 1, 0, (__int64 *)&v14);
    if ( (int)result < 0 )
      return result;
    v13 = v14;
    v9 = HalpIommuAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), (__int64)(v14 + 4));
    if ( v9 >= 0 )
    {
      if ( v6 )
      {
        result = HalpIommuGetHardwareDomain(v6, *(_QWORD *)(a1 + 32), 0, 0, 0, (__int64 *)&v14);
        v9 = result;
        if ( (int)result < 0 )
          return result;
        HalpIommuDereferenceHardwareDomain(v6, v14);
      }
      goto LABEL_21;
    }
    HalpIommuDereferenceHardwareDomain(a2, v13);
    return (unsigned int)v9;
  }
  if ( a3 )
    *a3 |= 1u;
  return 3221225520LL;
}
