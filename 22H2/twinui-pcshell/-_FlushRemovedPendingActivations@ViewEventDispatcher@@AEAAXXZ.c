/*
 * XREFs of ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x18031B724
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___::Run @ 0x180315830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___--Run.c)
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18031DB10 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18030E460 (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x1803112FC (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 *     ?Remove@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@XZ @ 0x180315650 (-Remove@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU-$CLinkedNode@UPendi.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180316358 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_FlushRemovedPendingActivations(ViewEventDispatcher *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 **v2; // rbp
  int v3; // eax
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 **v6[3]; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 280);
  v2 = (__int64 **)((char *)this + 536);
  while ( 1 )
  {
    StringRawBuffer = 0LL;
    AcquireSRWLockExclusive(v1);
    v6[0] = v2;
    v6[1] = 0LL;
    LOBYTE(v3) = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(v6);
    if ( !v3 )
      break;
    v4 = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Remove((__int64)v6);
    StringRawBuffer = (PCWSTR)v4;
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
    v5 = v4[3];
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v4[2], 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      v4 + 1,
      (__int64 *)&StringRawBuffer);
    if ( v4 )
      CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(v4);
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
