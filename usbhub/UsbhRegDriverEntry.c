/*
 * XREFs of UsbhRegDriverEntry @ 0x1C0046560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 *     UsbhRegCreateUsbflagsKey @ 0x1C004650C (UsbhRegCreateUsbflagsKey.c)
 *     UsbhRegQueryGlobalKey @ 0x1C00468F0 (UsbhRegQueryGlobalKey.c)
 *     WPP_RECORDER_SF_SD @ 0x1C00485E4 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  void (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD); // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  _UNKNOWN **v9; // rbx
  unsigned __int16 v10; // bx
  const WCHAR *Pool2; // rax
  int v12; // r8d
  int v14; // [rsp+20h] [rbp-40h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  Destination = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      a3,
      91,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
      *(_QWORD *)(a2 + 8));
  v17 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v17);
  if ( (v17 & 1) != 0 )
    dword_1C006B6CC = 1;
  v4 = 112;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Du,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (void (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  v14 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (void (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))RtlQueryRegistryValues;
  SystemRoutineAddress(1LL, L"usb", &GlobalUsbhubLegacyValues, 0LL);
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
        v6,
        v7,
        63,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        (__int64)L"usb");
  }
  v9 = &off_1C005E5C8;
  do
  {
    if ( !*(v9 - 3) )
      break;
    if ( *((_DWORD *)v9 + 2) == 4
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_SD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)*v9,
        v7,
        v8,
        v14,
        (__int64)*(v9 - 1),
        *(_DWORD *)*v9);
    }
    v9 += 7;
    v4 -= 56;
  }
  while ( v4 >= 0x38 );
  v10 = *(_WORD *)a2 + 12;
  Pool2 = (const WCHAR *)ExAllocatePool2(256LL, v10, 1112885333LL);
  if ( Pool2 )
  {
    RtlInitUnicodeString(&Destination, Pool2);
    Destination.MaximumLength = v10;
    RtlCopyUnicodeString(&Destination, (PCUNICODE_STRING)a2);
    if ( RtlAppendUnicodeToString(&Destination, L"\\hubg") >= 0 )
      UsbhRegQueryGlobalKey(0, Destination.Buffer, v12, (unsigned int)&GlobalUsbhubValues, 1120);
    RtlFreeUnicodeString(&Destination);
  }
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
  return 0LL;
}
