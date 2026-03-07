void __fastcall zzzInputFocusReceivedWindowEvent(unsigned int a1)
{
  struct tagWND *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx

  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
  {
    zzzInputFocusReceivedWindowEventImpl(*(_QWORD *)(gpqForeground + 120LL), a1);
  }
  else
  {
    v2 = *(struct tagWND **)(gpqForeground + 120LL);
    v3 = *(_QWORD *)(*((_QWORD *)v2 + 2) + 440LL);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 40);
    else
      LODWORD(v4) = 0;
    v5 = 35;
    if ( !gdwDeferWinEvent )
      v5 = 33;
    xxxWindowEvent(0x80000002, v2, v4, a1, v5);
  }
}
