__int64 __fastcall CHolographicViewer::Dispose(CHolographicViewer *this)
{
  void *v2; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  _InterlockedExchange((volatile __int32 *)this + 26, 3);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
  return 0LL;
}
