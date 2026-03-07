__int64 __fastcall xxxSetIMEShowStatus(__int64 a1, int a2, int *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  v5 = a1;
  if ( *(_DWORD *)(SGDGetUserSessionState(a1) + 13960) == (_DWORD)a1 )
    return 1LL;
  if ( !a2 )
    goto LABEL_4;
  v16 = 0LL;
  v17 = 0LL;
  v8 = CreateProfileUserName(&v16);
  v9 = v8;
  if ( v8 )
  {
    *a3 = UpdateWinIniInt(v8, 35LL, 236LL, v5);
    FreeProfileUserName(v9, &v16);
  }
  if ( *a3 )
  {
LABEL_4:
    *(_DWORD *)(SGDGetUserSessionState(v6) + 13960) = v5;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v10 = *(_QWORD *)(gpqForeground + 120LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 16);
          v17 = 0LL;
          v16 = 0LL;
          v12 = *(_QWORD *)(v11 + 784);
          if ( v12 )
          {
            if ( (*(_DWORD *)(v11 + 488) & 1) == 0 )
            {
              ThreadLockAlways(v12, &v16);
              xxxNotifyImeShowStatus(*(struct tagWND **)(v11 + 784));
              ThreadUnlock1(v14, v13, v15);
            }
          }
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
