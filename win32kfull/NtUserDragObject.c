__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int128 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h]
  __int128 v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h]

  v28 = 0LL;
  v30 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v9;
  if ( v9 )
  {
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      v15 = ValidateHwnd(a2);
      if ( !v15 )
      {
LABEL_15:
        ThreadUnlock1(v14, v13, v16);
        goto LABEL_16;
      }
    }
    else
    {
      v15 = 0LL;
    }
    if ( a5 )
    {
      v17 = HMValidateHandle(a5, 3u);
      if ( !v17 )
        goto LABEL_15;
    }
    else
    {
      v17 = 0LL;
    }
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v27;
    *((_QWORD *)&v27 + 1) = v15;
    if ( v15 )
      HMLockObject(v15);
    *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v29;
    *((_QWORD *)&v29 + 1) = v17;
    if ( v17 )
      HMLockObject(v17);
    v11 = xxxDragObject(v12, v15, a3, a4, v17);
    ThreadUnlock1(v19, v18, v20);
    ThreadUnlock1(v22, v21, v23);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
