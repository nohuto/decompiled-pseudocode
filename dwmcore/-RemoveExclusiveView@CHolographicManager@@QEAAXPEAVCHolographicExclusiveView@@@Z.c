/*
 * XREFs of ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802A27CC
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A5010 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCHolographicExclusiveView@@$0A@@@QEAAHAEBQEAVCHolographicExclusiveView@@@Z @ 0x1802A26DC (-Remove@-$DynArray@PEAVCHolographicExclusiveView@@$0A@@@QEAAHAEBQEAVCHolographicExclusiveView@@@.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveExclusiveView(CHolographicManager *this, struct IUnknown *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  CHolographicInteropTaskQueue *v6; // rcx
  struct IUnknown *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  v4 = DynArray<CHolographicExclusiveView *,0>::Remove((__int64 *)this + 21, &v7);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v6 && *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(v6, 0xDu, a2, 0LL, 0LL, 0LL, 0LL);
    ((void (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl->Release)(a2, v5);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
}
