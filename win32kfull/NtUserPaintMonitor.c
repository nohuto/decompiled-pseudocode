/*
 * XREFs of NtUserPaintMonitor @ 0x1C01D9190
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C00EF1F0 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  BOOL v11; // ebx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+28h] [rbp-60h] BYREF
  RECT v21; // [rsp+38h] [rbp-50h] BYREF
  __int128 v22; // [rsp+48h] [rbp-40h] BYREF
  __int64 v23; // [rsp+58h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-28h] BYREF
  __int64 v25; // [rsp+70h] [rbp-18h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v21 = *a3;
  v10 = ValidateHmonitor(a1, v6, v7, v8);
  v11 = 0;
  if ( v10 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v12;
    if ( v12 )
      HMLockObject(v12);
    *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v24;
    *((_QWORD *)&v24 + 1) = v10;
    HMLockObject(v10);
    v20 = v12;
    v11 = xxxDesktopPaintCallback(v10, a2, &v21, (__int64)&v20);
    ThreadUnlock1(v14, v13, v15);
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
