/*
 * XREFs of UserRedrawDesktop @ 0x1C0222E68
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C026E9E0 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserRedrawDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15, a2, a3, a4);
  v4 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  ThreadLockAlways(v4, &v13);
  xxxInternalInvalidate(v4, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v6, v5, v7);
  if ( !v15 )
    return UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return result;
}
