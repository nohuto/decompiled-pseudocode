/*
 * XREFs of WPP_RECORDER_SF_qdqss @ 0x1C0009EDC
 * Callers:
 *     ACPIDockIrpSetSystemPower @ 0x1C00097F4 (ACPIDockIrpSetSystemPower.c)
 *     ACPIBuildRegRequest @ 0x1C00133EC (ACPIBuildRegRequest.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0016FF4 (ACPIBusIrpSetSystemPower.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001D2C8 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001D3A8 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C001DA90 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C001DBF8 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C001DE48 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C001DFB8 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C001E474 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001F100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0020650 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0020880 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIRootIrpSetPower @ 0x1C003D4C0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdqss(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v11; // rsi
  __int64 v12; // rbx
  const char *v13; // rdi
  unsigned __int64 v15; // r11
  unsigned int v16; // r15d
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  int v27; // [rsp+20h] [rbp-78h]

  v11 = a9;
  v12 = -1LL;
  v13 = a10;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = a4;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= 4u )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = "NULL";
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v13 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v13[v24] );
  }
  if ( !v13 )
    v13 = "NULL";
  if ( v11 )
  {
    do
      ++v12;
    while ( v11[v12] );
    v25 = v12 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v27) = v16;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v27, &a6, 8LL, &a7, 4LL, &a8, 8LL, v11, v25, v13);
}
