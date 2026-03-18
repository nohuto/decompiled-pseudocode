/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C01D618C
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C01CD380 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C26AC (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01CD2C4 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01DA82C (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  char v8; // di
  CTouchProcessor *v9; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v11; // edx
  int v12; // r8d
  struct CPointerMsgData *v13; // rsi
  PDEVICE_OBJECT v14; // rcx
  const struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v16; // rcx
  const struct CPointerInputFrame *v17; // r14
  int v19; // edx
  struct CPointerInfoNode *v20; // rbx
  int v21; // r8d
  int v22; // eax
  int v23; // ebp
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int16 v31; // [rsp+30h] [rbp-38h]

  v5 = a3;
  v6 = a2;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
      4,
      230,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  if ( !(unsigned int)IsPointerInputMessageWithState(v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7583);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v9, v6);
  v13 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v11 && !v8 )
      return 0LL;
    v31 = 231;
LABEL_35:
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v11,
      v12,
      v14->DeviceExtension,
      5,
      4,
      v31,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v17 = FrameById;
  if ( !FrameById )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v11 && !v8 )
      return 0LL;
    v31 = 232;
    goto LABEL_35;
  }
  v20 = CTouchProcessor::LookupNode(v16, FrameById, *((_DWORD *)v13 + 8));
  if ( *((_WORD *)v20 + 86) != *((_WORD *)v13 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7600);
  if ( *((_DWORD *)v20 + 2) >= *((_DWORD *)v17 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7601);
  switch ( v5 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v20 & 8) == 0 && (*(_DWORD *)v20 & 0x40) == 0 && (*((_DWORD *)v20 + 45) & 1) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7613);
      v22 = *(_DWORD *)v20;
      v23 = 0x800000;
      v24 = 0x1000000;
      if ( (*(_DWORD *)v20 & 0x800000) != 0
        || (v22 & 0x1000000) != 0
        || (v22 & 0x4000000) != 0
        || (v22 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7618);
      }
      v25 = a4 << 24;
LABEL_52:
      v26 = v23 | *(_DWORD *)v20 ^ v24 & (*(_DWORD *)v20 ^ v25);
      goto LABEL_81;
    case 0x24Au:
      v27 = *(_DWORD *)v20;
      v23 = 0x8000000;
      v24 = 0x10000000;
      if ( (*(_DWORD *)v20 & 0x8000000) != 0
        || (v27 & 0x10000000) != 0
        || (v27 & 0x40000000) != 0
        || (v27 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7631);
      }
      v25 = a4 << 28;
      goto LABEL_52;
    case 0x251u:
      if ( (*(_DWORD *)v20 & 0x40) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7638);
      if ( *(int *)v20 < 0 || (v28 = *((_DWORD *)v20 + 1), (v28 & 1) != 0) || (v28 & 4) != 0 || (v28 & 2) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7643);
      *(_DWORD *)v20 |= 0x80000000;
      *((_DWORD *)v20 + 1) ^= (*((_DWORD *)v20 + 1) ^ a4) & 1;
      goto LABEL_82;
    case 0x252u:
      v29 = *((_DWORD *)v20 + 1);
      if ( (v29 & 8) != 0 || (v29 & 0x10) != 0 || (v29 & 0x40) != 0 || (v29 & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7655);
      *((_DWORD *)v20 + 1) = *((_DWORD *)v20 + 1) ^ (*((_DWORD *)v20 + 1) ^ (16 * a4)) & 0x10 | 8;
      goto LABEL_82;
  }
  v30 = *(_DWORD *)v20;
  if ( (*(_DWORD *)v20 & 0x80000) != 0 || (v30 & 0x400000) != 0 || (v30 & 0x200000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7664);
  v26 = *(_DWORD *)v20 ^ (*(_DWORD *)v20 ^ (a4 << 20)) & 0x100000 | 0x80000;
LABEL_81:
  *(_DWORD *)v20 = v26;
LABEL_82:
  if ( a4 )
    *(_DWORD *)(160LL * *((unsigned int *)v20 + 2) + *((_QWORD *)v17 + 31) + 140) |= 8u;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v21) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v21) = 0;
  }
  if ( (_BYTE)v19 || (_BYTE)v21 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v21,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      233,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  return 1LL;
}
