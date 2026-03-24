/*
 * XREFs of NtUserChangeClipboardChain @ 0x1C015F2E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxChangeClipboardChain @ 0x1C015F420 (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v4;
    HMLockObject(v4);
    if ( a2 )
    {
      v8 = ValidateHwnd(a2);
      if ( !v8 )
      {
LABEL_7:
        ThreadUnlock1(v10);
        goto LABEL_8;
      }
    }
    else
    {
      v8 = 0LL;
    }
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v8;
    if ( v8 )
      HMLockObject(v8);
    v6 = xxxChangeClipboardChain(v7, v8);
    ThreadUnlock1(v9);
    goto LABEL_7;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
