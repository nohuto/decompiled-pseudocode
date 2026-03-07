void __fastcall MULTIDEVLOCKOBJ::vLock(MULTIDEVLOCKOBJ *this)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp
  __int64 v4; // rbx

  v1 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) == 0 )
  {
    v3 = 0;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8LL * v3));
        EtwTraceGreLockAcquireSemaphoreExclusive(
          L"*(phsemArrayP + i)",
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v3++),
          4LL);
      }
      while ( v3 < *((_DWORD *)this + 1) >> 1 );
    }
    v4 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 112));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v4 + 112), 5LL);
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 1) + 8LL * v1));
        EtwTraceGreLockAcquireSemaphoreExclusive(
          L"*(phsemArrayD + i)",
          *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v1++),
          11LL);
      }
      while ( v1 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this |= 4u;
  }
}
