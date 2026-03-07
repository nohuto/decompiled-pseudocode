__int64 TraceLoggingSendMixedModeTelemetry(void)
{
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x200000000000LL) )
  {
    v5 = 0;
    v3 = &v1;
    v1 = 0x1000000LL;
    v4 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0357098, (int)&dword_1C031DDF8, 0, 0, 3u, &v2);
  }
  return 1LL;
}
