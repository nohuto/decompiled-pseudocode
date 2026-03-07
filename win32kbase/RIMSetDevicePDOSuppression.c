int __fastcall RIMSetDevicePDOSuppression(__int64 a1, char a2)
{
  bool v2; // zf
  int result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  char InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  InputBuffer = a2;
  v2 = *(_QWORD *)(a1 + 224) == 0LL;
  IoStatusBlock = 0LL;
  if ( v2 || !*(_QWORD *)(a1 + 232) )
    return 0;
  InputTraceLogging::RIM::SetDevicePDOSuppression((const struct RIMDEV *)a1);
  result = ZwDeviceIoControlFile(
             *(HANDLE *)(a1 + 224),
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0xB0268u,
             &InputBuffer,
             1u,
             0LL,
             0);
  if ( result >= 0 )
    return IoStatusBlock.Status;
  return result;
}
