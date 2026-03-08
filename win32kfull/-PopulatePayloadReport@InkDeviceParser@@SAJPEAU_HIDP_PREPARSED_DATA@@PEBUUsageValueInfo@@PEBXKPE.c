/*
 * XREFs of ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C0241A90
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0245E40 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::PopulatePayloadReport(
        struct _HIDP_PREPARSED_DATA *a1,
        const struct UsageValueInfo *a2,
        CHAR *a3,
        __int64 a4,
        CHAR *a5,
        ULONG ReportLength)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v9; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+58h] [rbp-40h] BYREF
  NTSTATUS *v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+80h] [rbp-18h]
  int v13; // [rsp+84h] [rbp-14h]

  *a5 = *((_BYTE *)a2 + 6);
  v6 = HidP_SetUsageValueArray(
         HidP_Output,
         *((_WORD *)a2 + 2),
         *((_WORD *)a2 + 5),
         *((_WORD *)a2 + 30),
         a3,
         0x48u,
         a1,
         a5,
         ReportLength);
  v7 = v6;
  if ( v6 < 0 && (unsigned int)dword_1C03570E0 > 2 )
  {
    v13 = 0;
    v9 = v6;
    v12 = 4;
    v11 = &v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v10);
  }
  return v7;
}
