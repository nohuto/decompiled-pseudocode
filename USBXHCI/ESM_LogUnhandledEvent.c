char __fastcall ESM_LogUnhandledEvent(__int64 a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  const void **v4; // rsi
  char result; // al
  char v6; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( *(_DWORD *)(a1 + 976) == 2000 )
  {
    v3 = (_DWORD *)(a1 + 852);
    v4 = (const void **)(a1 + 960);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qLL(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        17,
        10,
        (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
        (char)*v4,
        v2,
        *v3);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      DbgPrint("ESM 0x%p: is not handling Event %u, Current Top Level State is %u\n", *v4, v2, *v3);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a2;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_qDD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      17,
      11,
      (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
      *(_QWORD *)(a1 + 960),
      v6,
      *(_DWORD *)(a1 + 852));
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    result = DbgPrint("Unhandled event in USBXHCI Endpoint State Machine\n");
    __debugbreak();
  }
  return result;
}
