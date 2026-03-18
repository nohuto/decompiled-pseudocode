/*
 * XREFs of NVMeHwUnitControl @ 0x1C000D170
 * Callers:
 *     <none>
 * Callees:
 *     NVMeGetRichDeviceDescription @ 0x1C000CE44 (NVMeGetRichDeviceDescription.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeLunCompleteAllIORequests @ 0x1C0019ABC (NVMeLunCompleteAllIORequests.c)
 *     NVMeSendLunInternalData @ 0x1C0025E54 (NVMeSendLunInternalData.c)
 */

__int64 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  unsigned int v6; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx

  if ( !a2 )
  {
    v16 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( v16 > 1 )
      *(_BYTE *)(a3 + 5) = 1;
    if ( v16 > 2 )
      *(_BYTE *)(a3 + 6) = 1;
    if ( v16 > 3 )
      *(_BYTE *)(a3 + 7) = 1;
    if ( v16 > 9 )
      *(_BYTE *)(a3 + 13) = 1;
    if ( v16 > 0xA )
      *(_BYTE *)(a3 + 14) = 1;
    if ( v16 > 0xB )
      *(_BYTE *)(a3 + 15) = 1;
    if ( v16 > 0xD )
      *(_BYTE *)(a3 + 17) = 1;
    if ( v16 > 0xE )
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
  v8 = v5 - 1;
  if ( !v8 )
  {
    v15 = *(unsigned __int8 *)(a3 + 10);
    return (unsigned int)v15 >= *(_DWORD *)(a1 + 224) || !*(_QWORD *)(a1 + 8 * v15 + 1752);
  }
  v9 = v8 - 1;
  if ( !v9 )
    return 0;
  v10 = v9 - 6;
  if ( !v10 )
  {
    v18 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1752);
    if ( v18 )
      *(_DWORD *)(v18 + 20) |= 4u;
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v17 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1752);
    if ( v17 )
    {
      *(_DWORD *)(v17 + 20) |= 4u;
      NVMeLunCompleteAllIORequests(a1, *(unsigned __int8 *)(a3 + 10));
    }
    return 0;
  }
  v12 = v11 - 1;
  if ( !v12 )
    return (unsigned int)NVMeGetRichDeviceDescription(a1, (char *)a3) != 0;
  v13 = v12 - 2;
  if ( v13 )
  {
    v6 = 1;
    if ( v13 == 1 && a3 && *(_DWORD *)(a3 + 4) >= 0x20u && *(_DWORD *)(a3 + 16) == 1 )
      return (unsigned int)NVMeSendLunInternalData(
                             a1,
                             *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(*(_QWORD *)(a3 + 8) + 10LL) + 1752),
                             *(_QWORD *)(a3 + 24));
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 1640);
    v6 = 1;
    if ( a3 && *(_DWORD *)(a3 + 4) >= 0x98u )
    {
      memset((void *)a3, 0, 0x98uLL);
      *(_DWORD *)a3 = 1;
      *(_DWORD *)(a3 + 4) = 152;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v14 + 4);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v14 + 20);
      return 0;
    }
  }
  return v6;
}
