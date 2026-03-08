/*
 * XREFs of TR_AcquireSegment @ 0x1C000B1A8
 * Callers:
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0041B80 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TR_AcquireSegment(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v2 = (_QWORD *)(a1 + 208);
  v3 = *(_QWORD **)(a1 + 208);
  if ( v3 == (_QWORD *)(a1 + 208) )
  {
    v3 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    v3[1] = v3;
    *v3 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v3;
}
