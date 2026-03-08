/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x1405FF6DC
 * Callers:
 *     EtwpThreadEnumCallback @ 0x140801B20 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KeRemoveQueueApc @ 0x1402F7360 (KeRemoveQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwpTraceThreadRundown @ 0x14036FE60 (EtwpTraceThreadRundown.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int128 Object; // [rsp+40h] [rbp-29h] BYREF
  char *v6; // [rsp+50h] [rbp-19h]
  _BYTE v7[96]; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+67h] BYREF

  memset(v7, 0, 0x58uLL);
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  v6 = 0LL;
  if ( a1 == KeGetCurrentThread() )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  if ( *(_BYTE *)(a2 + 67) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  DWORD1(Object) = 0;
  v6 = (char *)&Object + 8;
  *((_QWORD *)&Object + 1) = (char *)&Object + 8;
  LOWORD(Object) = 1;
  BYTE2(Object) = 6;
  KeInitializeApc((__int64)v7, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !(unsigned __int8)KeInsertQueueApc((__int64)v7, (__int64)&Object, (_DWORD *)a2, 0) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
  result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
  if ( result != 258 )
    return result;
  if ( KeRemoveQueueApc((__int64)v7) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  else
    return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
}
