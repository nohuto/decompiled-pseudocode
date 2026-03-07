void __fastcall ReportDdiFunctionCountMismatch(
        const _UNICODE_STRING *ServiceName,
        unsigned int ActualFunctionCount,
        unsigned int a3,
        unsigned __int8 a4)
{
  const _tlgProvider_t *v6; // rcx
  const _GUID *v7; // r8
  const _GUID *v8; // r9
  void *RawDataBuf; // [rsp+20h] [rbp-2D8h]
  unsigned __int16 RawDataLen[4]; // [rsp+28h] [rbp-2D0h]
  _tlgWrapperByVal<4> v11; // [rsp+40h] [rbp-2B8h] BYREF
  _tlgWrapperByVal<4> v12; // [rsp+44h] [rbp-2B4h] BYREF
  _tlgWrapBuffer<_UNICODE_STRING> hProvider; // [rsp+48h] [rbp-2B0h] BYREF
  _tlgWrapperByVal<8> v14; // [rsp+50h] [rbp-2A8h] BYREF
  wchar_t insertString[320]; // [rsp+60h] [rbp-298h] BYREF

  memset(insertString, 0, 0x272uLL);
  DbgPrintEx(
    0x65u,
    0,
    "\n"
    "\n"
    "************************* \n"
    "* DDI function table mismatch detected in KMDF driver. The \n"
    "* driver will not load until it is re-compiled using a \n"
    "* newer version of the Windows Driver Kit (WDK). \n");
  DbgPrintEx(
    0x65u,
    0,
    "* Service name                 : %wZ\n"
    "* Actual function table count  : %d \n"
    "* Expected function table count: %d \n"
    "*************************** \n"
    "\n",
    ServiceName,
    ActualFunctionCount,
    458);
  *(_DWORD *)RawDataLen = 458;
  LODWORD(RawDataBuf) = ActualFunctionCount;
  if ( RtlStringCchPrintfW(
         insertString,
         0x139uLL,
         (wchar_t *)L"Service:%wZ Count:Actual %d Expected %d",
         ServiceName,
         RawDataBuf,
         *(_QWORD *)RawDataLen) >= 0 )
    LibraryLogEvent(
      (_DRIVER_OBJECT *)WPP_GLOBAL_WDF_Control.DeviceExtension,
      -2147024894,
      -1073741811,
      insertString,
      0LL,
      0);
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    v11.Value = 458;
    v12.Value = ActualFunctionCount;
    hProvider.Ptr = ServiceName;
    v14.Value = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      &tlgEvent._tlgChannel,
      v7,
      v8,
      &v14,
      &hProvider,
      &v12,
      &v11);
  }
  if ( WdfLdrDbgPrintOn && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    DbgBreakPoint();
}
