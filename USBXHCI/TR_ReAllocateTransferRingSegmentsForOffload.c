__int64 __fastcall TR_ReAllocateTransferRingSegmentsForOffload(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  int v6; // edi

  v2 = *(_QWORD **)(a1 + 176);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v4 = (_QWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_QWORD **)(a1 + 216);
  if ( *v5 != a1 + 208 )
    __fastfail(3u);
  *v2 = v4;
  v2[1] = v5;
  *v5 = v2;
  *(_QWORD *)(a1 + 216) = v2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  *(_QWORD *)(a1 + 176) = 0LL;
  if ( (_QWORD *)*v4 != v4 )
    XilCoreCommonBuffer_ReleaseBuffers(v3 + 88, (_QWORD **)(a1 + 208));
  *(_DWORD *)(a1 + 20) = 4096;
  v6 = TR_EnsureSegments(a1, 1u, 0);
  if ( v6 >= 0 )
    *(_QWORD *)(a1 + 176) = TR_AcquireSegment(a1);
  return (unsigned int)v6;
}
