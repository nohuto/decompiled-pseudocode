void __fastcall CleanupPowerRequestList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagPOWERREQUEST *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax

  *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2940) = 1;
  if ( *(_QWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 704) )
  {
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    ObfDereferenceObject(*(PVOID *)(v12 + 704));
    *(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 704) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 696) )
  {
    while ( 1 )
    {
      v17 = UnqueuePowerRequest();
      if ( !v17 )
        break;
      CancelPowerRequest(v17);
    }
    v22 = SGDGetUserSessionState(v19, v18, v20, v21);
    CleanupPowerWatchdog((void **)(v22 + 728));
    v27 = SGDGetUserSessionState(v24, v23, v25, v26);
    CleanupPowerWatchdog((void **)(v27 + 736));
  }
}
