__int64 __fastcall PiResetProblemDevicesWorker(__int64 a1, _DWORD *a2)
{
  unsigned int v5; // eax
  unsigned int v6; // ecx

  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == *a2 )
  {
    v5 = a2[2];
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 640);
      if ( v6 >= v5 )
        return 0LL;
      *(_DWORD *)(a1 + 640) = v6 + 1;
    }
    PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 1, 1, 0LL, 0LL, 0LL, 0LL);
    if ( a2[1] )
      PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
