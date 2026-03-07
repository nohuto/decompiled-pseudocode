__int64 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax

  if ( !a2 )
  {
    v17 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( v17 > 1 )
      *(_BYTE *)(a3 + 5) = 1;
    if ( v17 > 2 )
      *(_BYTE *)(a3 + 6) = 1;
    if ( v17 > 3 )
      *(_BYTE *)(a3 + 7) = 1;
    if ( v17 > 9 )
      *(_BYTE *)(a3 + 13) = 1;
    if ( v17 > 0xA )
      *(_BYTE *)(a3 + 14) = 1;
    if ( v17 > 0xB )
      *(_BYTE *)(a3 + 15) = 1;
    if ( v17 > 0xD )
      *(_BYTE *)(a3 + 17) = 1;
    if ( v17 > 0xE )
      *(_BYTE *)(a3 + 18) = 1;
    return 0;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *(_DWORD *)(a3 + 8) == 2 )
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFFBF | (*(_BYTE *)(a3 + 12) != 0 ? 0x40 : 0);
    return 0;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v16 = *(unsigned __int8 *)(a3 + 10);
    return (unsigned int)v16 >= *(_DWORD *)(a1 + 232) || !*(_QWORD *)(a1 + 8 * v16 + 1952);
  }
  v7 = v6 - 1;
  if ( !v7 )
    return 0;
  v8 = v7 - 6;
  if ( !v8 )
  {
    v15 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1952);
    if ( v15 )
      *(_DWORD *)(v15 + 20) |= 4u;
    return 0;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v14 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1952);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 20) |= 4u;
      NVMeLunCompleteAllIORequests(a1, *(unsigned __int8 *)(a3 + 10));
    }
    return 0;
  }
  v10 = v9 - 1;
  if ( !v10 )
    return (unsigned int)NVMeGetRichDeviceDescription(a1, a3, a3, a1) != 0;
  v11 = v10 - 2;
  if ( !v11 )
  {
    v13 = *(_QWORD *)(a1 + 1840);
    v12 = 1;
    if ( !a3 || *(_DWORD *)(a3 + 4) < 0x98u )
      return v12;
    memset((void *)a3, 0, 0x98uLL);
    *(_DWORD *)a3 = 1;
    *(_DWORD *)(a3 + 4) = 152;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v13 + 4);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(v13 + 20);
    return 0;
  }
  v12 = 1;
  if ( v11 == 1 && a3 && *(_DWORD *)(a3 + 4) >= 0x20u && *(_DWORD *)(a3 + 16) == 1 )
    return (unsigned int)NVMeSendLunInternalData(
                           a1,
                           *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(*(_QWORD *)(a3 + 8) + 10LL) + 1952),
                           *(_QWORD *)(a3 + 24));
  return v12;
}
