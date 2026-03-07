__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 i; // rbx
  __int64 *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v4 = (*(__int64 (**)(void))(DxgkWin32kInterface + 616))();
  v6 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  if ( a1 )
  {
    *a1 = 0;
    EngAcquireSemaphore(*(HSEMAPHORE *)(v6 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v6 + 8), 16);
    v9 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    for ( i = *(_QWORD *)(v9 + 6080); i; i = *v11 )
    {
      v11 = (__int64 *)i;
      if ( (*(_DWORD *)(i + 40) & 0x401) == 1 )
      {
        v12 = *(_QWORD *)(i + 2552);
        if ( v12 )
        {
          if ( v12 != -4 && (*(_DWORD *)(v12 + 160) & 0x800000) != 0 )
          {
            v13 = DxDdGetDxgkWin32kInterface(v9, v8);
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v13 + 624))(
                   *(_QWORD *)(i + 2552) + 240LL,
                   *(unsigned int *)(*(_QWORD *)(i + 2552) + 248LL)) != *(_DWORD *)(i + 2508)
              || (v11 = (__int64 *)i, (*(_DWORD *)(i + 2516) & 0x20) != 0)
              && (v9 = (unsigned int)(96 * *(_DWORD *)(i + 2432) + 50),
                  v8 = (unsigned int)v9 / 0x64,
                  (_DWORD)v8 != *(unsigned __int16 *)(v6 + 1248)) )
            {
              *a1 = 1;
              break;
            }
          }
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v6 + 8));
    v14 = *(struct _ERESOURCE **)(v6 + 8);
    if ( v14 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v14);
      PsLeavePriorityRegion(v16, v15);
    }
  }
  return v4;
}
