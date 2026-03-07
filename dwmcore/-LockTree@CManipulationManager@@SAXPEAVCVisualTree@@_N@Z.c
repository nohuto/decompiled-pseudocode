void __fastcall CManipulationManager::LockTree(struct CVisualTree *a1, char a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)a1 + 2) + 672LL);
  if ( a2 )
    AcquireSRWLockShared(v2);
  else
    ReleaseSRWLockShared(v2);
}
