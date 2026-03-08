/*
 * XREFs of WheapGetPreallocatedPacketBuffer @ 0x14060F4C0
 * Callers:
 *     WheapInitErrorReportDeviceDriver @ 0x14060F578 (WheapInitErrorReportDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 *     WheapErrDescIsDeviceDriver @ 0x14060F410 (WheapErrDescIsDeviceDriver.c)
 */

volatile signed __int32 *__fastcall WheapGetPreallocatedPacketBuffer(unsigned int a1)
{
  __int64 *ErrorSource; // rax
  __int64 v2; // r9
  _QWORD *v3; // r11
  __int64 v4; // rdi
  unsigned int v5; // r10d
  volatile signed __int32 *v6; // r8
  __int64 v7; // rbx
  volatile signed __int32 v8; // ett

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  if ( !WheapErrDescIsDeviceDriver((unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL)) )
    return 0LL;
  v4 = *(unsigned int *)(v2 + 64);
  v5 = 0;
  v6 = *(volatile signed __int32 **)(v2 + 72);
  v7 = *(_QWORD *)(v2 + 144);
  if ( !*(_DWORD *)(v2 + 68) )
    return 0LL;
  while ( 1 )
  {
    if ( (*v6 & 0xF0000000) != 0x80000000 )
    {
      v8 = *v6;
      if ( v8 == _InterlockedCompareExchange(v6, *v6 | 0x80000000, *v6) )
        break;
    }
    v6 = (volatile signed __int32 *)((char *)v6 + v4);
    if ( ++v5 >= *(_DWORD *)(v2 + 68) )
      return 0LL;
  }
  if ( v3 )
    *v3 = v7 + 104LL * v5;
  return v6;
}
