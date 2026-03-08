/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01EB57C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     IsPTPIVEnabled @ 0x1C008B994 (IsPTPIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C008B9C0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C008B9EC (IsTouchIVEnabled.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01E3794 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01E37B8 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1C01E37DC (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0205FD8 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C0206B68 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C020DE90 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C0227C1C (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ApiSetGetLatestInputTransform @ 0x1C0244570 (ApiSetGetLatestInputTransform.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4)
{
  int v5; // ebx
  char v6; // al
  CTouchProcessor *v7; // rcx
  unsigned int v8; // r15d
  const struct CPointerInfoNode *v9; // rsi
  unsigned int v10; // r12d
  int v11; // r13d
  CInputDest *v12; // rdi
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // r12d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rcx
  unsigned int v27; // r13d
  int v28; // eax
  unsigned __int64 v29; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v30; // rsi
  int v31; // eax
  size_t v32; // r15
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned int v35; // edx
  __int64 v36; // r10
  __int64 v37; // r11
  char v38; // r12
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rdx
  bool v42; // cf
  __int64 i; // rax
  __int64 v44; // r9
  __int64 v45; // r8
  int v46; // ecx
  int v48; // eax
  __int64 v49; // r10
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  HWND ContainerHwndDest; // rax
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // r8
  int v56; // r8d
  struct DEVICEINFO *v57; // rax
  struct CPTPProcessor *Processor; // rax
  int v59; // edx
  PDEVICE_OBJECT v60; // rcx
  int v61; // edx
  __int16 v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+50h] [rbp-B0h]
  unsigned int v64; // [rsp+58h] [rbp-A8h] BYREF
  int v65[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 WindowHandle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  struct tagRIMPOINTERINFONODE *v68[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v69[2]; // [rsp+98h] [rbp-68h] BYREF
  int v70; // [rsp+A8h] [rbp-58h]
  int v71; // [rsp+ACh] [rbp-54h]
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v73[15]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v74[64]; // [rsp+240h] [rbp+140h] BYREF

  v65[0] = a4;
  v64 = a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16063);
  v5 = *(_DWORD *)(*((_QWORD *)a2 + 30) + 168LL);
  if ( v5 == 2 )
  {
    v6 = IsTouchIVEnabled();
  }
  else
  {
    if ( v5 == 3 && IsPenIVEnabled() )
      goto LABEL_6;
    if ( v5 != 5 )
      return;
    v6 = IsPTPIVEnabled();
  }
  if ( !v6 )
    return;
LABEL_6:
  v8 = 0;
  v9 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v10 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v11 = v65[0];
    v12 = (const struct CPointerInfoNode *)((char *)v9 + 352);
    v13 = 1;
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v7, a2, v9, v11) && CInputDest::GetContainerInfo(v12) )
      {
        ++v8;
        v7 = (CTouchProcessor *)(unsigned int)*CInputDest::GetContainerId(v12);
        *(_DWORD *)v9 |= 0x1000u;
        *((_DWORD *)v12 - 87) |= 0x2000u;
        *((_DWORD *)v12 + 30) = (_DWORD)v7;
      }
      ++v10;
      v9 = (const struct CPointerInfoNode *)((char *)v9 + 480);
      v12 = (CInputDest *)((char *)v12 + 480);
    }
    while ( v10 < *((_DWORD *)a2 + 12) );
    if ( v8 )
    {
      memset(v73, 0, sizeof(v73));
      v14 = *((unsigned int *)a2 + 14);
      if ( *((void **)a2 + 8) != TouchExtensibility::hDeviceUser )
      {
        v15 = *(_QWORD *)(*((_QWORD *)a2 + 32) + 16LL);
        if ( v64 )
          v16 = *(_QWORD *)(v15 + 24);
        else
          v16 = *(_QWORD *)(v15 + 16);
        *(_QWORD *)&v73[2] = v16;
      }
      LODWORD(v17) = 128;
      v18 = *(_OWORD *)((char *)a2 + 88);
      v73[3] = *(_OWORD *)((char *)a2 + 72);
      v19 = *(_OWORD *)((char *)a2 + 104);
      v20 = 24 * (v14 + 10);
      v73[4] = v18;
      v63 = v20;
      v21 = *(_OWORD *)((char *)a2 + 120);
      v73[5] = v19;
      v22 = *(_OWORD *)((char *)a2 + 136);
      v73[6] = v21;
      v23 = *(_OWORD *)((char *)a2 + 152);
      v73[7] = v22;
      v24 = *(_OWORD *)((char *)a2 + 168);
      v73[8] = v23;
      v25 = *(_OWORD *)((char *)a2 + 200);
      v73[9] = v24;
      v73[10] = *(_OWORD *)((char *)a2 + 184);
      v73[11] = v25;
      v26 = *((_QWORD *)a2 + 29);
      LODWORD(v73[12]) = v64;
      v27 = 0;
      *(_QWORD *)((char *)&v73[12] + 4) = 0LL;
      *(_QWORD *)&v73[13] = 0LL;
      HIDWORD(v73[1]) = v14;
      *(_QWORD *)&v73[14] = 0LL;
      if ( (_DWORD)v14 )
      {
        v17 = v14;
        do
        {
          v28 = *(_DWORD *)(v26 + 8);
          v26 = *(_QWORD *)(v26 + 24);
          v20 += (v28 + 7) & 0xFFFFFFF8;
          --v17;
        }
        while ( v17 );
        v63 = v20;
      }
      v29 = 192LL * v8;
      if ( v29 <= 0xFFFFFFFF )
      {
        v30 = gpLeakTrackingAllocator;
        v64 = 1852855881;
        v67 = 260LL;
        v31 = *(_DWORD *)gpLeakTrackingAllocator;
        v32 = (unsigned int)v29;
        *(_QWORD *)v65 = (unsigned int)v29;
        if ( v31 )
        {
          if ( v31 != 1 )
          {
            if ( v31 != 2 )
              goto LABEL_80;
            WindowHandle = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                    gpLeakTrackingAllocator,
                    1852855881,
                    &WindowHandle) )
            {
              v68[0] = (struct tagRIMPOINTERINFONODE *)&v67;
              v68[1] = (struct tagRIMPOINTERINFONODE *)&v64;
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                 (__int64)v30,
                                                                                                 (__int64)v68,
                                                                                                 v65);
              goto LABEL_47;
            }
            v38 = 0;
            if ( v32 < 0x1000 || (v32 & 0xFFF) != 0 )
            {
              v36 += 16LL;
              v38 = 1;
              *(_QWORD *)v65 = v36;
            }
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               v37,
                                                                                               v36,
                                                                                               v35);
            if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              goto LABEL_80;
            _InterlockedAdd64((volatile signed __int64 *)v30 + 16, 1uLL);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( v38
              && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
               + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v30,
                     (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                     WindowHandle,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                goto LABEL_47;
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v30,
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                        WindowHandle,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              goto LABEL_50;
            }
            _InterlockedAdd64((volatile signed __int64 *)v30 + 17, 1uLL);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            goto LABEL_80;
          }
          if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E705649u)
            || v32 + 16 < v32 )
          {
            goto LABEL_80;
          }
          Pool2 = (_QWORD *)ExAllocatePool2(v67 & 0xFFFFFFFFFFFFFFFDuLL, v32 + 16, v64);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
          if ( !Pool2
            || (_InterlockedAdd64((volatile signed __int64 *)v30 + 14, 1uLL),
                *Pool2 = 1852855881LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
                Pool2 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v30 + 1),
              0x6E705649uLL);
          }
        }
        else
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                             260LL,
                                                                                             (unsigned int)v29,
                                                                                             1852855881LL);
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            _InterlockedAdd64((volatile signed __int64 *)v30 + 14, 1uLL);
        }
