/*
 * XREFs of ?Stop@CRippleEffect@@QEAAJXZ @ 0x18009C2C0
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013FD0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x18009BD5C (--1CRippleEffect@@MEAA@XZ.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18009C0BC (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x18009C330 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E00C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRippleEffect::Stop(CRippleEffect *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al

  if ( *((_BYTE *)this + 272) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 272) = 0;
  }
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    *((_QWORD *)this + 33) = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  (*(void (__fastcall **)(CRippleEffect *))(*(_QWORD *)this + 104LL))(this);
  return 0LL;
}
