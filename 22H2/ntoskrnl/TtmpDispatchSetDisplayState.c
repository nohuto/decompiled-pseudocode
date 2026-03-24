/*
 * XREFs of TtmpDispatchSetDisplayState @ 0x14090112C
 * Callers:
 *     TtmDispatchApi @ 0x1409006E4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408FDB78 (TtmiSetPendingOnOffRequest.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140900984 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140902B14 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayState(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  DmaAdapter = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, (__int64 *)&DmaAdapter);
  v3 = v2;
  if ( v2 >= 0 )
  {
    TtmiSetPendingOnOffRequest(
      v6,
      (unsigned int *)&DmaAdapter->Version,
      *(_BYTE *)(a1 + 16),
      *(_DWORD *)(a1 + 20),
      0x53445354u);
    v3 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayState", 475LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v3;
}
