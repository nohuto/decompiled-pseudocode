/*
 * XREFs of EtwpPsProvTraceJob @ 0x1409E3668
 * Callers:
 *     EtwTraceJob @ 0x1409E2518 (EtwTraceJob.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceJob(__int64 a1, int a2, __int16 a3)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+40h] [rbp-C0h]
  __int64 v7; // [rsp+48h] [rbp-B8h]
  int *v8; // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  int v10; // [rsp+3B8h] [rbp+2B8h] BYREF

  v10 = a2;
  if ( a3 == 1824 )
  {
    v3 = &JobStart;
  }
  else
  {
    if ( a3 != 1825 )
      return result;
    v3 = (const EVENT_DESCRIPTOR *)JobTerminate;
  }
  *(_QWORD *)&UserData.Size = 16LL;
  UserData.Ptr = a1 + 1456;
  v7 = 4LL;
  v6 = a1 + 1452;
  v8 = &v10;
  v9 = 4LL;
  return EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 3u, &UserData);
}
