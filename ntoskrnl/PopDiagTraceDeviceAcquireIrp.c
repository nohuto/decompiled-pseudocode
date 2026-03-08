/*
 * XREFs of PopDiagTraceDeviceAcquireIrp @ 0x1402B9AE4
 * Callers:
 *     PoDeviceAcquireIrp @ 0x1402B9AA8 (PoDeviceAcquireIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagGetDriverName @ 0x14058F424 (PopDiagGetDriverName.c)
 */

char __fastcall PopDiagTraceDeviceAcquireIrp(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  int DriverName; // eax
  const size_t *v5; // r8
  __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-71h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-61h]
  __int64 v11; // [rsp+58h] [rbp-59h]
  const size_t *v12; // [rsp+60h] [rbp-51h]
  int v13; // [rsp+68h] [rbp-49h]
  int v14; // [rsp+6Ch] [rbp-45h]
  _BYTE v15[128]; // [rsp+78h] [rbp-39h] BYREF
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF
  __int64 v17; // [rsp+118h] [rbp+67h] BYREF

  v2 = &retaddr;
  v17 = a1;
  v8 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE);
    if ( (_BYTE)v2 )
    {
      DriverName = PopDiagGetDriverName(a2, v15);
      *(_QWORD *)&UserData.Size = 8LL;
      v11 = 8LL;
      v5 = (const size_t *)v15;
      if ( DriverName < 0 )
        v5 = &cchOriginalDestLength;
      UserData.Ptr = (ULONGLONG)&v17;
      v10 = &v8;
      v6 = -1LL;
      v12 = v5;
      do
        ++v6;
      while ( *((_WORD *)v5 + v6) );
      v13 = 2 * v6 + 2;
      v14 = 0;
      LOBYTE(v2) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
