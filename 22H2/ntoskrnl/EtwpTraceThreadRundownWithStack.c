/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x1405AB7CC
 * Callers:
 *     EtwpThreadEnumCallback @ 0x140792AE0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeRemoveQueueApc @ 0x14031E0BC (KeRemoveQueueApc.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     EtwpTraceThreadRundown @ 0x1403A9640 (EtwpTraceThreadRundown.c)
 *     memset @ 0x140413800 (memset.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int128 Object; // [rsp+40h] [rbp-29h] BYREF
  char *v9; // [rsp+50h] [rbp-19h]
  _BYTE v10[96]; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+67h] BYREF

  memset(v10, 0, 0x58uLL);
  Object = 0LL;
  v9 = 0LL;
  if ( a1 == KeGetCurrentThread() )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  if ( *(_BYTE *)(a2 + 67) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  DWORD1(Object) = 0;
  v9 = (char *)&Object + 8;
  *((_QWORD *)&Object + 1) = (char *)&Object + 8;
  LOWORD(Object) = 1;
  BYTE2(Object) = 6;
  KeInitializeApc((__int64)v10, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !KeInsertQueueApc((__int64)v10, (__int64)&Object, a2, 0) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
  result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
  if ( result != 258 )
    return result;
  if ( KeRemoveQueueApc((__int64)v10, v5, v6, v7) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  else
    return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
}
