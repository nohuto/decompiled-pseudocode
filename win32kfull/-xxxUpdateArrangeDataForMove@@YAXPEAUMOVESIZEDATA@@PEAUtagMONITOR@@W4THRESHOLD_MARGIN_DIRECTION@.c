/*
 * XREFs of ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F3238
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F230C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01EB47C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01EE2EC (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x1C02205FC (-ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z.c)
 *     ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x1C023CE60 (-ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x1C023D1DC (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x1C023D464 (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x1C023DB80 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1C023DC70 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1C023DD44 (-SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1C023DE18 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 */

void __fastcall xxxUpdateArrangeDataForMove(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  char ArrangeRectFromHitTarget; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  struct tagRECT v13; // [rsp+48h] [rbp-20h] BYREF

  if ( (a3 != 4) != (a4 != 4) && *(_BYTE *)(a1 + 336) )
    NotifyShell::ResetArrangement(a1, a3 != 4);
  MOVESIZEDATA::SHData_ResetRuntimeState((MOVESIZEDATA *)a1);
  *(_DWORD *)(a1 + 200) &= 0xFFFFFCFF;
  v13 = 0LL;
  if ( a3 != 4 || MOVESIZEDATA::SHData_GetCustomDockTargetWindow((MOVESIZEDATA *)a1) )
  {
    v11 = 0LL;
    v12 = 0LL;
    ThreadLock(a2, &v11);
    ArrangeRectFromHitTarget = xxxGetArrangeRectFromHitTarget(a1, a2, a3 == 4, a3, (struct tagWND *)&v13);
    ThreadUnlock1(v9, v8, v10);
    if ( ArrangeRectFromHitTarget )
    {
      MOVESIZEDATA::SetPreviewRect((MOVESIZEDATA *)a1, &v13);
      goto LABEL_8;
    }
  }
  else
  {
    DWM_ARRANGEMENT_DATA::SetShrinkWidth((DWM_ARRANGEMENT_DATA *)(a1 + 344), 0, (const struct MOVESIZEDATA *)a1);
    DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((DWM_ARRANGEMENT_DATA *)(a1 + 344), (const struct MOVESIZEDATA *)a1);
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(
      (DWM_ARRANGEMENT_DATA *)(a1 + 344),
      0LL,
      (const struct MOVESIZEDATA *)a1);
  }
  MOVESIZEDATA::ClearPreviewRect((MOVESIZEDATA *)a1);
LABEL_8:
  MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1);
}
