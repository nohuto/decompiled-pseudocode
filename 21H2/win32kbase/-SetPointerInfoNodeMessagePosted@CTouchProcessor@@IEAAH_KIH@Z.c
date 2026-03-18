/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C01D6A8C
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C01CE8F0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01CE88C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01DA6D4 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  char v8; // di
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  const struct CPointerMsgData *MsgData; // rax
  int v13; // edx
  int v14; // r8d
  const struct CPointerMsgData *v15; // rsi
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  const struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v19; // rcx
  const struct CPointerInputFrame *v20; // r14
  struct CPointerInfoNode *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ebp
  int v30; // esi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx

  v5 = a3;
  v6 = a2;
  v8 = 1;
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
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      227,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( !(unsigned int)IsPointerInputMessageWithState(v5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  MsgData = CTouchProcessor::GetMsgData(v10, v6, v11);
  v15 = MsgData;
  if ( !MsgData )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v13 && !v8 )
      return 0LL;
    v17 = 228;
LABEL_35:
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v16->AttachedDevice,
      v13,
      v14,
      v16->DeviceExtension,
      5,
      7,
      v17,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
  v20 = FrameById;
  if ( !FrameById )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v13 && !v8 )
      return 0LL;
    v17 = 229;
    goto LABEL_35;
  }
  v22 = CTouchProcessor::LookupNode(v19, FrameById, *((unsigned int *)v15 + 8));
  v25 = *((unsigned __int16 *)v15 + 8);
  v26 = (int *)v22;
  if ( *((_WORD *)v22 + 86) != (_WORD)v25 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v23, v24);
  v27 = *((unsigned int *)v20 + 12);
  if ( v26[2] >= (unsigned int)v27 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v23, v24);
  switch ( v5 )
  {
    case 0x249u:
      v23 = (unsigned int)*v26;
      v28 = (unsigned int)v23;
      if ( (v23 & 8) == 0 && (v23 & 0x40) == 0 && (v26[45] & 1) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v23, v23, v24);
        v28 = (unsigned int)*v26;
      }
      v29 = 0x800000;
      v30 = 0x1000000;
      if ( (v28 & 0x800000) != 0 || (v28 & 0x1000000) != 0 || (v28 & 0x4000000) != 0 || (v28 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v23, v24);
        LODWORD(v28) = *v26;
      }
      v31 = a4 << 24;
LABEL_52:
      v32 = v29 | v28 ^ v30 & (v28 ^ v31);
LABEL_82:
      *v26 = v32;
      goto LABEL_83;
    case 0x24Au:
      v28 = (unsigned int)*v26;
      v29 = 0x8000000;
      v30 = 0x10000000;
      if ( (v28 & 0x8000000) != 0 || (v28 & 0x10000000) != 0 || (v28 & 0x40000000) != 0 || (v28 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v23, v24);
        LODWORD(v28) = *v26;
      }
      v31 = a4 << 28;
      goto LABEL_52;
    case 0x251u:
      v33 = *v26;
      if ( (*v26 & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v23, v24);
        v33 = *v26;
      }
      if ( v33 < 0 || (v27 = (unsigned int)v26[1], (v27 & 1) != 0) || (v27 & 4) != 0 || (v27 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v23, v24);
        v33 = *v26;
        LODWORD(v27) = v26[1];
      }
      *v26 = v33 | 0x80000000;
      v34 = v27 ^ (a4 ^ v27) & 1;
      break;
    case 0x252u:
      v35 = (unsigned int)v26[1];
      if ( (v35 & 8) != 0 || (v35 & 0x10) != 0 || (v35 & 0x40) != 0 || (v35 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v23, v24);
        LODWORD(v35) = v26[1];
      }
      v34 = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(16 * a4)) & 0x10 | 8;
      break;
    default:
      v36 = (unsigned int)*v26;
      if ( (v36 & 0x80000) != 0 || (v36 & 0x400000) != 0 || (v36 & 0x200000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v23, v24);
        LODWORD(v36) = *v26;
      }
      v32 = v36 ^ (v36 ^ (a4 << 20)) & 0x100000 | 0x80000;
      goto LABEL_82;
  }
  v26[1] = v34;
LABEL_83:
  if ( a4 )
    *(_DWORD *)(160LL * (unsigned int)v26[2] + *((_QWORD *)v20 + 31) + 140) |= 8u;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v23) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v24) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v24) = 0;
  }
  if ( (_BYTE)v23 || (_BYTE)v24 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v23,
      v24,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      230,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  return 1LL;
}
