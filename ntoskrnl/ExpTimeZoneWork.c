/*
 * XREFs of ExpTimeZoneWork @ 0x1409F53B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ZwSetSystemTime @ 0x140415A70 (ZwSetSystemTime.c)
 */

char __fastcall ExpTimeZoneWork(struct _LIST_ENTRY *Object)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // rdi
  char result; // al

  v2 = PsAttachSiloToCurrentThread(Object);
  v3 = *((_QWORD *)PsGetServerSiloGlobals((__int64)Object) + 157);
  do
    ZwSetSystemTime(0LL, 0LL);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 928), 0xFFFFFFFF) != 1 );
  PsDetachSiloFromCurrentThread(v2);
  result = PsIsHostSilo((__int64)Object);
  if ( !result )
    return ObfDereferenceObjectWithTag(Object, 0x53707845u);
  return result;
}
