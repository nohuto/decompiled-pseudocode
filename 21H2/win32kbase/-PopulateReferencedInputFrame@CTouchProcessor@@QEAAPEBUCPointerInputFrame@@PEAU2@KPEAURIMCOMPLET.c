/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CFD24
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01D1E70 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C01D340C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC6E4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C014CDD0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C014CE10 (EtwTraceEndPointerFrameCreation.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01C53AC (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01C562C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE088 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CF4BC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D288C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01D39D4 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01D7360 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01D82D4 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1C01F3934 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01F3EA8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        struct RIMCOMPLETEFRAME *a4)
{
  unsigned int v4; // r14d
  struct CPointerInputFrame *v5; // rdi
  unsigned int v7; // r13d
  char v8; // bp
  __int64 v9; // rax
  unsigned int v10; // esi
  struct CPointerInfoNode *v11; // rbx
  unsigned __int64 v12; // rcx
  int v13; // eax
  struct CPointerInputFrame *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  CPointerInfoNode *v17; // r14
  const struct CPointerInputFrame *v18; // r12
  _DWORD *v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 Queue; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct CPointerQFrame *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct CPointerQFrame *v34; // rbx
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r8
  VirtualTouchpadProcessor *Instance; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // ebx
  __int64 v46; // r8
  int v47; // edx
  struct CPointerInputFrame *v48; // rbx
  int v49; // r8d
  _BYTE v51[128]; // [rsp+40h] [rbp-C8h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = 0;
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
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      39,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v9 = *((unsigned int *)v5 + 12);
  v10 = 0;
  v11 = (struct CPointerInfoNode *)*((_QWORD *)v5 + 30);
  for ( *((_DWORD *)v5 + 56) = 2; v10 < (unsigned int)v9; v11 = (struct CPointerInfoNode *)((char *)v11 + 480) )
  {
    v12 = *((_QWORD *)v5 + 30) + 480 * v9;
    if ( (unsigned __int64)v11 >= v12 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a2, a3);
    v13 = *(_DWORD *)v11;
    if ( (*(_DWORD *)v11 & 0x1000) != 0 )
    {
      InputTraceLogging::Pointer::DropInput();
      v13 = *(_DWORD *)v11;
    }
    if ( (v13 & 0x1000) != 0 || !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, v5, v11, v4) )
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)v5, v10);
    v9 = *((unsigned int *)v5 + 12);
    ++v10;
  }
  *((_DWORD *)v5 + 56) = 4;
  v14 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, v5);
  v16 = *((unsigned int *)v5 + 12);
  v17 = (CPointerInfoNode *)*((_QWORD *)v5 + 30);
  v18 = v14;
  if ( (_DWORD)v16 )
  {
    v19 = (_DWORD *)((char *)v17 + 352);
    do
    {
      v20 = *((_QWORD *)v5 + 30) + 480 * v16;
      if ( (unsigned __int64)v17 >= v20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v20, v15);
      if ( (*(_DWORD *)v17 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v17) )
      {
        v21 = 0LL;
        memset(v51, 0, 113);
        if ( CPointerInfoNode::IsForManipulationThread(v17) )
        {
          v21 = -1LL;
        }
        else if ( *v19 )
        {
          if ( v19[23] )
          {
            v23 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(v19 - 40));
            Queue = CInputDest::GetQueue((__int64)v19, 2, v22);
            v26 = *(_QWORD *)(v23 + 16);
            if ( Queue != *(_QWORD *)(v26 + 432) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v22);
          }
          v21 = CInputDest::GetQueue((__int64)v19, 2, v22);
          CInputDest::operator=((__int64)v51, (__int64)v19);
          if ( !v21 && *v19 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
        }
        v30 = CTouchProcessor::SetupQFrame(
                (CTouchProcessor *)(v18 != 0LL),
                v5,
                v21,
                (const struct CInputDest *)v51,
                v18 != 0LL);
        v34 = v30;
        if ( !v18 )
        {
          v32 = *((unsigned int *)v30 + 35);
          if ( (v32 & 2) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
        }
        v35 = *(_DWORD *)v34;
        if ( *(_DWORD *)v34 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
          v35 = *(_DWORD *)v34;
        }
        *(v19 - 86) = v35;
        ++*((_DWORD *)v34 + 34);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v34, v18, v17);
        CInputDest::SetEmpty((CInputDest *)v51);
      }
      v16 = *((unsigned int *)v5 + 12);
      v17 = (CPointerInfoNode *)((char *)v17 + 480);
      v19 += 120;
      ++v7;
    }
    while ( v7 < (unsigned int)v16 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v5, v18, 0LL);
  EtwTraceEndPointerFrameCommit(*((unsigned int *)v5 + 10), *((_DWORD *)v5 + 12), v36);
  EtwTraceEndPointerFrameCreation(*((unsigned int *)v5 + 10), *((_DWORD *)v5 + 12), 0LL);
  if ( v18 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v18, v37);
  Instance = VirtualTouchpadProcessor::GetInstance(0);
  if ( Instance )
    VirtualTouchpadProcessor::ProcessInput(Instance, v5);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v40, (__int64)v5, v41) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44);
  v45 = *((_DWORD *)v5 + 10);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v5, v44);
  v48 = CTouchProcessor::FindAndReferenceFrameById(this, v45, v46);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v47) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v47) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)v47 || v8 )
  {
    LOBYTE(v49) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v47,
      v49,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      40,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  return v48;
}
