__int64 __fastcall RIMIsWakeCapableDevice(__int64 a1)
{
  char v1; // al
  unsigned int v2; // edi
  char v3; // si
  int v4; // r8d
  int v5; // ecx
  int v6; // edx
  int v7; // ebx
  int WakeOnDeviceTypes; // eax
  int v9; // ecx

  if ( (*(_DWORD *)(a1 + 188) & 2) == 0 )
    return 0LL;
  v1 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
  v2 = 0;
  v3 = v1;
  v4 = (2 * (v1 & 1)) | 4;
  if ( (v1 & 2) == 0 )
    v4 = 2 * (v1 & 1);
  v5 = v4 | 8;
  if ( (v1 & 0x10) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (v1 & 4) == 0 )
    v6 = v5;
  v7 = v6 | 0x20;
  if ( (v1 & 8) == 0 )
    v7 = v6;
  WakeOnDeviceTypes = CInputGlobals::GetWakeOnDeviceTypes(gpInputGlobals);
  v9 = v7 | 0x100;
  if ( (v3 & 0x20) == 0 )
    v9 = v7;
  LOBYTE(v2) = (WakeOnDeviceTypes & v9) != 0;
  return v2;
}
