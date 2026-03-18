/*
 * XREFs of NtUserReplyMessage @ 0x1C0001170
 * Callers:
 *     <none>
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 */

__int64 __fastcall NtUserReplyMessage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rax
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+50h] [rbp-58h] BYREF
  _DWORD v11[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v12; // [rsp+70h] [rbp-38h]
  __int64 v13; // [rsp+78h] [rbp-30h]
  __int64 v14; // [rsp+80h] [rbp-28h]
  __int128 v15; // [rsp+88h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 84);
    if ( (v4 & 1) == 0 )
    {
      v5 = *(_QWORD *)(v3 + 32);
      if ( v5 )
      {
        *(_QWORD *)(v3 + 72) = a1;
        *(_DWORD *)(v3 + 84) = v4 | 1;
        SetWakeBit(v5, 512LL);
      }
      else if ( (v4 & 0x100) != 0 )
      {
        v7 = v4 | 1;
        v10[2] = 0LL;
        v11[1] = 0;
        *(_DWORD *)(v3 + 84) = v7;
        v15 = 0LL;
        if ( (v7 & 4) == 0 )
        {
          v14 = a1;
          v8 = 33;
          if ( (v7 & 0x400) != 0 )
            v8 = 289;
          v9 = *(_QWORD *)(v3 + 112);
          v11[0] = v8;
          v12 = *(_QWORD *)(v3 + 48);
          v13 = *(_QWORD *)(v3 + 56);
          v10[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v10;
          v10[1] = v9;
          if ( v9 )
            HMLockObject();
          xxxInterSendMsgEx(
            *(_QWORD *)(v3 + 112),
            *(unsigned int *)(v3 + 104),
            0LL,
            0LL,
            0,
            *(_QWORD *)(v3 + 64),
            v11,
            1,
            (*(_WORD *)(v3 + 86) & 1) == 0);
          ThreadUnlock1();
        }
      }
      v2 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
