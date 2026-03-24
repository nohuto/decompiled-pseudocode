/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x1409011E0
 * Callers:
 *     TtmDispatchApi @ 0x1409006E4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408FDCBC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140900984 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140902B14 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayTimeouts(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rsi
  unsigned int v4; // edi
  struct _DMA_ADAPTER *v5; // rbx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  DmaAdapter = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v7, (__int64 *)&DmaAdapter);
  v3 = (_DWORD *)v7;
  v4 = v2;
  v5 = DmaAdapter;
  if ( v2 >= 0 )
  {
    if ( !HIDWORD(DmaAdapter[1].DmaOperations) )
      *(_BYTE *)(v7 + 240) = 0;
    TtmiTerminalSetDisplayTimeouts(v3, (__int64)v5, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayTimeouts", 543LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v3 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v5 )
    HalPutDmaAdapter(v5);
  return v4;
}
