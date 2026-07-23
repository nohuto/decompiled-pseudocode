/*
 * XREFs of WdipSemSqmInit @ 0x14079936C
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x1407992E8 (WdipSemStartTimeoutCheck.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140788BBC (WdipSemWriteEvent.c)
 */

NTSTATUS WdipSemSqmInit()
{
  ULONG v0; // eax
  __int64 v1; // rcx
  int v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-30h] BYREF
  PSID v5; // [rsp+48h] [rbp-20h]
  ULONG v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v4.Reserved = 0;
  v4.Ptr = (ULONGLONG)&v3;
  v5 = SeLocalSystemSid;
  v3 = 1;
  v4.Size = 4;
  v0 = RtlLengthSid(SeLocalSystemSid);
  v7 = 0;
  v6 = v0;
  return WdipSemWriteEvent(v1, (const EVENT_DESCRIPTOR *)WDI_SEM_EVENT_SQM_INIT, 0LL, 2u, &v4);
}
