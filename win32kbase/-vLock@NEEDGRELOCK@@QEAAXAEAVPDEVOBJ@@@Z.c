void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rcx
  HSEMAPHORE v5; // rcx

  *(_QWORD *)this = 0LL;
  if ( *(_QWORD *)a2
    && !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000) == 0 )
  {
    v5 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 120LL);
    *(_QWORD *)this = v5;
    EngAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 2LL);
  }
}
