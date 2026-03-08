/*
 * XREFs of EtwpTraceLostSystemEventOld @ 0x14040C628
 * Callers:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140384C90 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpTraceLostSystemEventOld(__int16 a1, unsigned __int16 *a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+48h] [rbp+7h] BYREF
  int *v5; // [rsp+58h] [rbp+17h]
  __int64 v6; // [rsp+60h] [rbp+1Fh]
  __int64 v7; // [rsp+68h] [rbp+27h]
  int v8; // [rsp+70h] [rbp+2Fh]
  int v9; // [rsp+74h] [rbp+33h]
  __int64 *v10; // [rsp+78h] [rbp+37h]
  __int64 v11; // [rsp+80h] [rbp+3Fh]
  __int16 v12; // [rsp+A8h] [rbp+67h] BYREF
  int v13; // [rsp+B8h] [rbp+77h] BYREF

  v13 = a3;
  v12 = a1;
  *(_QWORD *)&v4.Size = 2LL;
  v9 = 0;
  v4.Ptr = (ULONGLONG)&v12;
  v11 = 2LL;
  v5 = &v13;
  v7 = *((_QWORD *)a2 + 1);
  v8 = *a2;
  v10 = &EtwpNull;
  v6 = 4LL;
  return EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT, 0LL, 1u, 0LL, 0LL, 4u, &v4);
}
