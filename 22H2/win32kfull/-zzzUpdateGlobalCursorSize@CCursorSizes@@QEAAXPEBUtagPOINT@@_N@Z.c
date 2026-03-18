/*
 * XREFs of ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C005B398
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0024A88 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C005B484 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014F34E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C014FE8C (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00A4BA4 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00A90A4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B8B48 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 */

void __fastcall CCursorSizes::zzzUpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v3; // rbx
  _OWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v12; // cx
  unsigned __int64 v13; // rax
  int v14; // esi
  int v15; // edi
  char v16; // [rsp+40h] [rbp+18h] BYREF

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
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  v9 = MonitorFromPoint(*a2, 1LL, 18LL);
  if ( v9 )
  {
    CPushLock::AcquireLockExclusive(v3);
    *v6 = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 28LL);
    v12 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL);
    if ( v12 >= 0x90u )
    {
      if ( v12 >= 0xC0u )
      {
        if ( v12 >= 0x120u )
          v13 = (-(__int64)(v12 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
        else
          v13 = 44LL;
      }
      else
      {
        v13 = 36LL;
      }
    }
    else
    {
      v13 = 28LL;
    }
    v14 = *(_DWORD *)((char *)this + v13);
    v15 = *(_DWORD *)this;
    *(_DWORD *)this = v14;
    CPushLock::ReleaseLock(v3);
    if ( v14 != v15 )
      zzzUpdateCursorImage();
  }
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
}
