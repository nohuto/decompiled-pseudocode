/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0198DC0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BC9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD17C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01829F0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0182DF0 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0190DD8 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01914A8 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ACA8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019FAA8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // di
  const struct CPointerInfoNode *v8; // r14
  int v10; // eax
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  int v14; // ebx
  const struct CPointerInputFrame *v15; // rax
  _DWORD *v16; // rdx
  int v17; // eax
  void *v18; // rax
  int v19; // ebx
  CInputDest *v20; // rax
  unsigned int v21; // ebx
  char v22; // di
  void *v23; // rax
  CInputDest *v24; // rax
  int v25; // [rsp+20h] [rbp-E0h]
  __int64 *v27[14]; // [rsp+50h] [rbp-B0h] BYREF
  char v28; // [rsp+C0h] [rbp-40h]
  __m128i v29[8]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v30[8]; // [rsp+150h] [rbp+50h] BYREF

  v6 = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      193,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  memset(v27, 0, sizeof(v27));
  v10 = *((_DWORD *)v8 + 45);
  v28 = 0;
  if ( (v10 & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 7, 194, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 195;
LABEL_48:
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
        }
      }
    }
  }
  else if ( a3 )
  {
    v14 = 0;
    v15 = CTouchProcessor::ReferenceFrame(this, a3[7]);
    if ( !v15 )
      goto LABEL_43;
    v16 = (_DWORD *)(*((_QWORD *)v15 + 17) + 480LL * a3[8]);
    if ( (*v16 & 0x80u) == 0 )
    {
      v14 = 1;
      *v16 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v15);
    if ( v14 )
    {
      v17 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x1000) == 0 )
      {
        if ( (v17 & 8) != 0 )
        {
          if ( (v17 & 0x400) != 0 )
          {
            v18 = CInputDest::CInputDest(v29, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
            v6 = 1;
          }
          else
          {
            v18 = CInputDest::CInputDest((CInputDest *)v30, (__int64 **)v8 + 3);
            v6 = 2;
          }
          CInputDest::operator=((__int64)v27, (__int64)v18);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::SetEmpty((CInputDest *)v30);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v29);
          }
          v19 = -__CFSHR__(*(_DWORD *)v8, 7);
          v20 = CInputDest::CInputDest((CInputDest *)v29, v27);
          v25 = v19;
          v21 = a4;
          CTouchProcessor::GenerateWindowLeaveMessage(
            (struct _KTHREAD **)this,
            (unsigned __int64)a3,
            v20,
            a4,
            v25,
            a5,
            a6);
          v17 = *(_DWORD *)v8;
        }
        else
        {
          v21 = a4;
        }
        if ( (v17 & 0x40) != 0 )
        {
          if ( (v17 & 0x400) != 0
            && *((_DWORD *)v8 + 111)
            && !CInputDest::IsEqualByWindowHandle((__int64)v8 + 352, *((_QWORD *)v8 + 24), 0) )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6389);
          }
          if ( (*(_DWORD *)v8 & 0x400) != 0 )
          {
            v22 = v6 | 4;
            v23 = CInputDest::CInputDest(v30, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
          }
          else
          {
            v22 = v6 | 8;
            v23 = CInputDest::CInputDest((CInputDest *)v29, (__int64 **)v8 + 3);
          }
          CInputDest::operator=((__int64)v27, (__int64)v23);
          if ( (v22 & 8) != 0 )
          {
            v22 &= ~8u;
            CInputDest::SetEmpty((CInputDest *)v29);
          }
          if ( (v22 & 4) != 0 )
            CInputDest::SetEmpty((CInputDest *)v30);
          v24 = CInputDest::CInputDest((CInputDest *)v29, v27);
          CTouchProcessor::GenerateRoutedAwayMessages((struct _KTHREAD **)this, (unsigned __int64)a3, v24, v21, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, a3, 1LL);
    }
    else
    {
LABEL_43:
      if ( (a3[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6412);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 198;
        goto LABEL_48;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 7, 196, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 197;
        goto LABEL_48;
      }
    }
  }
  CInputDest::SetEmpty((CInputDest *)v27);
}
