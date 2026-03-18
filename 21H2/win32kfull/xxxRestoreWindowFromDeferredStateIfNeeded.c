/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0003D64
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x1C0003C80 (NtUserRestoreWindowDpiChanges.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C009C90C (_SetDeferredDpiStateForWindowAndChildren.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(ShellWindowManagement *this)
{
  __int16 v2; // si
  __int64 result; // rax
  unsigned int v4; // ebp
  __int64 Prop; // rax
  int v6; // ecx

  v2 = *(_WORD *)(*((_QWORD *)this + 5) + 286LL);
  if ( !v2 )
    return 0LL;
  if ( !(unsigned int)IsTopLevelWindow() && *(_WORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 40LL) + 286LL) )
  {
    *((_DWORD *)this + 80) &= ~0x40u;
    return 1LL;
  }
  else
  {
    result = SetDeferredDpiStateForWindowAndChildren(this);
    v4 = result;
    if ( v2 == *(_WORD *)(*((_QWORD *)this + 5) + 284LL) )
    {
      *((_DWORD *)this + 80) &= ~0x40000u;
    }
    else
    {
      Prop = GetProp(this, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1LL);
      if ( Prop )
      {
        v6 = *(_DWORD *)(Prop + 48);
        if ( (v6 & 0x80u) != 0 )
          *(_DWORD *)(Prop + 48) = v6 & 0xFFFFFF7F;
      }
      xxxNotifyMonitorChanged(this);
      return v4;
    }
  }
  return result;
}
