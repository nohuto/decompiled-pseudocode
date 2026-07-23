/*
 * XREFs of WheapGetPreallocatedPacketBuffer @ 0x1405BC600
 * Callers:
 *     WheapInitErrorReportDeviceDriver @ 0x1405BC6B0 (WheapInitErrorReportDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 */

volatile signed __int32 *__fastcall WheapGetPreallocatedPacketBuffer(int a1)
{
  __int64 *ErrorSource; // rax
  _QWORD *v2; // r11
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // r10d
  volatile signed __int32 *v7; // r8
  __int64 v8; // rbx
  volatile signed __int32 v9; // ett

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v3 = (unsigned __int64)(ErrorSource + 12);
  v4 = -(__int64)ErrorSource;
  if ( (v3 & -(__int64)(v4 != 0)) == 0 )
    return 0LL;
  v5 = *(unsigned int *)((v3 & -(__int64)(v4 != 0)) + 0x40);
  v6 = 0;
  v7 = *(volatile signed __int32 **)((v3 & -(__int64)(v4 != 0)) + 0x48);
  v8 = *(_QWORD *)((v3 & -(__int64)(v4 != 0)) + 0x90);
  if ( !*(_DWORD *)((v3 & -(__int64)(v4 != 0)) + 0x44) )
    return 0LL;
  while ( 1 )
  {
    if ( (*v7 & 0xF0000000) != 0x80000000 )
    {
      v9 = *v7;
      if ( v9 == _InterlockedCompareExchange(v7, *v7 | 0x80000000, *v7) )
        break;
    }
    v7 = (volatile signed __int32 *)((char *)v7 + v5);
    if ( ++v6 >= *(_DWORD *)((v3 & -(__int64)(v4 != 0)) + 0x44) )
      return 0LL;
  }
  if ( v2 )
    *v2 = v8 + 104LL * v6;
  return v7;
}
