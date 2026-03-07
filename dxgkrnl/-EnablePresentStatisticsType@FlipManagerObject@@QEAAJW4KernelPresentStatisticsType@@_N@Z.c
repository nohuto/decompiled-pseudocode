__int64 __fastcall FlipManagerObject::EnablePresentStatisticsType(__int64 a1, unsigned int a2, char a3)
{
  int v6; // ebx
  __int64 v7; // r8

  v6 = CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 40));
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = a3;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 256) + 16LL))(
           *(_QWORD *)(a1 + 256),
           a2,
           v7);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 40));
  }
  return (unsigned int)v6;
}
