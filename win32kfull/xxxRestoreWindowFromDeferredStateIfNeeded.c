/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0012344
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x1C0012260 (NtUserRestoreWindowDpiChanges.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0041748 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(struct tagWND *a1)
{
  struct tagRECT *v1; // rdi
  __int16 v3; // si
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 Prop; // rax
  int v8; // ecx

  v1 = 0LL;
  v3 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
  if ( !v3 )
    return 0LL;
  if ( !(unsigned int)IsTopLevelWindow() && *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 104) + 40LL) + 286LL) )
  {
    *((_DWORD *)a1 + 80) &= ~0x40u;
    return 1LL;
  }
  else
  {
    result = SetDeferredDpiStateForWindowAndChildren(a1);
    v6 = result;
    if ( v3 == *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) )
    {
      *((_DWORD *)a1 + 80) &= ~0x40000u;
    }
    else
    {
      Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( Prop )
      {
        v8 = *(_DWORD *)(Prop + 48);
        if ( (v8 & 0x80u) != 0 )
        {
          v1 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
          *(_DWORD *)(Prop + 48) = v8 & 0xFFFFFF7F;
        }
      }
      xxxNotifyMonitorChanged(a1, v1, 0LL);
      return v6;
    }
  }
  return result;
}
