void __fastcall zzzInputFocusReceivedWindowEventImpl(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // ecx

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 440LL);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 40);
  else
    LODWORD(v5) = 0;
  v6 = 35;
  if ( !gdwDeferWinEvent )
    v6 = 33;
  xxxWindowEvent(0x80000002, a1, v5, a2, v6);
}
