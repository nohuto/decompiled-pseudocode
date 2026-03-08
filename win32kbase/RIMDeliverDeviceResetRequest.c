/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x1C00893E4
 * Callers:
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     rimDeviceResetApc @ 0x1C01E2FC0 (rimDeviceResetApc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *OutputBuffer)
{
  bool v2; // dl
  NTSTATUS v3; // edi
  int v4; // edx
  int v5; // r8d
  char *v7; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+58h] [rbp-50h] BYREF
  char **v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+80h] [rbp-28h]
  int v11; // [rsp+84h] [rbp-24h]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = OutputBuffer;
    v10 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C0299517, 0LL, 0LL, 3u, &v8);
  }
  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      10,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)OutputBuffer);
  ObfReferenceObject(*((PVOID *)OutputBuffer + 4));
  v3 = ZwDeviceIoControlFile(
         *((HANDLE *)OutputBuffer + 28),
         0LL,
         rimDeviceResetApc,
         OutputBuffer,
         (PIO_STATUS_BLOCK)(OutputBuffer + 168),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v3 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)OutputBuffer + 4));
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        (_DWORD)gRimLog,
        3,
        1,
        11,
        (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids);
    }
  }
  return (unsigned int)v3;
}
