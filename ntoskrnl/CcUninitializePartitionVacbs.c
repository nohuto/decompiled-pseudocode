/*
 * XREFs of CcUninitializePartitionVacbs @ 0x1405372DC
 * Callers:
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 * Callees:
 *     CcSetVacbInFreeList @ 0x14021BC58 (CcSetVacbInFreeList.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MmFreeSystemCacheReserveView @ 0x140A2DC00 (MmFreeSystemCacheReserveView.c)
 */

_QWORD *__fastcall CcUninitializePartitionVacbs(__int64 a1)
{
  _QWORD **v2; // rsi
  _QWORD *result; // rax
  __int64 v4; // r8
  _QWORD *v5; // r14
  _QWORD *v6; // rcx
  KIRQL v7; // bl
  int v8; // eax

  v2 = (_QWORD **)(a1 + 1232);
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    v4 = *result;
    v5 = result - 2;
    if ( *(_QWORD **)(*result + 8LL) != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
      __fastfail(3u);
    *v6 = v4;
    *(_QWORD *)(v4 + 8) = v6;
    MmFreeSystemCacheReserveView(*v5);
    *v5 = 0LL;
    v7 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(a1, v5, 0);
    KeReleaseQueuedSpinLock(4uLL, v7);
    v8 = *(_DWORD *)(a1 + 1248);
    if ( !v8 )
      KeBugCheckEx(0x34u, 0x73EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 1248) = v8 - 1;
  }
  if ( *(_DWORD *)(a1 + 1248) )
    KeBugCheckEx(0x34u, 0x746uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
