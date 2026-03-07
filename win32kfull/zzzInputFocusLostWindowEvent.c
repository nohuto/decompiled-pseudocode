void __fastcall zzzInputFocusLostWindowEvent(struct tagWND *a1, unsigned int a2)
{
  struct tagWND *v4; // rdx
  int v5; // ecx

  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
  {
    zzzInputFocusLostWindowEventImpl(a1, gpqForeground, a2);
  }
  else
  {
    if ( gpqForeground
      && (v4 = *(struct tagWND **)(gpqForeground + 120LL)) != 0LL
      && v4 != a1
      && *((_QWORD *)a1 + 2) == *((_QWORD *)v4 + 2) )
    {
      v5 = 35;
      if ( !gdwDeferWinEvent )
        v5 = 33;
    }
    else
    {
      v5 = 51;
      if ( !gdwDeferWinEvent )
        v5 = 49;
      v4 = a1;
    }
    xxxWindowEvent(0x80000003, v4, 0, a2, v5);
  }
}
