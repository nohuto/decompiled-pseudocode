/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CF4BC
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CFD24 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0034240 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C00E7F24 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E8782 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01BE53C (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01C53AC (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE088 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CEA84 (-NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C01DA700 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0207E2C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetInputTransformOnInput @ 0x1C020E10C (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  char v12; // si
  unsigned __int16 updated; // ax
  int v14; // edx
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  const struct tagPOINTEREVENTINT *v17; // r14
  unsigned int v18; // ecx
  CInputDest *v19; // rax
  int v20; // r14d
  int v21; // r15d
  char v22; // cl
  unsigned int v23; // eax
  int v24; // eax
  int ShouldForegroundActivate; // eax
  char v26; // r14
  int v27; // r15d
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // r11d
  int v32; // eax
  unsigned int v33; // r11d
  __int64 v34; // rdx
  int v35; // edx
  int v36; // r8d
  int v38; // [rsp+28h] [rbp-D8h]
  __int16 v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v41[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v42; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v43; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v44[7]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v45[7]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v46[7]; // [rsp+140h] [rbp+40h] BYREF
  char v47; // [rsp+1B0h] [rbp+B0h]
  _BYTE v48[113]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v49; // [rsp+231h] [rbp+131h]
  __int16 v50; // [rsp+235h] [rbp+135h]
  char v51; // [rsp+237h] [rbp+137h]
  _BYTE v52[128]; // [rsp+240h] [rbp+140h] BYREF

  memset(v46, 0, sizeof(v46));
  v11 = 0;
  v47 = 0;
  v41[0] = 0;
  v42 = 0;
  v43 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( *((_DWORD *)a2 + 56) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      41,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 45) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        42,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        *((_DWORD *)a3 + 43));
    }
    *((_DWORD *)a3 + 43) = 0;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v8 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v10,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        43,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    InputTraceLogging::Pointer::DropInput();
    goto LABEL_125;
  }
  updated = CTouchProcessor::UpdateActivePointer(
              (CTouchProcessor *)this,
              a2,
              a3,
              (struct CInputDest *)v46,
              &v42,
              v41,
              &v43,
              a4,
              *((_WORD *)a3 + 86));
  if ( !updated )
  {
    if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_L(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          44,
          2,
          7,
          44,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
          *((_WORD *)a3 + 80));
      }
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v12 = 0;
    if ( (_BYTE)v14 || v12 )
    {
      v39 = 45;
LABEL_68:
      LOBYTE(v15) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        v16->AttachedDevice,
        v14,
        v15,
        v16->DeviceExtension,
        5,
        7,
        v39,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      goto LABEL_125;
    }
    goto LABEL_125;
  }
  if ( !*((_DWORD *)a3 + 119) )
  {
    if ( !LODWORD(v46[0]) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = (struct CPointerInfoNode *)((char *)a3 + 160);
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_HL(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          updated,
          4,
          v38,
          47,
          v40,
          updated,
          *((_WORD *)a3 + 80));
      }
      else
      {
        v17 = (struct CPointerInfoNode *)((char *)a3 + 160);
      }
      InputTraceLogging::Pointer::NoTargetFound(a2, v17);
    }
    v18 = *(_DWORD *)a3 & 0xFFFFFFFB | (v41[0] >> 2) & 4;
    *(_DWORD *)a3 = v18;
    if ( (v18 & 4) != 0 )
    {
      v49 = 0;
      v50 = 0;
      v51 = 0;
      memset(v48, 0, sizeof(v48));
      v19 = (CInputDest *)v48;
      v20 = 1;
      v21 = 0;
    }
    else
    {
      v19 = CInputDest::CInputDest((CInputDest *)v52, (__int64 **)v46);
      v20 = 0;
      v21 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v19);
    if ( v21 )
      CInputDest::SetEmpty((CInputDest *)v52);
    if ( v20 )
      CInputDest::SetEmpty((CInputDest *)v48);
    *((_DWORD *)a3 + 36) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v46) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    v22 = v41[0];
    if ( SLOBYTE(v41[0]) < 0 && gptiManipulationThread )
    {
      v23 = v43;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 87) = v23;
    }
    if ( (v22 & 0x20) != 0 )
    {
      v24 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 36) = 1;
      *(_DWORD *)a3 = v24;
      if ( (v22 & 0x40) != 0 )
        *(_DWORD *)a3 = v24 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 352, (__int64)v46);
    *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v46);
    *((_DWORD *)a3 + 44) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 59) = 1;
    ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate(a3);
    v26 = v41[0];
    *((_DWORD *)a3 + 84) = ShouldForegroundActivate == 0;
    if ( (v26 & 1) != 0 )
      *((_DWORD *)a3 + 45) |= 1u;
    v27 = *((_DWORD *)a3 + 45);
    v28 = *((_DWORD *)a3 + 42);
    *((_DWORD *)a3 + 45) = v27 & 0x7FE1F7;
    v29 = (unsigned int)(v28 - 2);
    if ( (_DWORD)v29 )
    {
      v29 = (unsigned int)(v29 - 1);
      if ( !(_DWORD)v29 )
      {
        *((_DWORD *)a3 + 66) &= 7u;
        *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_100:
        *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v29, v42, v27 & 0x1F0);
        if ( (v27 & 1) != 0 || (v27 & 0x20000) == 0 || (v32 = 1, (v27 & 2) == 0) )
          v32 = 0;
        v33 = v32 | v31 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v33;
        if ( v42 != v30 )
          *(_DWORD *)a3 = v33 & 0xFFFFFFFE;
        if ( HIDWORD(v46[5]) )
        {
          v44[0] = v46[0];
          v44[2] = v46[2];
          v44[1] = v46[1];
          v44[4] = v46[4];
          v44[3] = v46[3];
          v44[6] = v46[6];
          v44[5] = v46[5];
          if ( ApiSetEditionGetInputDelegate(v44) && (*((_DWORD *)a3 + 1) & 0x100) == 0 )
            *(_DWORD *)a3 |= 0x100000u;
          v26 = v41[0];
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v26 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v34 = *((_QWORD *)a3 + 31);
          v45[0] = v46[0];
          v45[2] = v46[2];
          v45[1] = v46[1];
          v45[4] = v46[4];
          v45[3] = v46[3];
          v45[6] = v46[6];
          v45[5] = v46[5];
          if ( (unsigned int)ApiSetInputTransformOnInput(v45, v34, (char *)a3 + 160) )
            *((_DWORD *)a3 + 45) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, (struct CPointerInfoNode *)((char *)a3 + 160));
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v35) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v35) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v36) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v36) = 0;
        }
        if ( (_BYTE)v35 || (_BYTE)v36 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v35,
            v36,
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            7,
            48,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        v11 = 1;
        goto LABEL_125;
      }
      if ( (_DWORD)v29 != 2 )
        goto LABEL_100;
    }
    *((_DWORD *)a3 + 67) &= 7u;
    *((_DWORD *)a3 + 66) = 0;
    goto LABEL_100;
  }
  InputTraceLogging::Pointer::DropInput();
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)v14 || v12 )
  {
    v39 = 46;
    goto LABEL_68;
  }
LABEL_125:
  CInputDest::SetEmpty((CInputDest *)v46);
  return v11;
}
