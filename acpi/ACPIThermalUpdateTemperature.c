/*
 * XREFs of ACPIThermalUpdateTemperature @ 0x1C0042348
 * Callers:
 *     ACPIThermalReadTemperatureComplete @ 0x1C00419A0 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C00421C0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalReadTemperature @ 0x1C0095B94 (ACPIThermalReadTemperature.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIThermalLoop @ 0x1C00410D8 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C0042BA0 (WPP_RECORDER_SF_ddqssdddd.c)
 */

__int64 __fastcall ACPIThermalUpdateTemperature(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v6; // r8
  union _LARGE_INTEGER v7; // [rsp+70h] [rbp-48h] BYREF
  struct _TIME_FIELDS v8; // [rsp+78h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  result = 0xFFFFF78000000008uLL;
  if ( *(_DWORD *)(v2 + 16) != a2 )
  {
    *(_DWORD *)(v2 + 16) = a2;
    v8 = 0LL;
    v7.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&v7, &v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(
        WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v2 + 16) / 0xAu,
        *(_DWORD *)(v2 + 16) % 0xAu,
        19);
    ACPIThermalLoop(a1, 2048LL);
    result = 0xFFFFF78000000008uLL;
  }
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    v6 = MEMORY[0xFFFFF78000000008];
    if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + *(_QWORD *)(v2 + 320) < MEMORY[0xFFFFF78000000008]
      && *(_DWORD *)(v2 + 328) != a2 )
    {
      *(_DWORD *)(v2 + 328) = a2;
      *(_QWORD *)(v2 + 320) = v6;
      return ACPIThermalLoop(a1, 0x4000LL);
    }
  }
  return result;
}
