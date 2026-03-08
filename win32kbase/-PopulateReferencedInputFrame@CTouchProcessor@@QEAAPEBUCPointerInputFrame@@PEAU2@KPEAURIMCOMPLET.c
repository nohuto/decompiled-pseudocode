/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FD690
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FF664 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C0200F80 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2CB2 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C0162380 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C01623C0 (EtwTraceEndPointerFrameCreation.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01F1224 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F2C24 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01FCDE4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0200228 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z @ 0x1C0200A24 (-ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0201654 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0205B10 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0206D08 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1C0224BB8 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0225260 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        struct RIMCOMPLETEFRAME *a4)
{
  unsigned int v4; // r14d
  struct CPointerInputFrame *v5; // rdi
  unsigned int v7; // r13d
  char v8; // si
  __int64 v9; // rax
  signed __int32 *v10; // rbx
  unsigned int v11; // ebp
  struct CPointerInputFrame *v12; // rax
  __int64 v13; // rcx
  CPointerInfoNode *v14; // r14
  const struct CPointerInputFrame *v15; // r15
  _DWORD *v16; // rbp
  unsigned __int64 Queue; // rbx
  int v18; // edx
  CTouchProcessor *v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  struct CPointerQFrame *v22; // rax
  struct CPointerQFrame *v23; // rbx
  __int64 v24; // r8
  VirtualTouchpadProcessor *Instance; // rax
  int v26; // edx
  struct CPointerInputFrame *v27; // rbx
  int v28; // r8d
  _BYTE v30[128]; // [rsp+60h] [rbp-C8h] BYREF

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
      43,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v9 = *((unsigned int *)v5 + 12);
  v10 = (signed __int32 *)*((_QWORD *)v5 + 30);
  v11 = 0;
  for ( *((_DWORD *)v5 + 56) = 2; v11 < (unsigned int)v9; v10 += 120 )
  {
    if ( (unsigned __int64)v10 >= *((_QWORD *)v5 + 30) + 480 * v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1204);
    if ( _bittest(v10, 0xCu) )
      InputTraceLogging::Pointer::DropInput();
    if ( _bittest(v10, 0xCu)
      || !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, v5, (struct CPointerInfoNode *)v10, v4) )
    {
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)v5, v11);
    }
    v9 = *((unsigned int *)v5 + 12);
    ++v11;
  }
  *((_DWORD *)v5 + 56) = 4;
  v12 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, v5);
  v13 = *((unsigned int *)v5 + 12);
  v14 = (CPointerInfoNode *)*((_QWORD *)v5 + 30);
  v15 = v12;
  if ( (_DWORD)v13 )
  {
    v16 = (_DWORD *)((char *)v14 + 352);
    Queue = 0LL;
    do
    {
      if ( (unsigned __int64)v14 >= *((_QWORD *)v5 + 30) + 480 * v13 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1238);
      if ( (*(_DWORD *)v14 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v14) )
      {
        memset(v30, 0, 113);
        if ( CPointerInfoNode::IsForManipulationThread(v14) )
        {
          Queue = -1LL;
        }
        else if ( *v16 != v18 )
        {
          if ( v16[23] != v18 )
          {
            v20 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(v16 - 40));
            if ( CInputDest::GetQueue((__int64)v16, 2) != *(_QWORD *)(*(_QWORD *)(v20 + 16) + 432LL) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1258);
          }
          Queue = CInputDest::GetQueue((__int64)v16, 2);
          CInputDest::operator=((__int64)v30, (__int64)v16);
          v18 = 0;
          if ( !Queue && *v16 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1263);
            v18 = 0;
          }
        }
        v21 = v18;
        LOBYTE(v21) = v15 != 0LL;
        v22 = CTouchProcessor::SetupQFrame(v19, v5, Queue, (const struct CInputDest *)v30, v21);
        v23 = v22;
        if ( !v15 && (*((_DWORD *)v22 + 35) & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1270);
        if ( *(_DWORD *)v23 == -1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1272);
        *(v16 - 86) = *(_DWORD *)v23;
        ++*((_DWORD *)v23 + 34);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v23, v15, v14);
        CInputDest::SetEmpty((CInputDest *)v30);
        Queue = 0LL;
      }
      v13 = *((unsigned int *)v5 + 12);
      v14 = (CPointerInfoNode *)((char *)v14 + 480);
      v16 += 120;
      ++v7;
    }
    while ( v7 < (unsigned int)v13 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v5, v15, 0LL);
  EtwTraceEndPointerFrameCommit(*((unsigned int *)v5 + 10), *((_DWORD *)v5 + 12), v24);
  EtwTraceEndPointerFrameCreation(*((unsigned int *)v5 + 10), *((_DWORD *)v5 + 12), 0LL);
  if ( v15 )
    CTouchProcessor::UnreferenceFrameInt(this, v15);
  Instance = VirtualTouchpadProcessor::GetInstance(0);
  if ( Instance )
    VirtualTouchpadProcessor::ProcessInput(Instance, v5);
  v27 = CTouchProcessor::ReReferenceFrameInt((CTouchProcessor *)this, v5);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v26) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)v26 || v8 )
  {
    LOBYTE(v28) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v28,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      44,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  return v27;
}
