__int64 __fastcall xxxCopyDDEOut(struct tagINTDDEINFO *a1, void **a2, __int64 a3, int a4)
{
  void **v4; // r14
  char v6; // di
  __int64 v7; // rsi
  char v8; // dl
  __int64 v10; // [rsp+48h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-28h]

  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = *((_DWORD *)a1 + 4);
    LODWORD(v10) = *((_DWORD *)a1 + 16);
    WPP_RECORDER_AND_TRACE_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, a4);
  }
  v7 = xxxClientCopyDDEOut1(a1, a2, a3);
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0xEu,
      0x3Cu,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 1),
      v7);
  if ( v7 && v4 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
        4u,
        0xEu,
        0x3Du,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
        *((_QWORD *)a1 + 3),
        v10,
        v11);
    *v4 = (void *)*((_QWORD *)a1 + 3);
  }
  return v7;
}
