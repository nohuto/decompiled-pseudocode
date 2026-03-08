/*
 * XREFs of NtUserReplyMessage @ 0x1C000B690
 * Callers:
 *     <none>
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall NtUserReplyMessage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v10; // [rsp+68h] [rbp-40h] BYREF
  __int64 v11; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+78h] [rbp-30h]
  __int64 v13; // [rsp+80h] [rbp-28h]
  __int128 v14; // [rsp+88h] [rbp-20h]

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
        v9[2] = 0LL;
        HIDWORD(v10) = 0;
        *(_DWORD *)(v3 + 84) = v4 | 1;
        v14 = 0LL;
        if ( (v4 & 4) == 0 )
        {
          v13 = a1;
          v7 = 33;
          if ( (v4 & 0x400) != 0 )
            v7 = 289;
          v8 = *(_QWORD *)(v3 + 112);
          LODWORD(v10) = v7;
          v11 = *(_QWORD *)(v3 + 48);
          v12 = *(_QWORD *)(v3 + 56);
          v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v9;
          v9[1] = v8;
          if ( v8 )
            HMLockObject(v8);
          xxxInterSendMsgEx(
            *(struct tagWND **)(v3 + 112),
            *(_DWORD *)(v3 + 104),
            0,
            *(struct tagTHREADINFO **)(v3 + 64),
            (__int64)&v10,
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
