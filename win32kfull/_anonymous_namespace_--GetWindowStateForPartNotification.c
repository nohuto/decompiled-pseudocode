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
