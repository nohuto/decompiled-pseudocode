/*
 * XREFs of UsbhRegQueryGlobalKey @ 0x1C00468F0
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C0046560 (UsbhRegDriverEntry.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0046A7C (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C00485E4 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegQueryGlobalKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  PVOID SystemRoutineAddress; // rax
  int v9; // edx
  unsigned int v10; // esi
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Du,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v16 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))SystemRoutineAddress)(a1, a2, a4, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x3Eu,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        v11,
        63,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
  }
  v14 = a4 + 24;
  do
  {
    if ( !*(_QWORD *)(v14 - 24) )
      break;
    if ( *(_DWORD *)(v14 + 8) == 4
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_SD(
        WPP_GLOBAL_Control->DeviceExtension,
        **(_DWORD **)v14,
        v11,
        v12,
        v16,
        *(_QWORD *)(v14 - 8),
        **(_DWORD **)v14);
    }
    v14 += 56LL;
    a5 -= 56;
  }
  while ( a5 >= 0x38 );
  return v10;
}
