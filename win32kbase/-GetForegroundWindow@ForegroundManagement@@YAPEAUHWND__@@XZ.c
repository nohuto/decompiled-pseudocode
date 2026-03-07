__int64 __fastcall ForegroundManagement::GetForegroundWindow(ForegroundManagement *this)
{
  __int64 v1; // rdi
  CPushLock *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v2 = (CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL);
  CPushLock::AcquireLockShared((CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL));
  v3 = *(_QWORD *)(v1 + 32);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 72);
  CPushLock::ReleaseLock(v2);
  return v4;
}
