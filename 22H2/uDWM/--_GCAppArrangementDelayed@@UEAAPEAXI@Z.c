/*
 * XREFs of ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800AE800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAA@XZ @ 0x180057978 (--1-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAA@XZ.c)
 *     ??A?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@@I@Z @ 0x180057984 (--A-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@.c)
 *     ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x180057998 (--_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CAppArrangementDelayed *__fastcall CAppArrangementDelayed::`scalar deleting destructor'(
        CAppArrangementDelayed *this,
        char a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rcx

  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 19);
  v4 = 0;
  *(_QWORD *)this = &CGroupingStoryboard::`vftable'{for `CBaseObject'};
  for ( *((_QWORD *)this + 2) = &CSlide::`vftable'{for `IAnimationListener'}; v4 < *((_DWORD *)this + 36); ++v4 )
  {
    v5 = *(_QWORD **)DynArray<CStoryboard::UnifiedTargetRect *,0>::operator[]((_QWORD *)this + 15, v4);
    if ( v5 )
      CStoryboard::UnifiedTargetRect::`scalar deleting destructor'(v5);
  }
  DynArray<CStoryboard::UnifiedTargetRect *,0>::~DynArray<CStoryboard::UnifiedTargetRect *,0>((_QWORD *)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 11);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAppArrangementDelayed *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
