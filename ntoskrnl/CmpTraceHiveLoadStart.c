/*
 * XREFs of CmpTraceHiveLoadStart @ 0x1406BD708
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveLoadStart(unsigned __int16 *a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  __int16 v5; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int *v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  v2 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_LOAD_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Ptr = *((_QWORD *)a1 + 1);
    UserData.Size = *a1;
    v8 = &v5;
    v10 = &v12;
    v5 = 0;
    UserData.Reserved = 0;
    v9 = 2LL;
    v11 = 4LL;
    return EtwWrite(v2, &EventDescriptor, 0LL, 3u, &UserData);
  }
  return result;
}
