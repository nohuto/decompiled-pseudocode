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
  for ( i = (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 200); v2 < *((_QWORD *)this + 28); ++v2 )
  {
    v9 = *(struct DirectComposition::CWeakReferenceBase ***)(*((_QWORD *)i + 4) * v2 + *(_QWORD *)i);
    if ( v9 )
    {
      if ( *v9 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v9);
        *v9 = 0LL;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v9);
      v10 = *((_QWORD *)i + 4);
      Src = 0LL;
      memmove((void *)(*(_QWORD *)i + v2 * v10), &Src, v10);
    }
  }
  *((_DWORD *)this + 60) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(i, 0LL, 0x6D6C4344u);
  for ( j = 0LL; j < *((_QWORD *)this + 10); ++j )
  {
    v11 = *(struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 11) * j + *((_QWORD *)this + 7));
    if ( v11 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v11);
  }
  *((_DWORD *)this + 24) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(
    (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 56),
    0LL,
    0x6D6C4344u);
  for ( k = 0LL; k < *((_QWORD *)this + 16); ++k )
  {
    v12 = *(struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 17) * k + *((_QWORD *)this + 13));
    if ( v12 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v12);
  }
  *((_DWORD *)this + 36) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(
    (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 104),
    0LL,
    0x6D6C4344u);
  for ( m = 0LL; m < *((_QWORD *)this + 22); ++m )
  {
    v13 = *(struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 23) * m + *((_QWORD *)this + 19));
    if ( v13 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v13);
  }
  *((_DWORD *)this + 48) = 0;
  DirectComposition::CDCompDynamicArrayBase::SetCount(
    (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 152),
    0LL,
    0x6D6C4344u);
  DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
}
