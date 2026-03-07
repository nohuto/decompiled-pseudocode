__int64 __fastcall ProcessSuspendedEventMessage(
        __int64 a1,
        int a2,
        HWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  HWND v8; // rsi
  struct tagQMSG *v9; // rbx
  struct tagQMSG *QMsgForCoalesce; // rax
  int v11; // edx
  int v12; // r11d

  if ( a2 != 9 || a4 >= 0x400 )
    return 1LL;
  if ( (((unsigned __int16)MessageTable[a4] >> 10) & 7) != 0 )
  {
    if ( (((unsigned __int16)MessageTable[a4] >> 10) & 7u) >= 2 )
    {
      if ( a3 )
        v8 = *a3;
      else
        v8 = 0LL;
      v9 = 0LL;
      while ( 1 )
      {
        QMsgForCoalesce = FindQMsgForCoalesce((struct tagMLIST *)(*(_QWORD *)(a1 + 432) + 24LL), a4, v8, v9);
        v9 = QMsgForCoalesce;
        if ( !QMsgForCoalesce )
          break;
        if ( *((_DWORD *)QMsgForCoalesce + 24) == 9
          && *((_QWORD *)QMsgForCoalesce + 13) == a1
          && !ProcessComplexCoalescence(
                v12,
                v11,
                a5,
                a6,
                (unsigned __int64 *)QMsgForCoalesce + 4,
                (__int64 *)QMsgForCoalesce + 5) )
        {
          return 0LL;
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
