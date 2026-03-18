/*
 * XREFs of UsbhInitializeHighResTimer @ 0x1C005CF44
 * Callers:
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 * Callees:
 *     <none>
 */

bool UsbhInitializeHighResTimer()
{
  bool result; // al
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"ExAllocateTimer");
  g_ExAllocateTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = 0;
  if ( g_ExAllocateTimer )
  {
    RtlInitUnicodeString(&DestinationString, L"ExDeleteTimer");
    g_ExDeleteTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    if ( g_ExDeleteTimer )
    {
      RtlInitUnicodeString(&DestinationString, L"ExSetTimer");
      g_ExSetTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
      if ( g_ExSetTimer )
      {
        RtlInitUnicodeString(&DestinationString, L"ExCancelTimer");
        g_ExCancelTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
        if ( g_ExCancelTimer )
          return 1;
      }
    }
  }
  return result;
}
