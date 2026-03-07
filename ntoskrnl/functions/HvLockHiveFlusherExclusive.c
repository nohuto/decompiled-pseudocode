__int64 __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockAcquireExclusive((unsigned __int64 *)(a1 + 72));
}
