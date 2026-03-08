/*
 * XREFs of ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001DB98
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D944 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001DD64 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01430AC (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003C250 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 *     _MonitorFromPoint @ 0x1C00A2920 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00DBE14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00E001C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00F0AD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorSizes::zzzUpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v3; // rbx
  _OWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = (CCursorSizes *)((char *)this + 64);
  if ( a3 )
  {
    v6 = (_OWORD *)((char *)this + 8);
  }
  else
  {
    CPushLock::AcquireLockShared((CCursorSizes *)((char *)this + 64));
    v6 = (_OWORD *)((char *)this + 8);
    if ( (unsigned int)PtInRect((char *)this + 8, *a2) )
    {
      CPushLock::ReleaseLock(v3);
      return;
    }
    CPushLock::ReleaseLock(v3);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  v8 = MonitorFromPoint(*a2, 1LL, 18LL);
  if ( v8 )
  {
    CPushLock::AcquireLockExclusive(v3);
    *v6 = *(_OWORD *)(*(_QWORD *)(v8 + 40) + 28LL);
    v9 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 64LL);
    if ( v9 >= 0x90u )
    {
      if ( v9 >= 0xC0u )
      {
        if ( v9 >= 0x120u )
          v10 = (-(__int64)(v9 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
        else
          v10 = 44LL;
      }
      else
      {
        v10 = 36LL;
      }
    }
    else
    {
      v10 = 28LL;
    }
    v11 = *(_DWORD *)((char *)this + v10);
    v12 = *(_DWORD *)this;
    *(_DWORD *)this = v11;
    CPushLock::ReleaseLock(v3);
    if ( v11 != v12 )
      zzzUpdateCursorImage();
  }
  if ( !v13 )
    UserSessionSwitchLeaveCrit(v7);
}
