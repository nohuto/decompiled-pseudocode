__int64 __fastcall PnpDeviceBiosResourcesToNtResources(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v8; // rcx
  int v9; // ebp
  char v10; // di
  KIRQL v11; // al
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // r8

  v4 = a1;
  v6 = a3 | 2;
  v8 = *(_QWORD *)(a1 + 768);
  if ( (*(_QWORD *)(v4 + 8) & 0x10000000000LL) == 0 )
    v6 = a3;
  v9 = PnpBiosResourcesToNtResources(v8, a2, v6, a4);
  if ( v9 >= 0 && *(_QWORD *)a4 )
  {
    v10 = 0;
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    while ( !_bittest64((const signed __int64 *)(v4 + 8), 0x25u) )
    {
      v4 = *(_QWORD *)(v4 + 792);
      if ( !v4 )
        goto LABEL_10;
    }
    v10 = 1;
LABEL_10:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    if ( v10 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)a4 + 28LL);
      v13 = *(_QWORD *)a4 + 32LL;
      if ( v12 )
      {
        v14 = v12;
        do
        {
          v15 = v13 + 8;
          v13 += 8 + 32LL * *(unsigned int *)(v13 + 4);
          while ( v15 < v13 )
          {
            if ( (*(_BYTE *)(v15 + 1) == 1
               || *(_BYTE *)(v15 + 1) == 3
               || (unsigned int)*(unsigned __int8 *)(v15 + 1) - 6 <= 1)
              && *(_BYTE *)(v15 + 2) == 3 )
            {
              *(_BYTE *)(v15 + 2) = 1;
            }
            v15 += 32LL;
          }
          --v14;
        }
        while ( v14 );
      }
    }
  }
  return (unsigned int)v9;
}
