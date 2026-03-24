/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197CF8
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0198498 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00428EC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00435A0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0044D38 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0094BC8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01884B8 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018E068 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C01917D8 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0196890 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C0197160 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C019ECB4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019FE78 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01A1314 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C01A13EC (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01CBA2C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01CF054 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C01CF8DC (ApiSetInputTransformOnInput.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        struct tagCHitTestState *a4,
        unsigned int a5)
{
  unsigned int v9; // edi
  int v10; // r13d
  void *v11; // rdx
  __int64 v12; // rax
  _WORD *v13; // r15
  unsigned __int16 updated; // ax
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  char v18; // r15
  unsigned int v19; // ecx
  CInputDest *v20; // rax
  int v21; // r12d
  unsigned int v22; // eax
  _OWORD *PTPShellTarget; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // eax
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r11d
  int v34; // ecx
  unsigned int v35; // eax
  __int128 v36; // xmm1
  __int64 InputDelegate; // rax
  const struct tagPOINTEREVENTINT *v38; // r15
  __int64 v39; // rdx
  int v40; // edx
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v43; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-A4h] BYREF
  const struct tagPOINTEREVENTINT *v46; // [rsp+60h] [rbp-A0h]
  _OWORD v47[7]; // [rsp+70h] [rbp-90h] BYREF
  char v48; // [rsp+E0h] [rbp-20h]
  _OWORD v49[7]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v50[7]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v51[7]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v52[112]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v53[113]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v54; // [rsp+321h] [rbp+221h]
  __int16 v55; // [rsp+325h] [rbp+225h]
  char v56; // [rsp+327h] [rbp+227h]
  _BYTE v57[128]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v58[128]; // [rsp+3B0h] [rbp+2B0h] BYREF

  memset(v47, 0, sizeof(v47));
  v9 = 0;
  v45 = 0;
  v48 = 0;
  v10 = 2;
  v43 = 0;
  v44 = 0;
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1170);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7387);
  if ( *((_DWORD *)a2 + 30) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1171);
  v11 = &WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v11,
      7,
      43,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    v11 = &WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids;
  }
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 45) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_d(
        (_DWORD)gBaseLog,
        (_DWORD)v11,
        7,
        44,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids,
        *((_DWORD *)a3 + 43));
    }
    *((_DWORD *)a3 + 43) = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v11,
        7,
        45,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
