/*
 * XREFs of NtUserPaintMonitor @ 0x1C01FAC30
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C0113C80 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  BOOL v9; // ebx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+28h] [rbp-60h] BYREF
  RECT v19; // [rsp+38h] [rbp-50h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-28h] BYREF
  __int64 v23; // [rsp+70h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v19 = *a3;
  v8 = ValidateHmonitor(a1, v6);
  v9 = 0;
  if ( v8 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v20;
    *((_QWORD *)&v20 + 1) = v10;
    if ( v10 )
      HMLockObject(v10);
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v8;
    HMLockObject(v8);
    v18 = v10;
    v9 = xxxDesktopPaintCallback(v8, a2, &v19, (__int64)&v18);
    ThreadUnlock1(v12, v11, v13);
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
