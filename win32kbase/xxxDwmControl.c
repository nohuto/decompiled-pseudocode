__int64 __fastcall xxxDwmControl(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  unsigned int v3; // r8d
  bool v4; // zf

  v2 = a1;
  v3 = -1073741823;
  if ( (_DWORD)a1 == 1034 )
  {
LABEL_5:
    v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == 0LL;
    goto LABEL_6;
  }
  if ( (_DWORD)a1 != 1035 && (_DWORD)a1 != 1036 )
  {
    if ( (_DWORD)a1 != 1037 )
      return v3;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v4 = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) == 0;
LABEL_6:
    if ( v4 )
      return v3;
  }
  v3 = PostWinlogonMessage(a1, a2, 3221225473LL);
  if ( (v3 & 0x80000000) == 0 && v2 == 1034 )
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 1;
  return v3;
}
