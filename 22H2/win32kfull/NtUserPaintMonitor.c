/*
 * XREFs of NtUserPaintMonitor @ 0x1C01FF970
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C0130E20 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  BOOL v8; // ebx
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-60h] BYREF
  RECT v14; // [rsp+38h] [rbp-50h] BYREF
  __int128 v15; // [rsp+48h] [rbp-40h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v14 = *a3;
  v7 = ValidateHmonitor(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v9;
    if ( v9 )
      HMLockObject(v9);
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v7;
    HMLockObject(v7);
    v13 = v9;
    v8 = xxxDesktopPaintCallback(v7, a2, &v14, (__int64)&v13);
    ThreadUnlock1(v10);
    ThreadUnlock1(v11);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
