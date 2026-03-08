/*
 * XREFs of PnpDiagnosticTraceDeviceOperation @ 0x1402B167C
 * Callers:
 *     PnpTraceStartDevice @ 0x1402B1628 (PnpTraceStartDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B0E0 (PnpQueueQueryAndRemoveEvent.c)
 * Callees:
 *     PnpDiagnosticTrace @ 0x1402B1760 (PnpDiagnosticTrace.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagnosticTraceDeviceOperation(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3,
        __int64 a4,
        char a5)
{
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  __int16 v10; // [rsp+20h] [rbp-31h] BYREF
  unsigned __int16 v11; // [rsp+24h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  __int64 v13; // [rsp+40h] [rbp-11h]
  int v14; // [rsp+48h] [rbp-9h]
  int v15; // [rsp+4Ch] [rbp-5h]
  int *v16; // [rsp+50h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+7h]
  __int16 *v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h]
  __int64 v20; // [rsp+70h] [rbp+1Fh]
  int v21; // [rsp+78h] [rbp+27h]
  int v22; // [rsp+7Ch] [rbp+2Bh]
  char *v23; // [rsp+80h] [rbp+2Fh]
  __int64 v24; // [rsp+88h] [rbp+37h]
  int v25; // [rsp+C0h] [rbp+6Fh] BYREF

  v25 = a3;
  *(_QWORD *)&UserData.Size = 2LL;
  v15 = 0;
  v6 = *a2;
  v14 = *a2;
  v10 = v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v10;
  v13 = *((_QWORD *)a2 + 1);
  v16 = &v25;
  v17 = 4LL;
  if ( a4 )
    v7 = *(_WORD *)a4 >> 1;
  else
    v7 = 0;
  v11 = v7;
  v18 = (__int16 *)&v11;
  v19 = 2LL;
  if ( a4 )
    v8 = *(_QWORD *)(a4 + 8);
  else
    v8 = 0LL;
  v20 = v8;
  v21 = 2 * v7;
  v22 = 0;
  v23 = &a5;
  v24 = 4LL;
  return PnpDiagnosticTrace(EventDescriptor, 6u, &UserData);
}
