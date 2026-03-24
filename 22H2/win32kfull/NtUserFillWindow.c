/*
 * XREFs of NtUserFillWindow @ 0x1C01502A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C0045434 (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h]

  v18 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v8;
    HMLockObject(v8);
    if ( a3 )
    {
      if ( !a1 )
      {
        v13 = 0LL;
        goto LABEL_5;
      }
      v13 = ValidateHwnd(a1);
      if ( v13 )
      {
LABEL_5:
        *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v18;
        *((_QWORD *)&v18 + 1) = v13;
        if ( v13 )
          HMLockObject(v13);
        v10 = xxxFillWindow(v13, v11, a3, a4);
        ThreadUnlock1(v14);
      }
    }
    ThreadUnlock1(v12);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
