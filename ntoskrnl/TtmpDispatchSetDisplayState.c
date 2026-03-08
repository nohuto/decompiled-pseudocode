/*
 * XREFs of TtmpDispatchSetDisplayState @ 0x1409A39F8
 * Callers:
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A3258 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiSetPendingOnOffRequest @ 0x1409A84C4 (TtmiSetPendingOnOffRequest.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayState(__int64 a1)
{
  int v2; // eax
  int v3; // r8d
  unsigned int v4; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v7, &Object);
  v4 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 16);
    TtmiSetPendingOnOffRequest(v7, (_DWORD)Object, v3, *(_DWORD *)(a1 + 20), 1396986708);
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayState", 475LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v4;
}
