/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0198498
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0199CEC (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C019AE10 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C0030680 (_HMObjectFromHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00444AC (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCE40 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD1DC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C01220B0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C01220F0 (EtwTraceEndPointerFrameCreation.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018E068 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0196890 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197CF8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019A464 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z @ 0x1C019AAB0 (-ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019B180 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019BA98 (-Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C019EB0C (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019F42C (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        struct RIMCOMPLETEFRAME *a4)
{
  int v7; // edx
  unsigned int v8; // r12d
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // esi
  struct CPointerInfoNode *i; // rbx
  __int64 v13; // rax
  unsigned int v14; // esi
  struct CPointerInfoNode *j; // rbx
  struct tagCHitTestState *v16; // r9
  struct CPointerInputFrame *v17; // rax
  __int64 v18; // rcx
  CPointerInfoNode *v19; // rsi
  const struct CPointerInputFrame *v20; // r15
  _DWORD *v21; // r14
  unsigned __int64 Queue; // rbx
  __int64 v23; // rbx
  struct CPointerQFrame *v24; // rax
  struct CPointerQFrame *v25; // rbx
  int v26; // eax
  int v27; // r8d
  int v28; // edx
  struct CPointerInputFrame *v29; // rbx
  _DWORD v31[28]; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C1h] [rbp-3Fh]
  __int16 v34; // [rsp+C5h] [rbp-3Bh]
  char v35; // [rsp+C7h] [rbp-39h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  _BYTE v37[128]; // [rsp+D0h] [rbp-30h] BYREF

  v33 = 0;
  v34 = 0;
  v35 = 0;
  memset(v31, 0, sizeof(v31));
  v8 = 0;
  v32 = 0;
  v36 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      41,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v9 = *((_DWORD *)a2 + 31);
  *((_DWORD *)a2 + 30) = 2;
  if ( (v9 & 0x80u) != 0 )
  {
    v10 = *((unsigned int *)a2 + 12);
    v11 = 0;
    for ( i = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
          v11 < (unsigned int)v10;
          i = (struct CPointerInfoNode *)((char *)i + 480) )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)a2 + 17) + 480 * v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1033);
      tagCHitTestState::Set((tagCHitTestState *)v31, i);
      if ( v31[0] )
        break;
      v10 = *((unsigned int *)a2 + 12);
      ++v11;
    }
  }
  v13 = *((unsigned int *)a2 + 12);
  v14 = 0;
  for ( j = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
        v14 < (unsigned int)v13;
        j = (struct CPointerInfoNode *)((char *)j + 480) )
  {
    if ( (unsigned __int64)j >= *((_QWORD *)a2 + 17) + 480 * v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1051);
    if ( (*(_DWORD *)j & 0x1000) != 0 )
    {
      InputTraceLogging::Pointer::DropInput();
      if ( (*(_DWORD *)j & 0x1000) != 0 )
        goto LABEL_21;
    }
    v16 = (struct tagCHitTestState *)v31;
    if ( !v31[0] )
      v16 = 0LL;
    if ( !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, a2, j, v16, a3) )
    {
LABEL_21:
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v14);
    }
    else if ( (*((_DWORD *)a2 + 31) & 0x80u) != 0 && !v31[0] )
    {
      tagCHitTestState::Set((tagCHitTestState *)v31, j);
    }
    v13 = *((unsigned int *)a2 + 12);
    ++v14;
  }
  *((_DWORD *)a2 + 30) = 4;
  v17 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v18 = *((unsigned int *)a2 + 12);
  v19 = (CPointerInfoNode *)*((_QWORD *)a2 + 17);
  v20 = v17;
  if ( (_DWORD)v18 )
  {
    v21 = (_DWORD *)((char *)v19 + 352);
    do
    {
      if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 17) + 480 * v18 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1091);
      if ( (*(_DWORD *)v19 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v19) )
      {
        memset(v37, 0, 113);
        if ( CPointerInfoNode::IsForManipulationThread(v19) )
        {
          Queue = -1LL;
        }
        else
        {
          if ( v21[23] )
          {
            v23 = *(_QWORD *)(HMObjectFromHandle(*((_QWORD *)v21 - 20)) + 16);
            if ( CInputDest::GetQueue((CInputDest *)v21, 2) != *(_QWORD *)(v23 + 432) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1110);
          }
          Queue = CInputDest::GetQueue((CInputDest *)v21, 2);
          CInputDest::operator=((__int64)v37, (__int64)v21);
          if ( !Queue )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1115);
        }
        v24 = CTouchProcessor::SetupQFrame(0LL, a2, Queue, (const struct CInputDest *)v37, v20 != 0LL);
        v25 = v24;
        if ( !v20 && (*((_DWORD *)v24 + 35) & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1122);
        v26 = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1124);
          v26 = *(_DWORD *)v25;
        }
        *(v21 - 86) = v26;
        ++*((_DWORD *)v25 + 34);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v25, v20, v19);
        CInputDest::SetEmpty((CInputDest *)v37);
      }
      v18 = *((unsigned int *)a2 + 12);
      v19 = (CPointerInfoNode *)((char *)v19 + 480);
      v21 += 120;
      ++v8;
    }
    while ( v8 < (unsigned int)v18 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a2, v20, 0LL);
  EtwTraceEndPointerFrameCommit(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), v27);
  EtwTraceEndPointerFrameCreation(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 0);
  if ( v20 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v20);
  v29 = CTouchProcessor::ReReferenceFrameInt((CTouchProcessor *)this, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v28) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v28,
      7,
      42,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInputDest::SetEmpty((CInputDest *)v31);
  return v29;
}
