/*
 * XREFs of UserRedrawDesktop @ 0x1C0239BEC
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0273A8C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 UserRedrawDesktop()
{
  struct tagWND *v0; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v7[2] = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  v0 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v7;
  v7[1] = v0;
  HMLockObject(v0);
  xxxInternalInvalidate(v0, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v3, v2, v4);
  if ( !v8 )
    return UserSessionSwitchLeaveCrit(v6);
  return result;
}
