__int64 __fastcall GreHidePointer(Gre::Base *a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // r14d
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 HDEV; // rax
  HDEV v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v1 = (unsigned int)a1;
  v2 = 1;
  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v3 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v3 + 10));
  HDEV = UserGetHDEV();
  v5 = (HDEV)HDEV;
  if ( HDEV )
  {
    v13 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
      GreAcquireSemaphore(*((_QWORD *)v3 + 15));
    v14 = *(_QWORD *)(v13 + 56);
    GreAcquireSemaphore(v14);
    v7 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
    if ( (unsigned int)GreUpdatePointerState(v1) )
    {
      if ( v1 )
      {
        GreHidePointerInternal(v5);
      }
      else
      {
        if ( *(_DWORD *)(v7 + 8676) )
        {
          if ( *(_BYTE *)(v7 + 8644) )
          {
            v9 = *(_QWORD *)(v7 + 8624);
            v10 = *(unsigned int *)(v7 + 8632);
            v11 = *(unsigned int *)(v7 + 8636);
            v12 = *(unsigned int *)(v7 + 8640);
          }
          else
          {
            v9 = 0LL;
            v10 = 0LL;
            v11 = 0LL;
            v12 = 0LL;
          }
          GreSetPointer(v9, v10, v11, v12);
          *(_DWORD *)(v7 + 8676) = 0;
        }
        if ( *(_DWORD *)(v7 + 8680) )
        {
          GreMovePointer(v5, *(_DWORD *)(v7 + 8656), *(_DWORD *)(v7 + 8660), *(_DWORD *)(v7 + 8664));
          *(_DWORD *)(v7 + 8680) = 0;
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
      GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 15));
    }
  }
  else
  {
    v2 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 10));
  return v2;
}
