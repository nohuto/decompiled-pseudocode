__int64 __fastcall PopBatteryQueryEstimatedTime(__int64 a1, int a2)
{
  int v2; // eax
  IRP *v4; // rcx
  NTSTATUS v5; // eax
  unsigned int v6; // ecx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 108);
  v8[2] = a2;
  v4 = *(IRP **)(a1 + 56);
  v8[0] = v2;
  v8[1] = 3;
  PopPrepareIoctl(v4, 0x294044u, 0, (struct _IRP *)v8, 0xCu, 4u);
  v5 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  v6 = v8[0];
  if ( v5 < 0 )
    return (unsigned int)-1;
  return v6;
}
