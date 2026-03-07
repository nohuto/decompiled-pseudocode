void __fastcall MULTIDEVLOCKOBJ::vUnlock(MULTIDEVLOCKOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rsi
  struct _ERESOURCE *v7; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 && (*(_DWORD *)this & 4) != 0 )
  {
    v3 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayD + i)", *(_QWORD *)(v2 + 8 * v3));
        v2 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v2 + 8 * v3) )
        {
          ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v2 + 8 * v3));
          PsLeavePriorityRegion();
          v2 = *((_QWORD *)this + 1);
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 1) >> 1 );
    }
    v4 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v4 + 112));
    v5 = *(struct _ERESOURCE **)(v4 + 112);
    if ( v5 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v5);
      PsLeavePriorityRegion();
    }
    v6 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayP + i)", *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v6));
        v7 = *(struct _ERESOURCE **)(*((_QWORD *)this + 2) + 8 * v6);
        if ( v7 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v7);
          PsLeavePriorityRegion();
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this &= ~4u;
  }
}
