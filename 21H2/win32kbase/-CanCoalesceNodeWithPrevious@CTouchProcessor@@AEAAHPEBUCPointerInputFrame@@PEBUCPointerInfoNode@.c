/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BEA8C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01C0DD4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D288C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00CFE9C (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B8A54 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C59E8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01CD644 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C0208DB8 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  const struct CPointerInfoNode *v6; // r15
  const struct CPointerInputFrame *v7; // r12
  PDEVICE_OBJECT v9; // rcx
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v19; // rcx
  __int64 *v20; // rsi
  __int64 v21; // r14
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  CInputDest *Queue; // rax
  int v26; // edx
  int v27; // r8d
  PDEVICE_OBJECT v28; // rcx
  __int16 v29; // ax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r9d
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  struct tagQMSG *v39; // [rsp+48h] [rbp-B8h]
  _OWORD v40[7]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v41[8]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a2;
  v39 = a4;
  v9 = WPP_GLOBAL_Control;
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
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      243,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v38 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
  if ( *((_DWORD *)a5 + 27) )
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(v6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( !*((_QWORD *)v6 + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v14, (__int64)v7, v15) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, a2, a3);
    v17 = *(_DWORD *)v6;
    if ( (*(_DWORD *)v6 & 1) == 0 )
    {
      *(_DWORD *)a6 = 2;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          246,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 247;
      goto LABEL_296;
    }
    if ( (v17 & 8) != 0 || (v17 & 0x10) != 0 || (v17 & 0x40) != 0 || (v17 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          248,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 249;
      goto LABEL_296;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, v7, *((_WORD *)v6 + 86), 0LL);
    v20 = (__int64 *)ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          250,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 251;
      goto LABEL_296;
    }
    v21 = *((_QWORD *)v7 + 31) + 160LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 19) )
      *((_QWORD *)a5 + 19) = v21;
    v22 = *(_DWORD *)(v21 + 140);
    if ( (v22 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          252,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 253;
      goto LABEL_296;
    }
    if ( (v22 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          254,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 255;
      goto LABEL_296;
    }
    if ( (*(_DWORD *)v20 & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, a2, a3);
    v23 = *(_DWORD *)v6;
    if ( (*(_DWORD *)v6 & 0x800000) != 0
      || (v23 & 0x8000000) != 0
      || v23 < 0
      || (*((_DWORD *)v6 + 1) & 8) != 0
      || (v24 = *(unsigned int *)v20, (v24 & 0x800000) != 0)
      || (v24 & 0x8000000) != 0
      || (v24 & 0x80000000) != 0
      || (*((_DWORD *)v20 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          256,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 257;
      goto LABEL_296;
    }
    if ( (v24 & 0x100000) != 0 && (v24 & 0x400000) == 0 )
    {
      if ( (v24 & 0x200000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, a2, a3);
      *(_DWORD *)a6 = 21;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          258,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 259;
      goto LABEL_296;
    }
    if ( *((_DWORD *)v20 + 45) != *((_DWORD *)v6 + 45) )
    {
      *(_DWORD *)a6 = 5;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          260,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 261;
      goto LABEL_296;
    }
    if ( *((_DWORD *)v20 + 59) == 100 )
    {
      *(_DWORD *)a6 = 6;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          262,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)a2 && !(_BYTE)v10 )
        return 0LL;
      v12 = 263;
      goto LABEL_296;
    }
    CInputDest::CInputDest(v41, *((_QWORD *)v6 + 24), *((_DWORD *)v6 + 111), 1);
    Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v20, &v38);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v41) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v41, (const struct CInputDest *)(v21 + 16)) )
      {
        if ( *((_QWORD *)a5 + 19) == v21 )
        {
          v30 = v20[2];
          v31 = *((_DWORD *)v6 + 42);
          v32 = *((_DWORD *)v6 + 44);
          v33 = *((_DWORD *)v7 + 10);
          v40[0] = v41[0];
          v40[2] = v41[2];
          v40[1] = v41[1];
          v40[4] = v41[4];
          v40[3] = v41[3];
          v40[6] = v41[6];
          v40[5] = v41[5];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v40,
                               (_DWORD)v39,
                               v33,
                               v32,
                               v30,
                               v31) )
          {
            if ( *(_DWORD *)a6 != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
              || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v34) = 0;
            }
            if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v34,
                v36,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                7,
                270,
                (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
              || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              LOBYTE(v34) = 0;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              || (LOBYTE(v36) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v36) = 0;
            }
            if ( (_BYTE)v34 || (_BYTE)v36 )
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v34,
                v36,
                WPP_GLOBAL_Control->DeviceExtension,
                5,
                7,
                271,
                (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
            goto LABEL_261;
          }
          *(_DWORD *)a6 = 7;
LABEL_260:
          v10 = 0;
LABEL_261:
          CInputDest::SetEmpty((CInputDest *)v41);
          return v10;
        }
        *(_DWORD *)a6 = 4;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v26,
            v27,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            7,
            268,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
        v28 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v10) = 0;
        }
        if ( !(_BYTE)v26 && !(_BYTE)v10 )
          goto LABEL_260;
        v29 = 269;
      }
      else
      {
        *(_DWORD *)a6 = 4;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v26,
            v27,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            7,
            266,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
        v28 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v10) = 0;
        }
        if ( !(_BYTE)v26 && !(_BYTE)v10 )
          goto LABEL_260;
        v29 = 267;
      }
    }
    else
    {
      *(_DWORD *)a6 = 4;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          264,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v10) = 0;
      if ( !(_BYTE)v26 && !(_BYTE)v10 )
        goto LABEL_260;
      v29 = 265;
    }
    LOBYTE(v27) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v28->AttachedDevice,
      v26,
      v27,
      v28->DeviceExtension,
      5,
      7,
      v29,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    goto LABEL_260;
  }
  *(_DWORD *)a6 = 23;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      7,
      244,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v10) = 0;
  if ( !(_BYTE)a2 && !(_BYTE)v10 )
    return 0LL;
  v12 = 245;
LABEL_296:
  LOBYTE(a3) = v10;
  WPP_RECORDER_AND_TRACE_SF_(
    v11->AttachedDevice,
    (_DWORD)a2,
    (_DWORD)a3,
    v11->DeviceExtension,
    5,
    7,
    v12,
    (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  return 0LL;
}
