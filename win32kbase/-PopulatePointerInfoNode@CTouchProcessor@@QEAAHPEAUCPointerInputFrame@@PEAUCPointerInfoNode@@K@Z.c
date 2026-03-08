/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01FCDE4
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FD690 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C007D3DC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C00F2492 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2CB2 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00F30E4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01E99D4 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01F1224 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01FC334 (-NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C0207AAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C0209608 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C02096E8 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C023E4B4 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetInputTransformOnInput @ 0x1C0245230 (ApiSetInputTransformOnInput.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        unsigned int a4)
{
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // r8d
  char v11; // si
  unsigned __int16 updated; // ax
  int v13; // edx
  int v14; // r8d
  PDEVICE_OBJECT v15; // rcx
  const struct tagPOINTEREVENTINT *v16; // r14
  unsigned int v17; // ecx
  CInputDest *v18; // rax
  int v19; // r14d
  int v20; // r15d
  char v21; // cl
  unsigned int v22; // eax
  int v23; // eax
  int ShouldForegroundActivate; // eax
  char v25; // r14
  int v26; // r11d
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // r11d
  int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // edx
  int v35; // r8d
  int v37; // [rsp+28h] [rbp-D8h]
  __int16 v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+54h] [rbp-ACh]
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  _OWORD v44[7]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v45[7]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v46[7]; // [rsp+140h] [rbp+40h] BYREF
  char v47; // [rsp+1B0h] [rbp+B0h]
  _BYTE v48[113]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v49; // [rsp+231h] [rbp+131h]
  __int16 v50; // [rsp+235h] [rbp+135h]
  char v51; // [rsp+237h] [rbp+137h]
  _BYTE v52[128]; // [rsp+240h] [rbp+140h] BYREF

  v7 = 0;
  memset(v46, 0, sizeof(v46));
  v47 = 0;
  v40[0] = 0;
  v42 = 0;
  v43 = 0;
  if ( this[5] != KeGetCurrentThread() )
  {
    v41 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1321);
  }
  if ( !a2 )
  {
    v41 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8054);
  }
  if ( *((_DWORD *)a2 + 56) != 2 )
  {
    v41 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1322);
  }
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      45,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 45) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        46,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
        *((_DWORD *)a3 + 43));
    }
    *((_DWORD *)a3 + 43) = 0;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        47,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    InputTraceLogging::Pointer::DropInput();
    goto LABEL_125;
  }
  updated = CTouchProcessor::UpdateActivePointer(
              (CTouchProcessor *)this,
              a2,
              a3,
              (struct CInputDest *)v46,
              &v42,
              v40,
              &v43,
              a4,
              *((_WORD *)a3 + 86));
  if ( !updated )
  {
    if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_L(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          48,
          2,
          7,
          48,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
          *((_WORD *)a3 + 80));
      }
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v11 = 0;
    if ( (_BYTE)v13 || v11 )
    {
      v38 = 49;
LABEL_68:
      LOBYTE(v14) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        v15->AttachedDevice,
        v13,
        v14,
        v15->DeviceExtension,
        5,
        7,
        v38,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
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
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = (struct CPointerInfoNode *)((char *)a3 + 160);
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_HL(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          updated,
          4,
          v37,
          51,
          v39,
          updated,
          *((_WORD *)a3 + 80));
      }
      else
      {
        v16 = (struct CPointerInfoNode *)((char *)a3 + 160);
      }
      InputTraceLogging::Pointer::NoTargetFound(a2, v16);
    }
    v17 = *(_DWORD *)a3 & 0xFFFFFFFB | (v40[0] >> 2) & 4;
    *(_DWORD *)a3 = v17;
    if ( (v17 & 4) != 0 )
    {
      v49 = 0;
      v50 = 0;
      v51 = 0;
      memset(v48, 0, sizeof(v48));
      v18 = (CInputDest *)v48;
      v19 = 1;
      v20 = 0;
    }
    else
    {
      v18 = CInputDest::CInputDest((CInputDest *)v52, (__int64 **)v46);
      v19 = 0;
      v20 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v18);
    if ( v20 )
      CInputDest::SetEmpty((CInputDest *)v52);
    if ( v19 )
      CInputDest::SetEmpty((CInputDest *)v48);
    *((_DWORD *)a3 + 36) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v46) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    v21 = v40[0];
    if ( SLOBYTE(v40[0]) < 0 && gptiManipulationThread )
    {
      v22 = v43;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 87) = v22;
    }
    if ( (v21 & 0x20) != 0 )
    {
      v23 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 36) = 1;
      *(_DWORD *)a3 = v23;
      if ( (v21 & 0x40) != 0 )
        *(_DWORD *)a3 = v23 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 352, (__int64)v46);
    *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v46);
    *((_DWORD *)a3 + 44) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 59) = 1;
    ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate(a3);
    v25 = v40[0];
    *((_DWORD *)a3 + 84) = ShouldForegroundActivate == 0;
    if ( (v25 & 1) != 0 )
      *((_DWORD *)a3 + 45) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v25 & 4) << 14) | ((v25 & 2) << 14);
    v26 = *((_DWORD *)a3 + 45);
    v27 = *((_DWORD *)a3 + 42);
    *((_DWORD *)a3 + 45) = v26 & 0x7FE1F7;
    v28 = (unsigned int)(v27 - 2);
    if ( (_DWORD)v28 )
    {
      v28 = (unsigned int)(v28 - 1);
      if ( !(_DWORD)v28 )
      {
        *((_DWORD *)a3 + 66) &= 7u;
        *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_100:
        *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v28, v42, v26 & 0x1F0);
        if ( (v30 & 1) != 0 || (v30 & 0x20000) == 0 || (v31 = 1, (v30 & 2) == 0) )
          v31 = 0;
        v32 = v31 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v32;
        if ( v42 != v29 )
          *(_DWORD *)a3 = v32 & 0xFFFFFFFE;
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
          v25 = v40[0];
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v25 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v33 = *((_QWORD *)a3 + 31);
          v45[0] = v46[0];
          v45[2] = v46[2];
          v45[1] = v46[1];
          v45[4] = v46[4];
          v45[3] = v46[3];
          v45[6] = v46[6];
          v45[5] = v46[5];
          if ( (unsigned int)ApiSetInputTransformOnInput(v45, v33, (char *)a3 + 160) )
            *((_DWORD *)a3 + 45) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, (struct CPointerInfoNode *)((char *)a3 + 160));
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v34) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v35) = 0;
        }
        if ( (_BYTE)v34 || (_BYTE)v35 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v34,
            v35,
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            7,
            52,
            (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
        v7 = 1;
        goto LABEL_125;
      }
      if ( (_DWORD)v28 != 2 )
        goto LABEL_100;
    }
    *((_DWORD *)a3 + 67) &= 7u;
    *((_DWORD *)a3 + 66) = 0;
    goto LABEL_100;
  }
  InputTraceLogging::Pointer::DropInput();
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)v13 || v11 )
  {
    v38 = 50;
    goto LABEL_68;
  }
LABEL_125:
  CInputDest::SetEmpty((CInputDest *)v46);
  return v7;
}
