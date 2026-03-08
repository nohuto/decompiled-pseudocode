/*
 * XREFs of PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x14098E5FC
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopDiagTraceSleepReliabilityDiagConfigUpdate()
{
  char v0; // r9
  char v1; // [rsp+30h] [rbp-68h] BYREF
  __int64 v2; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  char *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v6 = 0;
      v9 = 0;
      v4 = &v1;
      v1 = v0;
      v7 = &v2;
      v5 = 1;
      v2 = 0x1000000LL;
      v8 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_14002F769, 0LL, 0LL, 4u, &v3);
    }
  }
}
