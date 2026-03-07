int __fastcall PiControlGetUserFlagsFromDeviceNode(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int IsDevNodeDNStarted; // eax
  int v7; // r8d
  int v8; // ebx
  char IsRootEnumeratedDevice; // al
  int v10; // r10d
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int result; // eax

  PipAreDriversLoaded(a1, (__int64)a2, a3, a4);
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v8 = v7 | 8;
  if ( !IsDevNodeDNStarted )
    v8 = v7;
  IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48));
  v10 = *(_DWORD *)(a1 + 400);
  v11 = *(_DWORD *)(a1 + 396);
  v12 = v8 | 1;
  if ( !IsRootEnumeratedDevice )
    v12 = v8;
  v13 = v12 | 0x4000;
  if ( (*(_DWORD *)(a1 + 560) & 0x10) == 0 )
    v13 = v12;
  v14 = v13 | 0x40000;
  if ( (v10 & 1) == 0 )
    v14 = v13;
  v15 = v14 | 0x40000000;
  if ( (v10 & 2) == 0 )
    v15 = v14;
  v16 = v15 | 0x2000000;
  if ( (v10 & 0x40) == 0 )
    v16 = v15;
  v17 = v16 | 0x100;
  if ( (v10 & 4) == 0 )
    v17 = v16;
  v18 = v17 | 0x8000;
  if ( (v11 & 0x4000) == 0 )
    v18 = v17;
  v19 = v18 | 0x400;
  if ( (v11 & 0x2000) == 0 )
    v19 = v18;
  v20 = v19 | 0x40;
  if ( (v11 & 0x100000) == 0 )
    v20 = v19;
  v21 = v20 | 0x1000;
  if ( (v11 & 0x1000) == 0 )
    v21 = v20;
  v22 = v21 | 0x200;
  if ( (v11 & 0x200000) == 0 )
    v22 = v21;
  v23 = v22 | 0x2000;
  if ( *(_DWORD *)(a1 + 600) )
    v23 = v22;
  v24 = v23 | 0x10000;
  if ( (v10 & 0x100) == 0 )
    v24 = v23;
  result = v24 | 0x20000;
  if ( (v10 & 0x200) == 0 )
    result = v24;
  *a2 = result;
  return result;
}
