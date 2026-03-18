/*
 * XREFs of TtmpDispatchSetInputWakeCapability @ 0x1409A6E24
 * Callers:
 *     TtmDispatchApi @ 0x1409A6270 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     TtmiSetInputWakeCapability @ 0x1409A200C (TtmiSetInputWakeCapability.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A651C (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetInputWakeCapability(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, &Object);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = TtmiSetInputWakeCapability(v6, (__int64)Object, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  else
    TtmiLogError("TtmpDispatchSetInputWakeCapability", 938LL, (unsigned int)v2, (unsigned int)v2);
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
