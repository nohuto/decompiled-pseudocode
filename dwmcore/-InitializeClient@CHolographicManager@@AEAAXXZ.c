/*
 * XREFs of ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1802A22B8
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802A1224 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1802A5614 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::InitializeClient(RTL_SRWLOCK *this)
{
  CHolographicInteropTaskQueue **v2; // r14
  unsigned int i; // ebx
  __int64 v4; // rdx
  unsigned int j; // ebx
  __int64 v6; // rdx
  __int64 *k; // rbx
  __int64 v8; // rsi
  unsigned int m; // esi
  _QWORD *Ptr; // rsi
  _QWORD *n; // rbx

  AcquireSRWLockShared(this + 13);
  v2 = (CHolographicInteropTaskQueue **)&this[6];
  for ( i = 0; i < LODWORD(this[17].Ptr); ++i )
  {
    v4 = *((_QWORD *)this[14].Ptr + i);
    CHolographicInteropTaskQueue::PostMessageW(
      *v2,
      6u,
      (struct IUnknown *)((v4 + 72) & -(__int64)(v4 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( j = 0; j < LODWORD(this[28].Ptr); ++j )
  {
    v6 = *((_QWORD *)this[25].Ptr + j);
    CHolographicInteropTaskQueue::PostMessageW(
      *v2,
      0x18u,
      (struct IUnknown *)((v6 + 64) & -(__int64)(v6 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( k = (__int64 *)this[18].Ptr; k != this[19].Ptr; ++k )
  {
    v8 = *k;
    CHolographicInteropTaskQueue::PostMessageW(
      *v2,
      2u,
      (struct IUnknown *)((v8 + 80) & -(__int64)(v8 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
    if ( *(_BYTE *)(v8 + 241) )
      CHolographicInteropTaskQueue::PostMessageW(
        *v2,
        1u,
        (struct IUnknown *)((v8 + 80) & -(__int64)(v8 != 0)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  for ( m = 0; m < LODWORD(this[24].Ptr); ++m )
  {
    CHolographicInteropTaskQueue::PostMessageW(*v2, 0xCu, *((struct IUnknown **)this[21].Ptr + m), 0LL, 0LL, 0LL, 0LL);
    CHolographicExclusiveView::PublishPresentData(*((CHolographicExclusiveView **)this[21].Ptr + m));
  }
  Ptr = this[11].Ptr;
  for ( n = this[10].Ptr; n != Ptr; ++n )
    CHolographicInteropTaskQueue::PostMessageW(
      *v2,
      0x1Du,
      (struct IUnknown *)((*n + 64LL) & -(__int64)(*n != 0LL)),
      0LL,
      0LL,
      0LL,
      0LL);
  CHolographicInteropTaskQueue::PostMessageW(*v2, 0x1Bu, 0LL, (void *)BYTE1(this[30].Ptr), 0LL, 0LL, 0LL);
  ReleaseSRWLockShared(this + 13);
}
