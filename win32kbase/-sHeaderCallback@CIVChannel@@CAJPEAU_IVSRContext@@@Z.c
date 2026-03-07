__int64 __fastcall CIVChannel::sHeaderCallback(struct _IVSRContext *a1)
{
  unsigned int *v1; // rsi
  int v3; // r14d
  unsigned int v4; // ebp
  char v5; // bl
  bool v6; // dl
  int v7; // r8d
  void *v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // edi
  int v13; // r8d
  void *v14; // rdx
  __int128 v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+80h] [rbp-28h]

  v1 = (unsigned int *)*((_QWORD *)a1 + 13);
  v16 = *((_OWORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 44);
  v4 = v1[2];
  v18 = *((_QWORD *)a1 + 20);
  v5 = 1;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      33,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
      v3,
      v4,
      v16);
  if ( !isChildPartition() )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = &WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids;
      LOBYTE(v8) = v5;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v8,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        34,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        v3);
    }
LABEL_18:
    KeBugCheck(0x164u);
  }
  v9 = *v1;
  LODWORD(v18) = v4;
  if ( v9 < 4 )
    goto LABEL_18;
  v10 = *((_QWORD *)a1 + 17);
  v11 = *((_QWORD *)a1 + 16);
  v17 = v18;
  v12 = ivrIVRecv(v9, v11, v10, &v16, v3, (__int64)CIVChannel::sPacketCallback);
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = &WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids;
      LOBYTE(v14) = v5;
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v14,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        35,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        v12);
    }
  }
  return (unsigned int)v12;
}
