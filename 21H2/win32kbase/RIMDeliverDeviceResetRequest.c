/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x1C00AE4EC
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 *     rimDeviceResetApc @ 0x1C00AE420 (rimDeviceResetApc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *ApcContext)
{
  NTSTATUS v2; // edi
  int v3; // edx
  char *v5; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+58h] [rbp-40h] BYREF
  char **v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+80h] [rbp-18h]
  int v9; // [rsp+84h] [rbp-14h]

  if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = ApcContext;
    v8 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024BA90, (unsigned __int8 *)dword_1C021DD12, 0LL, 0LL, 3u, &v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (_DWORD)gRimLog,
      4,
      1,
      10,
      (__int64)&WPP_a1cd941ed8813a57445e216c28be9b1b_Traceguids,
      (char)ApcContext);
  ObfReferenceObject(*((PVOID *)ApcContext + 4));
  v2 = ZwDeviceIoControlFile(
         *((HANDLE *)ApcContext + 28),
         0LL,
         (PIO_APC_ROUTINE)rimDeviceResetApc,
         ApcContext,
         (PIO_STATUS_BLOCK)(ApcContext + 168),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v2 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)ApcContext + 4));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v3, 1, 11, (__int64)&WPP_a1cd941ed8813a57445e216c28be9b1b_Traceguids);
    }
  }
  return (unsigned int)v2;
}
