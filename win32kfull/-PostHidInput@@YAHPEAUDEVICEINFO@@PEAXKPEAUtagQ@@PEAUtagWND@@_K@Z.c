__int64 __fastcall PostHidInput(
        struct DEVICEINFO *a1,
        void *a2,
        unsigned int a3,
        struct tagQ *a4,
        struct tagWND *a5,
        unsigned __int64 a6)
{
  size_t v7; // rbx
  unsigned int v9; // esi
  PDEVICE_OBJECT v10; // rcx
  char v11; // bl
  int v12; // edx
  int v13; // ebp
  char *HidData; // rax
  char *v16; // rdi
  char v17; // bl
  __int16 v18; // [rsp+30h] [rbp-78h]

  v7 = a3;
  v9 = *(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 44LL);
  if ( a3 % v9 )
  {
    v10 = WPP_GLOBAL_Control;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 11;
    goto LABEL_19;
  }
  v13 = a3 / v9;
  if ( !(a3 / v9) )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v11 = 0;
    }
    else
    {
      v11 = v13 + 1;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 12;
    goto LABEL_19;
  }
  if ( a3 >= 0xFFFFFFF8 )
    return 0LL;
  HidData = (char *)AllocateHidData(*(_QWORD *)a1, 2, a3 + 8, a6, (__int64)a5);
  v16 = HidData;
  if ( !HidData )
  {
    v10 = WPP_GLOBAL_Control;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 13;
LABEL_19:
    v18 = v12;
    LOBYTE(v12) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      v10->AttachedDevice,
      v12,
      a3,
      (_DWORD)a4,
      3,
      4,
      v18,
      (__int64)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids);
    return 0LL;
  }
  *((_DWORD *)HidData + 14) = v9;
  *((_DWORD *)HidData + 15) = v13;
  memmove(HidData + 64, a2, v7);
  v17 = 1;
  InputTraceLogging::RIM::DeliverRawInput(a1);
  if ( !(unsigned int)PostInputMessage(a4, a5, 0xFFu, a6, *(_QWORD *)v16, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 0, 0LL) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v17 = 0;
    }
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v17,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        3u,
        4u,
        0xEu,
        (__int64)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids,
        a6,
        a4);
    FreeHidData(v16);
    return 0LL;
  }
  return 1LL;
}
