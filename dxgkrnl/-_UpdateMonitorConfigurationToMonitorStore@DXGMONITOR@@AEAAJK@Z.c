__int64 __fastcall DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(PCWSTR *this, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  NTSTATUS v5; // eax
  int ValueData; // [rsp+40h] [rbp+8h] BYREF
  PCWSTR Path; // [rsp+50h] [rbp+18h] BYREF

  Path = 0LL;
  v2 = a2;
  v4 = DXGMONITOR::OpenMonitorDataStore((DXGMONITOR *)(this + 1), 0, (void **)&Path);
  if ( v4 >= 0 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v2, *((unsigned int *)this + 45));
    ValueData = *(_DWORD *)((char *)this + SHIDWORD(this[4 * (unsigned int)v2 + 101]));
    v5 = RtlWriteRegistryValue(0x40000000u, Path, this[4 * v2 + 100], 4u, &ValueData, 4u);
    v4 = v5;
    if ( v5 < 0 )
      WdLogSingleEntry3(2LL, (unsigned int)v2, *((unsigned int *)this + 45), v5);
  }
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v4;
}
