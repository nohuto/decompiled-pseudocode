void __fastcall RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(PVOID *this)
{
  char *v2; // rcx

  v2 = (char *)*this;
  if ( v2 )
  {
    RIMLockExclusive(v2 + 104);
    ObfDereferenceObject(*this);
  }
}
