void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = *(_DWORD *)SGDGetUserSessionState(v4, v3, v5, v6),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        v14 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v8 = *(_QWORD **)this;
        if ( v8 )
        {
          v9 = v8 + 11;
          if ( v8 != (_QWORD *)-88LL )
          {
            KeEnterCriticalRegion();
            v10 = 0LL;
            v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v11 )
              v10 = *v11;
            v8[13] = v8;
            v8[14] = CleanUpRegion;
            if ( v10 )
            {
              v12 = (_QWORD *)(v10 + 88);
              v13 = *(_QWORD *)(v10 + 88);
              if ( *(_QWORD *)(v13 + 8) != v10 + 88 )
                __fastfail(3u);
              *v9 = v13;
              v8[12] = v12;
              *(_QWORD *)(v13 + 8) = v9;
              *v12 = v9;
            }
            else
            {
              v8[12] = v8 + 11;
              *v9 = v9;
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
  }
}
