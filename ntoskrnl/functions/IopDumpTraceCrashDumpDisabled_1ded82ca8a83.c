char IopDumpTraceCrashDumpDisabled()
{
  char result; // al
  __int64 v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  result = IopDumpIsTracingEnabled();
  if ( result )
    result = EtwWriteEx(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_DISABLED, 0LL, 0, 0LL, 0LL, 0, 0LL);
  if ( (unsigned int)dword_140C06248 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C06248, 0x400000000000LL);
    if ( result )
    {
      v5 = 0;
      v3 = &v1;
      v1 = 0x1000000LL;
      v4 = 8;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C06248,
               (unsigned __int8 *)byte_14002B311,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}
