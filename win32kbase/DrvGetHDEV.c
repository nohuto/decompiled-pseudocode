__int64 *__fastcall DrvGetHDEV(const UNICODE_STRING *a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rcx
  __int64 DeviceFromName; // rbp
  __int64 *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rax
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    if ( DeviceFromName )
    {
      v4 = 0LL;
      v5 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v5 + 8), 16LL);
      v7 = *(__int64 **)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 6080LL);
      if ( v7 )
      {
        do
        {
          v8 = v7[319];
          if ( v8 && v8 == DeviceFromName )
          {
            if ( (v7[5] & 0x400) == 0 )
            {
              ++*((_DWORD *)v7 + 2);
              TrackObjectReferenceIncrement(1LL, v7[440]);
              v1 = v7;
              goto LABEL_8;
            }
            if ( !v4 )
              v4 = v7;
          }
          v7 = (__int64 *)*v7;
        }
        while ( v7 );
        if ( v4 )
        {
          v4[4] = 0LL;
          ++*((_DWORD *)v4 + 2);
          TrackObjectReferenceIncrement(1LL, v4[440]);
          v1 = v4;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v5 + 8));
      v9 = *(struct _ERESOURCE **)(v5 + 8);
      if ( v9 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v9);
        PsLeavePriorityRegion(v11, v10);
      }
    }
  }
  return v1;
}
