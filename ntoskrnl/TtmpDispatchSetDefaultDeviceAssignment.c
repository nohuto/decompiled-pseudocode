/*
 * XREFs of TtmpDispatchSetDefaultDeviceAssignment @ 0x1409A3890
 * Callers:
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A3258 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1409A6388 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 __fastcall TtmpDispatchSetDefaultDeviceAssignment(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 0, &v7, &Object);
  v4 = v7;
  v5 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 16) != 0;
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 4) & 0xFFFFF7FF | ((unsigned __int8)v3 << 11);
    TtmiLogSessionDeviceAssignmentPolicySet(v3);
    v5 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDefaultDeviceAssignment", 707LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v4 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
