/*
 * XREFs of NtUserDragObject @ 0x1C01CE920
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int128 v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h]
  __int128 v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]

  v31 = 0LL;
  v33 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v9;
  if ( v9 )
  {
    *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v28;
    *((_QWORD *)&v28 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      v18 = ValidateHwnd(a2);
      if ( !v18 )
      {
LABEL_15:
        ThreadUnlock1(v17, v16, v19);
        goto LABEL_16;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( a5 )
    {
      v20 = HMValidateHandle(a5, 3u);
      if ( !v20 )
        goto LABEL_15;
    }
    else
    {
      v20 = 0LL;
    }
    *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v30;
    *((_QWORD *)&v30 + 1) = v18;
    if ( v18 )
      HMLockObject(v18);
    *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v32;
    *((_QWORD *)&v32 + 1) = v20;
    if ( v20 )
      HMLockObject(v20);
    v14 = xxxDragObject(v15, v18, a3, a4, v20);
    ThreadUnlock1(v22, v21, v23);
    ThreadUnlock1(v25, v24, v26);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
