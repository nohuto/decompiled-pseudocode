/*
 * XREFs of PopDiagTraceFxDeviceUnregistration @ 0x14098C5AC
 * Callers:
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceUnregistration(__int64 a1)
{
  BOOLEAN result; // al
  char v2; // r9
  REGHANDLE v3; // rbx
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v4 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 2, 0LL);
  if ( PopDiagHandleRegistered != v2 )
  {
    v3 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 8;
      return EtwWrite(v3, &POP_ETW_EVENT_DEVICE_UNREGISTRATION, 0LL, 1u, &UserData);
    }
  }
  return result;
}
