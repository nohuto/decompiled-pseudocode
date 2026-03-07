void __fastcall CComputeScribbleScheduler::SetScannedOutBuffer(RTL_SRWLOCK *this, int a2, int a3)
{
  RTL_SRWLOCK *v3; // rbp

  v3 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  LODWORD(this[22].Ptr) = a3 - a2;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
