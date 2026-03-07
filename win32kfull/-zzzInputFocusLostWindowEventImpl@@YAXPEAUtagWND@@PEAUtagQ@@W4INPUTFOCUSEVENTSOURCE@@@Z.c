void __fastcall zzzInputFocusLostWindowEventImpl(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  struct tagWND *v3; // rdx
  int v4; // ecx
  int v5; // r9d

  if ( a2 && (v3 = *(struct tagWND **)(a2 + 120)) != 0LL && v3 != a1 && *((_QWORD *)a1 + 2) == *((_QWORD *)v3 + 2) )
  {
    v4 = 35;
    v5 = 33;
  }
  else
  {
    v3 = a1;
    v4 = 51;
    v5 = 49;
  }
  if ( !gdwDeferWinEvent )
    v4 = v5;
  xxxWindowEvent(0x80000003, v3, 0, a3, v4);
}
