__int64 __fastcall UnpackPenSettings(_DWORD *a1)
{
  int v1; // eax
  int v3; // ebx
  char v4; // si
  bool v5; // dl
  BOOL v6; // eax
  int v7; // ecx
  int v8; // ebx
  __int64 result; // rax

  v1 = (int)qword_1C02D7448;
  v3 = a1[3];
  if ( qword_1C02D7448 )
    v1 = qword_1C02D7448();
  v4 = 1;
  if ( v3 != v1 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink);
    v6 = RIMIsDefaultUILanguageRTL();
    v7 = 0;
    if ( v6 )
      LOBYTE(v7) = v3 == 0;
    else
      LOBYTE(v7) = v3 != 0;
    *((_DWORD *)gpsi + 514) = v7;
    if ( qword_1C02D6EC8 )
      qword_1C02D6EC8(8229LL, 0LL, 0LL);
  }
  v8 = a1[4];
  if ( v8 != dword_1C02CAA70 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink);
    dword_1C02CAA70 = v8;
    if ( qword_1C02D6EC8 )
      qword_1C02D6EC8(8223LL, 0LL, 0LL);
  }
  result = (unsigned int)a1[5];
  if ( (_DWORD)result != dword_1C02CAAB0 )
    dword_1C02CAAB0 = a1[5];
  return result;
}
