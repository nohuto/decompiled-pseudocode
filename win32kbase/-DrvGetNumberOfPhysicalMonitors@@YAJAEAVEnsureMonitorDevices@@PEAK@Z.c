__int64 __fastcall DrvGetNumberOfPhysicalMonitors(struct EnsureMonitorDevices *this, unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  v4 = 0;
  if ( !v2 )
    return 3223193061LL;
  do
  {
    v10 = 0;
    v9 = 0LL;
    EnsureMonitorDevices::GetMonitorDevice(this, v4, (struct tagVIDEO_MONITOR_DEVICE *)&v9);
    v7 = v3 + 1;
    if ( (v9 & 1) == 0 )
      v7 = v3;
    ++v4;
    v3 = v7;
  }
  while ( v4 < v2 );
  if ( !v7 )
    return 3223193061LL;
  *a2 = v7;
  return 0LL;
}
