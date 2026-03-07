void __fastcall DXGFASTMUTEX::Release(struct _KTHREAD **this)
{
  if ( this[3] != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  if ( *((int *)this + 8) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_OwnerAcquireCount > 0",
      535LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + 8))-- == 1 )
  {
    this[3] = 0LL;
    ExReleasePushLockExclusiveEx(this + 1, 0LL);
  }
  KeLeaveCriticalRegion();
}
