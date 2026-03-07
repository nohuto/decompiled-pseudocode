void __fastcall InputTraceLogging::TelemetryDebug::RIM::ReadComplete(__int64 a1)
{
  const int *v2; // rdx
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-18h]
  int v6; // [rsp+60h] [rbp-10h]
  int v7; // [rsp+64h] [rbp-Ch]

  if ( (unsigned __int8)isChildPartition() )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 7 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 0x10000LL) )
    {
      v2 = &dword_1C02987DF;
      goto LABEL_9;
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 7 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 0x10000LL) )
  {
    v2 = (const int *)&unk_1C0298794;
LABEL_9:
    v5 = &v3;
    v7 = 0;
    v3 = a1;
    v6 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)v2, 0, 0, 3u, &v4);
  }
}