LABEL_31:
    InputTraceLogging::Pointer::DropInput();
    goto LABEL_78;
  }
  v12 = *((_QWORD *)a2 + 19);
  v13 = (_WORD *)((char *)a3 + 160);
  v46 = (struct CPointerInfoNode *)((char *)a3 + 160);
  this[2] = *(struct _KTHREAD **)(v12 + 228);
  updated = CTouchProcessor::UpdateActivePointer(
              (CTouchProcessor *)this,
              a2,
              (struct CPointerInfoNode *)((char *)a3 + 160),
              a4,
              (struct CInputDest *)v47,
              &v44,
              &v43,
              &v45,
              a5,
              *((_WORD *)a3 + 86));
  if ( updated )
  {
    if ( !LODWORD(v47[0]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(updated, v15, v16, 48, v42, updated, *v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v17) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              7,
              49,
              (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
          }
        }
      }
      goto LABEL_31;
    }
    v18 = v43;
    v19 = *(_DWORD *)a3 & 0xFFFFFFFB | (v43 >> 2) & 4;
    *(_DWORD *)a3 = v19;
    if ( (v19 & 4) != 0 )
    {
      v54 = 0;
      v55 = 0;
      v56 = 0;
      memset(v53, 0, sizeof(v53));
      v20 = (CInputDest *)v53;
      v21 = 1;
      v10 = 0;
    }
    else
    {
      v20 = CInputDest::CInputDest((CInputDest *)v58, (__int64 **)v47);
      v21 = 0;
    }
    CInputDest::operator=((__int64)a3 + 24, v20);
    if ( v10 )
      CInputDest::SetEmpty((CInputDest *)v58);
    if ( v21 )
      CInputDest::SetEmpty((CInputDest *)v53);
    *((_DWORD *)a3 + 36) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v47) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( v18 < 0 && gptiManipulationThread )
    {
      v22 = v45;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 87) = v22;
    }
    if ( (unsigned int)CPointerInfoNode::IsTouchpad(a3) )
    {
      PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v52);
      v24 = PTPShellTarget[1];
      v49[0] = *PTPShellTarget;
      v25 = PTPShellTarget[2];
      v49[1] = v24;
      v26 = PTPShellTarget[3];
      v49[2] = v25;
      v27 = PTPShellTarget[4];
      v49[3] = v26;
      v28 = PTPShellTarget[5];
      v49[4] = v27;
      v29 = PTPShellTarget[6];
      v49[5] = v28;
      v49[6] = v29;
      CInputDest::CInputDest((CInputDest *)v57, (const struct tagINPUTDEST *)v49);
      if ( CInputDest::operator==((int *)v47, (__int64)v57) )
      {
        if ( *((_DWORD *)a3 + 42) != 5 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1299);
        *(_DWORD *)a3 |= 0x500u;
        *((_DWORD *)a3 + 36) = 1;
      }
      CInputDest::SetEmpty((CInputDest *)v57);
    }
    if ( (v18 & 0x20) != 0 )
    {
      v30 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 36) = 1;
      *(_DWORD *)a3 = v30;
      if ( (v18 & 0x40) != 0 )
        *(_DWORD *)a3 = v30 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 352, (__int64)v47);
    *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v47);
    *((_DWORD *)a3 + 44) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 59) = 1;
    *((_DWORD *)a3 + 84) = CPointerInfoNode::ShouldForegroundActivate(a3) == 0;
    if ( (v18 & 1) != 0 )
      *((_DWORD *)a3 + 45) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v18 & 4) << 14) | ((v18 & 2) << 14);
    *((_DWORD *)a3 + 45) &= 0x7FE1F7u;
    v31 = (unsigned int)(*((_DWORD *)a3 + 42) - 2);
    if ( *((_DWORD *)a3 + 42) != 2 )
    {
      v31 = (unsigned int)(*((_DWORD *)a3 + 42) - 3);
      if ( *((_DWORD *)a3 + 42) == 3 )
      {
        *((_DWORD *)a3 + 66) &= 7u;
        *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_59:
        *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v31, v44, *((_DWORD *)a3 + 45) & 0x1F0);
        if ( (v33 & 1) != 0 || (v33 & 0x20000) == 0 || (v34 = 1, (v33 & 2) == 0) )
          v34 = 0;
        v35 = v34 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v35;
        if ( v44 != v32 )
          *(_DWORD *)a3 = v35 & 0xFFFFFFFE;
        v36 = v47[5];
        if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v47[5], 12)) )
        {
          v50[0] = v47[0];
          v50[1] = v47[1];
          v50[2] = v47[2];
          v50[3] = v47[3];
          v50[4] = v47[4];
          v50[6] = v47[6];
          v50[5] = v47[5];
          InputDelegate = ApiSetEditionGetInputDelegate(v50);
          v36 = v47[5];
          if ( InputDelegate )
          {
            if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
          }
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v18 & 8) << 11);
        if ( CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v38 = v46;
        }
        else
        {
          v38 = (struct CPointerInfoNode *)((char *)a3 + 160);
          v39 = *((_QWORD *)a3 + 31);
          v51[0] = v47[0];
          v51[1] = v47[1];
          v51[2] = v47[2];
          v51[3] = v47[3];
          v51[4] = v47[4];
          v51[6] = v47[6];
          v51[5] = v36;
          if ( (unsigned int)ApiSetInputTransformOnInput(v51, v39, (char *)a3 + 160) )
            *((_DWORD *)a3 + 45) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, v38);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v40) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v40,
            7,
            50,
            (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
        }
        v9 = 1;
        goto LABEL_78;
      }
      if ( *((_DWORD *)a3 + 42) != 5 )
        goto LABEL_59;
    }
    *((_DWORD *)a3 + 67) &= 7u;
    *((_DWORD *)a3 + 66) = 0;
    goto LABEL_59;
  }
  if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_L(updated, v15, 7, 46, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids, *v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      7,
      47,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
LABEL_78:
  CInputDest::SetEmpty((CInputDest *)v47);
  return v9;
}
