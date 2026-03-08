/*
 * XREFs of CmpTraceHiveMountStop @ 0x140731120
 * Callers:
 *     HvHiveStartFileBacked @ 0x14072F1D4 (HvHiveStartFileBacked.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveMountStop(int a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  v1 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v5;
    UserData.Size = 4;
    return EtwWrite(v1, &EventDescriptor, 0LL, 1u, &UserData);
  }
  return result;
}
