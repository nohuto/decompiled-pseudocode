/*
 * XREFs of NtUserFillWindow @ 0x1C01522D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C00C1AAC (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagWND *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a2);
  v8 = 0;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v6;
    HMLockObject(v6);
    if ( a3 )
    {
      if ( !a1 )
      {
        v13 = 0LL;
        goto LABEL_5;
      }
      v13 = (struct tagWND *)ValidateHwnd(a1);
      if ( v13 )
      {
LABEL_5:
        *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v20;
        *((_QWORD *)&v20 + 1) = v13;
        if ( v13 )
          HMLockObject(v13);
        v8 = xxxFillWindow(v13, v9, a3);
        ThreadUnlock1(v15, v14, v16);
      }
    }
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
