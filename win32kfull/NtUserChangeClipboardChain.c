/*
 * XREFs of NtUserChangeClipboardChain @ 0x1C01CE360
 * Callers:
 *     <none>
 * Callees:
 *     xxxChangeClipboardChain @ 0x1C0200878 (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int128 v18; // [rsp+38h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-10h]

  v18 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v4;
    HMLockObject(v4);
    if ( a2 )
    {
      v10 = ValidateHwnd(a2);
      if ( !v10 )
      {
LABEL_9:
        ThreadUnlock1(v9, v8, v11);
        goto LABEL_10;
      }
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v10;
    if ( v10 )
      HMLockObject(v10);
    v6 = xxxChangeClipboardChain(v7, v10);
    ThreadUnlock1(v13, v12, v14);
    goto LABEL_9;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
