/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1409A6940
 * Callers:
 *     TtmDispatchApi @ 0x1409A6270 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     TtmiEvacuateDevices @ 0x1409A1D08 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4D70 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A651C (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchEvacuateDevices(__int64 a1)
{
  void *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(void **)(a1 + 8);
  v5 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(v1, 0, 1, &v5, &Object);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( TtmiEvacuateDevices(v5, (__int64)Object) )
      TtmiScheduleSessionWorker(v5, 1);
    v3 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchEvacuateDevices", 615LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
