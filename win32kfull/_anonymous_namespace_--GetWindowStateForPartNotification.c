/*
 * XREFs of _anonymous_namespace_::GetWindowStateForPartNotification @ 0x1C021FD2C
 * Callers:
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C021FE90 (_anonymous_namespace_--NotifyPartEnter.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall anonymous_namespace_::GetWindowStateForPartNotification(struct tagWND *a1)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rsi

  v2 = 0;
  if ( gpqForeground )
  {
    v3 = *(_QWORD *)(gpqForeground + 128LL);
    if ( v3 )
    {
      if ( v3 == GetTopLevelWindow((__int64)a1) )
        v2 = 16;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
  {
    v2 |= 0x40u;
  }
  else if ( IsSemiMaximized(a1) )
  {
    v2 |= 0x20u;
  }
  return v2;
}
