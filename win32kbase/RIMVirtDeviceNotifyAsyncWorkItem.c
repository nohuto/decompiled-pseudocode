/*
 * XREFs of RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01D09D8
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C000431C (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01A64F8 (RIMIDERemoveInjectionDevice.c)
 */

char __fastcall RIMVirtDeviceNotifyAsyncWorkItem(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rdi
  int v4; // r14d
  bool v5; // dl
  bool v6; // dl
  __int64 v7; // rbx
  bool v8; // dl
  NTSTATUS v9; // eax
  int v10; // edx
  int v11; // r8d
  NTSTATUS v12; // eax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 112);
  v5 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    LODWORD(v1) = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( ((unsigned __int8)v1 & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v5 = 1;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v1) = WPP_RECORDER_AND_TRACE_SF_(
                   WPP_GLOBAL_Control->AttachedDevice,
                   v5,
                   WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                   (_DWORD)gRimLog,
                   4,
                   1,
                   46,
                   (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids);
  v6 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    LODWORD(v1) = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( ((unsigned __int8)v1 & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v6 = 1;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v1) = WPP_RECORDER_AND_TRACE_SF_S(
                   WPP_GLOBAL_Control->AttachedDevice,
                   v6,
                   WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                   (_DWORD)gRimLog,
                   4,
                   1,
                   47,
                   (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
                   *(_QWORD *)(a1 + 48));
  if ( !*(_BYTE *)(v2 + 81) && !*(_BYTE *)(v2 + 80) )
  {
    v7 = *(_QWORD *)(v2 + 424);
    if ( v7 )
    {
      while ( 1 )
      {
        LOBYTE(v1) = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(v7 + 208), 0);
        if ( (_BYTE)v1 )
          break;
        v7 = *(_QWORD *)(v7 + 40);
        if ( !v7 )
          goto LABEL_22;
      }
      v9 = ObReferenceObjectByPointer((PVOID)v2, 3u, ExRawInputManagerObjectType, 1);
      if ( v9 < 0 )
      {
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            (_DWORD)gRimLog,
            4,
            1,
            48,
            (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
            v2,
            v9);
        }
      }
      v12 = ObReferenceObjectByPointer(*(PVOID *)(v7 + 32), 3u, ExRawInputManagerObjectType, 1);
      if ( v12 < 0 )
      {
        LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            (_DWORD)gRimLog,
            4,
            1,
            49,
            (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
            v2,
            v12);
      }
      v16 = *(_DWORD *)(v7 + 184);
      if ( (v16 & 0x2000) != 0 )
      {
        if ( v4 == 3 )
          RIMIDERemoveInjectionDevice(*(_QWORD *)(v7 + 32));
        goto LABEL_55;
      }
      switch ( v4 )
      {
        case 2:
          v17 = v16 | 0x80001;
          break;
        case 3:
          v17 = v16 | 0x100002;
          break;
        case 4:
          v17 = v16 | 0x100008;
          break;
        default:
LABEL_52:
          RIMDoOnPnpNotification(v2, v7, v14, v15);
LABEL_55:
          ObfDereferenceObject(*(PVOID *)(v7 + 32));
          LOBYTE(v1) = ObfDereferenceObject((PVOID)v2);
          return (char)v1;
      }
      *(_DWORD *)(v7 + 184) = v17;
      goto LABEL_52;
    }
  }
LABEL_22:
  v8 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    LODWORD(v1) = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( ((unsigned __int8)v1 & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v8 = 1;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v1) = WPP_RECORDER_AND_TRACE_SF_S(
                   WPP_GLOBAL_Control->AttachedDevice,
                   v8,
                   WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                   (_DWORD)gRimLog,
                   4,
                   1,
                   50,
                   (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
                   *(_QWORD *)(a1 + 48));
  return (char)v1;
}
