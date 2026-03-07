__int64 __fastcall CitpGetForegroundWindowInfo(
        struct _CIT_WINDOW_INFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3)
{
  __int64 v6; // rbx

  if ( !qword_1C02D69E8 )
    return 0LL;
  if ( (int)qword_1C02D69E8() < 0 )
    return 0LL;
  if ( !a3 )
  {
    if ( !gptiForeground )
      return 0LL;
    if ( *((struct tagPROCESSINFO **)gptiForeground + 53) != a2 )
      return 0LL;
    v6 = *((_QWORD *)gptiForeground + 54);
    if ( !v6 )
      return 0LL;
    a3 = *(struct tagWND **)(v6 + 128);
    if ( !a3 )
      return 0LL;
  }
  if ( qword_1C02D69F0 )
    qword_1C02D69F0(a3, a1);
  return 1LL;
}
