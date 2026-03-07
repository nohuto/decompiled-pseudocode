__int64 __fastcall HsaProcessDeviceExceptions(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // edi
  int v4; // ebx
  __int64 i; // rbx
  unsigned int v6; // eax
  int v7; // r9d
  _DWORD v9[28]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v10; // [rsp+D0h] [rbp+8h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = *(_DWORD **)(a1 + 216);
  v3 = 0;
  v10 = 0LL;
  v4 = 0;
  if ( *v2 )
  {
    while ( 1 )
    {
      v3 = HalpHsapInitializeReservedDomain(a1, (__int64)&v2[4 * v4 + 2]);
      if ( v3 < 0 )
        break;
      v2 = *(_DWORD **)(a1 + 216);
      if ( (unsigned int)++v4 >= *v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    for ( i = HalpIommuExceptionList; (__int64 *)i != &HalpIommuExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 160) )
      {
        memset(&v9[2], 0, 0x68uLL);
        v6 = *(_DWORD *)(i + 24);
        LOBYTE(v7) = 1;
        v9[1] = 0;
        v10 = v6;
        v9[0] = 1;
        HsaUpdateDeviceTableEntry(a1, (unsigned int)&v10, 0, v7, (__int64)v9, 1, 1);
      }
    }
  }
  return (unsigned int)v3;
}
