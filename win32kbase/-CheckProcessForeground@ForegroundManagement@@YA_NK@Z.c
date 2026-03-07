bool __fastcall ForegroundManagement::CheckProcessForeground(ForegroundManagement *this)
{
  __int64 v1; // rdi
  int v2; // esi
  CPushLock *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edi

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v2 = (int)this;
  v3 = (CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL);
  CPushLock::AcquireLockShared((CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL));
  v4 = *(_QWORD *)(v1 + 32);
  if ( v4 )
    v5 = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v4 + 24)) & 0xFFFFFFFC;
  else
    v5 = 0;
  CPushLock::ReleaseLock(v3);
  return v2 == v5;
}
