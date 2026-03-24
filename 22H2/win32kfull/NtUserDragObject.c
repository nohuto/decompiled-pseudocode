/*
 * XREFs of NtUserDragObject @ 0x1C01F7820
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]

  v22 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v9;
  if ( v9 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      v14 = ValidateHwnd(a2);
      if ( !v14 )
      {
LABEL_15:
        ThreadUnlock1(v13);
        goto LABEL_16;
      }
    }
    else
    {
      v14 = 0LL;
    }
    if ( a5 )
    {
      v15 = HMValidateHandle(a5, 3u);
      if ( !v15 )
        goto LABEL_15;
    }
    else
    {
      v15 = 0LL;
    }
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v14;
    if ( v14 )
      HMLockObject(v14);
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v23;
    *((_QWORD *)&v23 + 1) = v15;
    if ( v15 )
      HMLockObject(v15);
    v11 = xxxDragObject(v12, v14, a3, a4, v15);
    ThreadUnlock1(v16);
    ThreadUnlock1(v17);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
