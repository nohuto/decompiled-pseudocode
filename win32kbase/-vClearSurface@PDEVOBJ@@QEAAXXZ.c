void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
  *(_QWORD *)&v6[32] = 0LL;
  *(_DWORD *)&v6[40] = 0;
  *(_DWORD *)&v6[44] = 0;
  *(_WORD *)&v6[48] = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v6, this);
  *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
  DEVLOCKOBJ::vDestructor((struct _ERESOURCE *)v6);
  if ( *(_QWORD *)&v6[32] )
  {
    if ( v6[48] )
    {
      *(_DWORD *)(*(_QWORD *)&v6[32] + 40LL) &= ~2u;
      v6[48] = 0;
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v6[32]);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
  v3 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v5, v4);
  }
}