LABEL_47:
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
LABEL_80:
          v60 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v13 = 0;
          }
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v61 = 342;
LABEL_94:
          v62 = v61;
          LOBYTE(v61) = v13;
          WPP_RECORDER_AND_TRACE_SF_(
            v60->AttachedDevice,
            v61,
            v17,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            7,
            v62,
            (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
          return;
        }
LABEL_50:
        if ( *((_DWORD *)a2 + 12) )
        {
          v39 = *((_QWORD *)a2 + 30) + 4LL;
          do
          {
            if ( (*(_DWORD *)v39 & 0x2000) != 0 && (*(_DWORD *)v39 & 0x4000) == 0 )
            {
              v40 = 0LL;
              memset((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, 0, v32);
              v42 = v27 < *((_DWORD *)a2 + 12);
              for ( i = v27; ; v42 = (unsigned int)i < *((_DWORD *)a2 + 12) )
              {
                v65[0] = i;
                if ( !v42 )
                {
                  v71 = 0;
                  DWORD2(v73[1]) = v40;
                  LODWORD(v73[0]) = 192 * v40 + v63;
                  v69[0] = v73;
                  *((_QWORD *)&v73[14] + 1) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                  v63 = v73[0];
                  v70 = *(_DWORD *)(v39 + 468);
                  v69[1] = a2;
                  IVRootDeliver::Pointer::SendTouchInput(
                    (IVRootDeliver::Pointer *)v69,
                    (struct CContainerPointerInput *)v41);
                  if ( (*(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 28) & 0x10000) != 0 )
                  {
                    v57 = (struct DEVICEINFO *)HMValidateHandleNoSecure(
                                                 *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                           + 32),
                                                 19);
                    Processor = CPTPProcessorFactory::GetProcessor(v57);
                    if ( Processor )
                    {
                      *((_DWORD *)Processor + 95) |= 2u;
                      *((_DWORD *)Processor + 94) = v70;
                    }
                  }
                  break;
                }
                v44 = *((_QWORD *)a2 + 30);
                v45 = 480 * i;
                v46 = *(_DWORD *)(480 * i + v44 + 4);
                if ( (v46 & 0x2000) != 0 )
                {
                  v41 = 0x4000LL;
                  if ( (v46 & 0x4000) == 0
                    && *(_WORD *)(v39 + 468) == *(_WORD *)(v45 + v44 + 472)
                    && *(_WORD *)(v39 + 470) == *(_WORD *)(v45 + v44 + 474) )
                  {
                    v48 = *(_DWORD *)(v45 + v44 + 156);
                    *(_DWORD *)(v45 + v44 + 4) = v46 | 0x4000;
                    v49 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 192 * v40;
                    v68[0] = (struct tagRIMPOINTERINFONODE *)v49;
                    *(_DWORD *)v49 = v48;
                    v50 = (_OWORD *)(v45 + v44 + 160);
                    *(_OWORD *)(v49 + 8) = *v50;
                    *(_OWORD *)(v49 + 24) = v50[1];
                    *(_OWORD *)(v49 + 40) = v50[2];
                    *(_OWORD *)(v49 + 56) = v50[3];
                    *(_OWORD *)(v49 + 72) = v50[4];
                    *(_OWORD *)(v49 + 88) = v50[5];
                    *(_OWORD *)(v49 + 104) = v50[6];
                    v51 = v50[7];
                    v50 += 8;
                    *(_OWORD *)(v49 + 120) = v51;
                    *(_OWORD *)(v49 + 136) = *v50;
                    *(_OWORD *)(v49 + 152) = v50[1];
                    *(_OWORD *)(v49 + 168) = v50[2];
                    *(_QWORD *)(v49 + 184) = *((_QWORD *)v50 + 6);
                    *(_DWORD *)(v49 + 28) &= 0xFF87FFFE;
                    ContainerHwndDest = CInputDest::GetContainerHwndDest((CInputDest *)(v39 + 348));
                    *(_QWORD *)(v54 + 40) = ContainerHwndDest;
                    WindowHandle = (unsigned __int64)CInputDest::GetWindowHandle((CInputDest *)(v55 + v53 + 352));
                    memset(v74, 0, sizeof(v74));
                    if ( !(unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v74)
                      || !CTouchProcessor::TransformPointerCoordinates((const struct tagINPUT_TRANSFORM *)v74, v68[0]) )
                    {
                      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                      {
                        v13 = 0;
                      }
                      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v59 = 343;
                        LOBYTE(v59) = v13;
                        LOBYTE(v56) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                        WPP_RECORDER_AND_TRACE_SF_q(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v59,
                          v56,
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          2,
                          7,
                          343,
                          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
                          WindowHandle);
                      }
                      return;
                    }
                    v40 = (unsigned int)(v40 + 1);
                  }
                }
                i = (unsigned int)(v65[0] + 1);
              }
            }
            ++v27;
            v39 += 480LL;
          }
          while ( v27 < *((_DWORD *)a2 + 12) );
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          gpLeakTrackingAllocator,
          (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        return;
      }
      v60 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v13 = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v61 = 341;
        goto LABEL_94;
      }
    }
  }
}
