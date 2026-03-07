void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // r14
  unsigned __int64 v7; // r12
  const struct CPointerInfoNode *v8; // r15
  char v10; // di
  int v11; // edx
  CTouchProcessor *v12; // rcx
  int v13; // r8d
  int v14; // eax
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // ax
  int v17; // esi
  unsigned int *NonConstMsgData; // rbx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  int v21; // eax
  _QWORD *v22; // rax
  int v23; // ebx
  CInputDest *v24; // rax
  unsigned int v25; // ebx
  char v26; // r14
  _QWORD *v27; // rax
  CInputDest *v28; // rax
  int v29; // [rsp+20h] [rbp-E0h]
  __int64 *v31[14]; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+C0h] [rbp-40h]
  __int64 v33[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34[16]; // [rsp+150h] [rbp+50h] BYREF

  v6 = 0;
  v7 = a3;
  v8 = a2;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      199,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  memset(v31, 0, sizeof(v31));
  v14 = *((_DWORD *)v8 + 45);
  v32 = 0;
  if ( (v14 & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        200,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v16 = 201;
LABEL_86:
      LOBYTE(v13) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v15->AttachedDevice,
        v11,
        v13,
        v15->DeviceExtension,
        5,
        7,
        v16,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  else if ( v7 )
  {
    v17 = 0;
    NonConstMsgData = (unsigned int *)CTouchProcessor::GetNonConstMsgData(v12, v7);
    v19 = CTouchProcessor::ReferenceFrame(this, NonConstMsgData[7]);
    if ( !v19 )
      goto LABEL_88;
    v20 = (_DWORD *)(*(_QWORD *)(v19 + 240) + 480LL * NonConstMsgData[8]);
    if ( (*v20 & 0x80u) == 0 )
    {
      v17 = 1;
      *v20 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame(this, v19);
    if ( v17 )
    {
      v21 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x1000) == 0 )
      {
        if ( (v21 & 8) != 0 )
        {
          if ( (v21 & 0x400) != 0 )
          {
            v22 = CInputDest::CInputDest(v33, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
            v6 = 1;
          }
          else
          {
            v22 = CInputDest::CInputDest((CInputDest *)v34, (__int64 **)v8 + 3);
            v6 = 2;
          }
          CInputDest::operator=((__int64)v31, v22);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::SetEmpty((CInputDest *)v34);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v33);
          }
          v23 = -__CFSHR__(*(_DWORD *)v8, 7);
          v24 = CInputDest::CInputDest((CInputDest *)v33, v31);
          v29 = v23;
          v25 = a4;
          CTouchProcessor::GenerateWindowLeaveMessage((__int64)this, v7, v24, a4, v29, a5, a6);
        }
        else
        {
          v25 = a4;
        }
        if ( (*(_DWORD *)v8 & 0x40) != 0 )
        {
          if ( (*(_DWORD *)v8 & 0x400) != 0
            && *((_DWORD *)v8 + 111)
            && !CInputDest::IsEqualByWindowHandle((__int64)v8 + 352, *((_QWORD *)v8 + 24), 0) )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7057);
          }
          if ( (*(_DWORD *)v8 & 0x400) != 0 )
          {
            v26 = v6 | 4;
            v27 = CInputDest::CInputDest(v34, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
          }
          else
          {
            v26 = v6 | 8;
            v27 = CInputDest::CInputDest((CInputDest *)v33, (__int64 **)v8 + 3);
          }
          CInputDest::operator=((__int64)v31, v27);
          if ( (v26 & 8) != 0 )
            CInputDest::SetEmpty((CInputDest *)v33);
          if ( (v26 & 4) != 0 )
            CInputDest::SetEmpty((CInputDest *)v34);
          v28 = CInputDest::CInputDest((CInputDest *)v33, v31);
          CTouchProcessor::GenerateRoutedAwayMessages(this, v7, v28, v25, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, v7, 1LL);
    }
    else
    {
LABEL_88:
      if ( (NonConstMsgData[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7080);
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v16 = 204;
      goto LABEL_86;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        202,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v16 = 203;
      goto LABEL_86;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v31);
}
