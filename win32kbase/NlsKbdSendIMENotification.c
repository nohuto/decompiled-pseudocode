char __fastcall NlsKbdSendIMENotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax

  v4 = a2;
  v5 = a1;
  v8 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13848);
  if ( v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    *(_WORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13976) = 0;
    *(_DWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 13980) = v5;
    *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 13984) = v4;
    v23 = SGDGetUserSessionState(v20, v19, v21, v22);
    *(_DWORD *)(v23 + 12616) |= 4u;
  }
  return 1;
}
