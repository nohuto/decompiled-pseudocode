void __fastcall CTouchProcessor::ForwardInertiaFrameToManipulationThread(const struct CPointerInputFrame *a1)
{
  __int64 v1; // rbx
  CInpLockGuard *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  CInpLockGuardShared::CInpLockGuardShared(
    (CInpLockGuardShared *)&v3,
    (struct CInpLockGuard *)(*(_QWORD *)a1 + 32LL),
    1);
  CTouchProcessor::ForwardInputToManipulationThread(v1, a1, 2LL);
  if ( !v4 )
    CInpLockGuard::UnLock(v3);
}
