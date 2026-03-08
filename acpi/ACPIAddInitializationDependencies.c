/*
 * XREFs of ACPIAddInitializationDependencies @ 0x1C000BA98
 * Callers:
 *     ACPIBuildFilter @ 0x1C000D1F8 (ACPIBuildFilter.c)
 *     ACPIBuildPdo @ 0x1C000DC84 (ACPIBuildPdo.c)
 * Callees:
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00143C8 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIReserveDependencies @ 0x1C00145EC (ACPIReserveDependencies.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0098A0C (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIAddInitializationDependencies(__int64 a1)
{
  int v2; // edi
  char v3; // cl
  _QWORD *v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0;
  v11 = 0LL;
  if ( _bittest64((const signed __int64 *)(a1 + 8), 0x33u) )
    return (unsigned int)v2;
  v4 = (_QWORD *)(a1 + 784);
  if ( *(_QWORD *)(a1 + 648) )
  {
    v2 = ACPIConvertDependenciesToPnpReservations(*v4, *(_QWORD *)(a1 + 760));
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 648), 0x4F706341u);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    v3 = 1;
  }
  v5 = 0;
  v6 = a1 + 408;
  do
  {
    if ( *(_QWORD *)v6 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
      if ( *(_QWORD *)(v7 + 96) )
      {
        v2 = ACPIConvertDependenciesToPnpReservations(*v4, *(_QWORD *)(v7 + 32));
        if ( v2 < 0 )
          return (unsigned int)v2;
        v3 = 1;
      }
    }
    ++v5;
    v6 += 8LL;
  }
  while ( v5 <= 4 );
  v8 = *(_QWORD *)(a1 + 448);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)(v9 + 96) )
    {
      v2 = ACPIConvertDependenciesToPnpReservations(*v4, *(_QWORD *)(v9 + 32));
      if ( v2 < 0 )
        return (unsigned int)v2;
      v3 = 1;
    }
  }
  if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x26u) && *(_QWORD *)(a1 + 968) )
  {
    v2 = ACPIReserveDependencies(*v4);
    if ( v2 < 0 )
      return (unsigned int)v2;
    goto LABEL_22;
  }
  if ( v3 )
LABEL_22:
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1008), 0x40uLL);
  v2 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 768), &v11);
  if ( v2 >= 0 )
    v2 = IoResolveDependency(&v11, *v4);
  if ( *((_QWORD *)&v11 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v11 + 1), 0x53706341u);
  return (unsigned int)v2;
}
