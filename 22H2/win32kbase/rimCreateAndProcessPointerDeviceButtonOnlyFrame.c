/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0179364
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01795E8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A07C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0171424 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171C28 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171EF0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017C108 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017C51C (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  struct RIMDEV *v7; // rbx
  __int64 result; // rax
  int v10; // edx
  int v11; // edx
  _DWORD v12[10]; // [rsp+30h] [rbp-28h] BYREF

  v12[0] = 0;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 34, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  result = RIMStartPointerDeviceFrame((__int64)a1, (__int64)v7, a5);
  if ( (_DWORD)result )
  {
    RIMStoreRawDataInPointerDeviceFrame((__int64)a1, (__int64)v7, a3, a4, v12);
    rimProcessPointerDeviceButtonContact((_DWORD)a1, (_DWORD)v7, a3, a4, v12[0]);
    rimProcessMissingPointerDeviceContacts(a1, v7, 0LL);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v7);
    result = RIMCompletePointerDeviceFrame(a1, v7, 1u);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    LOBYTE(v10) = 4;
    result = WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 35, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    return WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 36, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  return result;
}
