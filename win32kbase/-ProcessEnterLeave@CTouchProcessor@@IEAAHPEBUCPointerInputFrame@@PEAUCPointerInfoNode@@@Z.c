__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v3; // ebx
  struct CPointerInfoNode *v7; // rsi
  int v8; // edx
  int v9; // r8d
  char v10; // di
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  int v17; // eax
  __int64 *v18; // rax
  __int64 *v19; // rax
  int v20; // eax
  PDEVICE_OBJECT v21; // r9
  int v22; // ecx
  __int16 v23; // r10
  bool v24; // cf
  int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+38h] [rbp-C8h]
  int v29[28]; // [rsp+70h] [rbp-90h] BYREF
  char v30; // [rsp+E0h] [rbp-20h]
  _BYTE v31[128]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v32[16]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v33[16]; // [rsp+1F0h] [rbp+F0h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(v31, 0, 113);
  memset(v29, 0, sizeof(v29));
  v30 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      176,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6572);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6573);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6574);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && !*((_DWORD *)a3 + 6) && *((_DWORD *)a3 + 88) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6575);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6582);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          177,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v12 || v10 )
      {
        v15 = 178;
LABEL_91:
        LOBYTE(v13) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          v14->AttachedDevice,
          v12,
          v13,
          v14->DeviceExtension,
          5,
          7,
          v15,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
        goto LABEL_143;
      }
      goto LABEL_143;
    }
LABEL_70:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v19 = CInputDest::CInputDest(v33, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
      CInputDest::operator=((__int64)v31, v19);
      CInputDest::SetEmpty((CInputDest *)v33);
    }
    else
    {
      CInputDest::operator=((__int64)v31, (__int64)a3 + 24);
    }
    if ( CInputDest::operator==(v29, (__int64)v31) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          181,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v12 || v10 )
      {
        v15 = 182;
        goto LABEL_91;
      }
      goto LABEL_143;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        7,
        183,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
      && ((v20 = *((_DWORD *)a3 + 45), (v20 & 4) != 0) || (v20 & 0x40000) != 0)
      && (v20 & 0x10000) == 0 )
    {
      *(_DWORD *)a3 |= 0x40u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x20u;
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_128;
      if ( v7 )
        v22 = -__CFSHR__(*(_DWORD *)v7, 6);
      else
        LOBYTE(v22) = 0;
      v23 = 185;
      v24 = __CFSHR__(*(_DWORD *)a3, 7);
    }
    else
    {
      *(_DWORD *)a3 |= 8u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x10u;
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_128;
      if ( v7 )
        v22 = -__CFSHR__(*(_DWORD *)v7, 5);
      else
        LOBYTE(v22) = 0;
      v23 = 184;
      v24 = __CFSHR__(*(_DWORD *)a3, 4);
    }
    WPP_RECORDER_AND_TRACE_SF_qdqd(
      v21->AttachedDevice,
      v12,
      v13,
      (_DWORD)v21,
      v26,
      v27,
      v23,
      v28,
      (char)a3,
      -v24,
      (char)v7,
      v22);
LABEL_128:
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 2) >= *((_DWORD *)a2 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6722);
      *(_DWORD *)(160LL * *((unsigned int *)v7 + 2) + *((_QWORD *)a2 + 31) + 140) &= ~1u;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v12 || (_BYTE)v13 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        186,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v3 = 1;
    goto LABEL_143;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6592);
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *((_WORD *)a3 + 86), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    v17 = *(_DWORD *)ValidNodeInFrame;
    if ( (v17 & 0x80u) == 0 )
    {
      if ( (v17 & 4) != 0 || (v17 & 0x400) != 0 )
      {
        v18 = CInputDest::CInputDest(v32, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
        CInputDest::operator=((__int64)v29, v18);
        CInputDest::SetEmpty((CInputDest *)v32);
      }
      else
      {
        CInputDest::operator=((__int64)v29, (__int64)v7 + 24);
      }
    }
    else
    {
      v7 = 0LL;
    }
    goto LABEL_70;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_70;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      7,
      179,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
      *((_WORD *)a3 + 86));
  }
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v12 || v10 )
  {
    v15 = 180;
    goto LABEL_91;
  }
LABEL_143:
  CInputDest::SetEmpty((CInputDest *)v29);
  CInputDest::SetEmpty((CInputDest *)v31);
  return v3;
}
