/*
 * XREFs of WerpEscalationIsWMRSendStringSet @ 0x1800DE53C
 * Callers:
 *     WerEscalationLazyInit @ 0x1800DE048 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DE5EC (WerpEscalationReadUlongFromKey.c)
 */

__int64 WerpEscalationIsWMRSendStringSet()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v2; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+30h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  __int128 v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h]

  v0 = 0;
  Handle = 0LL;
  v1 = 0;
  v10 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\WMR");
  v5 = 48;
  p_DestinationString = &DestinationString;
  v6 = 0LL;
  v8 = 64;
  v9 = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    v2 = WerpEscalationReadUlongFromKey(Handle, L"WMRSendMessageString", &v10);
    v1 = v10;
    if ( v2 < 0 )
      v1 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  LOBYTE(v0) = v1 != 0;
  return v0;
}
