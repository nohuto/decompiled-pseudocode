/*
 * XREFs of UsbhRegDriverEntry @ 0x1C0047010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003C0E0 (WPP_RECORDER_SF_S.c)
 *     UsbhRegCreateUsbflagsKey @ 0x1C0046FB4 (UsbhRegCreateUsbflagsKey.c)
 *     UsbhRegQueryGlobalKey @ 0x1C00473B0 (UsbhRegQueryGlobalKey.c)
 *     WPP_RECORDER_SF_SD @ 0x1C00490B4 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, const UNICODE_STRING *a2, __int64 a3)
{
  unsigned int v4; // edi
  void (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD); // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  int **v9; // rbx
  unsigned __int16 v10; // bx
  WCHAR *PoolWithTag; // rax
  const WCHAR *v12; // rdi
  int v13; // r8d
  int v15; // [rsp+20h] [rbp-40h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  Destination = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      0x5Bu,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
      a2->Buffer);
  v18 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v18);
  if ( (v18 & 1) != 0 )
    dword_1C006C62C = 1;
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
  v15 = 0;
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
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        v7,
        0x3Fu,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        L"usb");
  }
  v9 = &off_1C0060568;
  do
  {
    if ( !*(v9 - 3) )
      break;
    if ( *((_DWORD *)v9 + 2) == 4
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_SD(WPP_GLOBAL_Control->DeviceExtension, **v9, v7, v8, v15, (__int64)*(v9 - 1), **v9);
    }
    v9 += 7;
    v4 -= 56;
  }
  while ( v4 >= 0x38 );
  v10 = a2->Length + 12;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v10, 0x42554855u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    RtlInitUnicodeString(&Destination, v12);
    Destination.MaximumLength = v10;
    RtlCopyUnicodeString(&Destination, a2);
    if ( RtlAppendUnicodeToString(&Destination, L"\\hubg") >= 0 )
      UsbhRegQueryGlobalKey(0, Destination.Buffer, v13, (unsigned int)&GlobalUsbhubValues, 1120);
    RtlFreeUnicodeString(&Destination);
  }
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
    HIDWORD(qword_1C006C4DC) = 2;
  return 0LL;
}
