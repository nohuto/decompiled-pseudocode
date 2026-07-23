/*
 * XREFs of PopTraceMonitorOnRequestUserInput @ 0x1408EC69C
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PopTraceMonitorOnRequestUserInput()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-68h] BYREF
  __int64 v2; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C02228 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
    {
      v6 = 0;
      v9 = 0;
      v2 = PopWdiCurrentScenarioInstanceId;
      v4 = &v2;
      v7 = &v1;
      v1 = v0;
      v8 = 4;
      v5 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02228, (unsigned __int8 *)byte_140027185, 0LL, 0LL, 4u, &v3);
    }
  }
}
