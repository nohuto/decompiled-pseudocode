/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00F8540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v2;
    HMLockObject(v2);
    v6 = 0LL;
    v7 = *(unsigned int *)(v5[5] + 288LL);
    LOBYTE(v7) = v7 & 0xF;
    if ( (_BYTE)v7 == 2 )
    {
      v8 = v5;
      do
      {
        v7 = v8[13];
        if ( v7 )
        {
          v9 = v8[3];
          v10 = 0LL;
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( v11 )
              v10 = *(_QWORD *)(v11 + 24);
          }
          if ( v7 == v10 )
            break;
        }
        v8 = (_QWORD *)v8[13];
      }
      while ( v7 );
      if ( v5 == v8 )
      {
        v6 = 1LL;
      }
      else if ( v8 && (*(_DWORD *)(v8[5] + 232LL) & 0x20000000) != 0 )
      {
        v6 = 1LL;
      }
    }
    ThreadUnlock1(v7);
    v4 = v6;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
