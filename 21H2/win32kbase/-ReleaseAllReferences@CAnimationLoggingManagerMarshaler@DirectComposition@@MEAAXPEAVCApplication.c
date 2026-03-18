/*
 * XREFs of ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C000AC6C (-ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000B2B0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C000B3E0 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

void __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseAllReferences(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 v2; // rdi
  DirectComposition::CDCompDynamicArrayBase *i; // r14
  unsigned __int64 j; // rdi
  unsigned __int64 k; // rdi
  unsigned __int64 m; // rsi
  struct DirectComposition::CWeakReferenceBase **v9; // rsi
  size_t v10; // r8
  struct DirectComposition::CWeakReferenceBase *v11; // rdx
  struct DirectComposition::CWeakReferenceBase *v12; // rdx
  struct DirectComposition::CWeakReferenceBase *v13; // rdx
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 208); v2 < *((_QWORD *)this + 29); ++v2 )
  {
    v9 = *(struct DirectComposition::CWeakReferenceBase ***)(v2 * *((_QWORD *)i + 4) + *(_QWORD *)i);
    if ( v9 )
    {
      if ( *v9 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v9);
        *v9 = 0LL;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v9);
      v10 = *((_QWORD *)i + 4);
      Src = 0LL;
      memmove((void *)(*(_QWORD *)i + v2 * v10), &Src, v10);
    }
  }
  *((_DWORD *)this + 62) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(i, 0LL, 0x6D6C4344u);
  for ( j = 0LL; j < *((_QWORD *)this + 11); ++j )
  {
    v11 = *(struct DirectComposition::CWeakReferenceBase **)(j * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
    if ( v11 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v11);
  }
  *((_DWORD *)this + 26) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(
    (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 64),
    0LL,
    0x6D6C4344u);
  for ( k = 0LL; k < *((_QWORD *)this + 17); ++k )
  {
    v12 = *(struct DirectComposition::CWeakReferenceBase **)(k * *((_QWORD *)this + 18) + *((_QWORD *)this + 14));
    if ( v12 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v12);
  }
  *((_DWORD *)this + 38) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(
    (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 112),
    0LL,
    0x6D6C4344u);
  for ( m = 0LL; m < *((_QWORD *)this + 23); ++m )
  {
    v13 = *(struct DirectComposition::CWeakReferenceBase **)(m * *((_QWORD *)this + 24) + *((_QWORD *)this + 20));
    if ( v13 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v13);
  }
  *((_DWORD *)this + 50) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(
    (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 160),
    0LL,
    0x6D6C4344u);
  DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
}
