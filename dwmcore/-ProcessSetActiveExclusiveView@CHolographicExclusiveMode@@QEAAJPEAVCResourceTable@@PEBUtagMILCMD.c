__int64 __fastcall CHolographicExclusiveMode::ProcessSetActiveExclusiveView(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW *a3)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  this[11].Ptr = (PVOID)*((unsigned int *)a3 + 2);
  LODWORD(this[12].Ptr) = *((_DWORD *)a3 + 3);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
