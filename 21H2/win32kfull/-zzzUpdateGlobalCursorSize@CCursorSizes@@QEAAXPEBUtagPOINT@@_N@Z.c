/*
 * XREFs of ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C009A8A4 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C009BF80 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C016A9CA (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00F4E24 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0104BEC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C011C7EC (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorSizes::zzzUpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int16 v8; // cx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // edi
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = (CCursorSizes *)((char *)this + 64);
  if ( !a3 )
  {
    CPushLock::AcquireLockShared((CCursorSizes *)((char *)this + 64));
    if ( PtInRect((_DWORD *)this + 2, (unsigned __int64)*a2) )
    {
      CPushLock::ReleaseLock(v3);
      return;
    }
    CPushLock::ReleaseLock(v3);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  v7 = MonitorFromPoint((unsigned __int64)*a2, 1u, 0x12u);
  if ( v7 )
  {
    CPushLock::AcquireLockExclusive(v3);
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 28LL);
    v8 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 64LL);
    if ( v8 >= 0x90u )
    {
      if ( v8 >= 0xC0u )
      {
        if ( v8 >= 0x120u )
          v9 = (-(__int64)(v8 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
        else
          v9 = 44LL;
      }
      else
      {
        v9 = 36LL;
      }
    }
    else
    {
      v9 = 28LL;
    }
    v10 = *(_DWORD *)((char *)this + v9);
    v11 = *(_DWORD *)this;
    *(_DWORD *)this = v10;
    CPushLock::ReleaseLock(v3);
    if ( v10 != v11 )
      zzzUpdateCursorImage();
  }
  if ( !v12 )
    UserSessionSwitchLeaveCrit(v6);
}
