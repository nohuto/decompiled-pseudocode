/*
 * XREFs of BiDoesHiveExist @ 0x14080A3B0
 * Callers:
 *     BiLoadHive @ 0x140809604 (BiLoadHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x14041AE40 (ZwQueryAttributesFile.c)
 */

bool __fastcall BiDoesHiveExist(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v3[3]; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+48h] [rbp+Fh]
  int v5; // [rsp+4Ch] [rbp+13h]
  __int128 v6; // [rsp+50h] [rbp+17h]
  _OWORD v7[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v8; // [rsp+80h] [rbp+47h]

  v5 = 0;
  v3[0] = 48LL;
  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 12));
  v3[1] = 0LL;
  v3[2] = &DestinationString;
  v4 = 576;
  v6 = 0LL;
  return (int)ZwQueryAttributesFile((__int64)v3, (__int64)v7) >= 0 && (v8 & 0x10) == 0;
}
