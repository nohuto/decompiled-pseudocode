char __fastcall CContentRects::Get(CContentRects *this, unsigned int a2, struct tagRECT *a3, unsigned int *a4)
{
  struct tagRECT *v4; // rsi
  unsigned int v6; // r9d
  bool v7; // bl
  char v9; // [rsp+40h] [rbp-18h]

  v4 = a3;
  *a4 = *((_DWORD *)this + 20);
  v6 = *((_DWORD *)this + 20);
  if ( a2 >= v6 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        24,
        12,
        (__int64)&WPP_5f4aa0e535e73cdf7b29b9133c3090be_Traceguids,
        v6);
    }
    memmove(v4, (char *)this + 16, 16LL * *((unsigned int *)this + 20));
    return 1;
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = a2;
      LOBYTE(a2) = v7;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        11,
        (__int64)&WPP_5f4aa0e535e73cdf7b29b9133c3090be_Traceguids,
        v9,
        v6);
    }
    return 0;
  }
}
