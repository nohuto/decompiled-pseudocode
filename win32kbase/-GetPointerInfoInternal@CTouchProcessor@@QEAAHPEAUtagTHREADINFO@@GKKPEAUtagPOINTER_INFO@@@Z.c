__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  char v7; // r14
  unsigned __int64 ThreadPointerData; // rsi
  int v10; // r8d
  bool v11; // bl
  int v12; // edx
  char v13; // bl
  int v14; // edx
  int v15; // ecx
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0;
  v7 = a3;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        &v19,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 329;
      LOBYTE(v12) = v11;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        329,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
        v7);
    }
LABEL_29:
    v15 = 87;
LABEL_20:
    UserSetLastError(v15);
    return 0LL;
  }
  v13 = 1;
  if ( a4 != 1 && a4 != v19 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v13 = 0;
    }
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 330;
      LOBYTE(v14) = v13;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        330,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v15 = 1629;
    goto LABEL_20;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerData((struct _KTHREAD **)this, ThreadPointerData, a4, a5, a6) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v13 = 0;
    }
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 331;
      LOBYTE(v18) = v13;
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        331,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
        ThreadPointerData);
    }
    goto LABEL_29;
  }
  return 1LL;
}
