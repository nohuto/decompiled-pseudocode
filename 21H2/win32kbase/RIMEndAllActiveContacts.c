/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C0191610
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     RIMResetPointerDevices @ 0x1C00B71A0 (RIMResetPointerDevices.c)
 *     _lambda_853903f4a8935f92af3ddbe6242dc426_::_lambda_invoker_cdecl_ @ 0x1C017D5A0 (_lambda_853903f4a8935f92af3ddbe6242dc426_--_lambda_invoker_cdecl_.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00E74FA (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01A614C (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A6AF4 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01B6684 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  struct RIMDEV *v4; // r14
  __int64 v5; // r12
  int v6; // r13d
  int v9; // r15d
  __int64 v10; // r8
  __int64 active; // rax
  __int64 v12; // r8
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r8
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rbx
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-19h]
  __int128 v24; // [rsp+58h] [rbp-11h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h]
  _BYTE v26[80]; // [rsp+70h] [rbp+7h] BYREF
  int v27; // [rsp+D8h] [rbp+6Fh]
  LARGE_INTEGER PerformanceCounter; // [rsp+E0h] [rbp+77h]

  v4 = *(struct RIMDEV **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 864);
  v6 = *(_DWORD *)(a2 + 836) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v27 = 0;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin((__int64)&v24, a2, v10);
  v13 = *(_QWORD *)(active + 16);
  v22 = *(_OWORD *)active;
  v23 = v13;
  while ( 1 )
  {
    v14 = RIMCmActiveContactsEnd((__int64)v26, a2, v12);
    v17 = *(_OWORD *)v14;
    v18 = *(_QWORD *)(v14 + 16);
    v19 = *(_QWORD *)v14;
    v25 = v18;
    v24 = v17;
    if ( (_QWORD)v22 == v19 )
    {
      result = DWORD2(v24);
      if ( DWORD2(v22) == DWORD2(v24) && v23 == v25 )
        break;
    }
    v21 = v23 - 16;
    if ( (*(_DWORD *)(v23 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v22);
    if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v21) )
    {
      if ( !v9 )
      {
        v9 = 1;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                   a1,
                   v4,
                   (LARGE_INTEGER)PerformanceCounter.QuadPart);
        if ( !(_DWORD)result )
        {
          LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            result = WPP_RECORDER_AND_TRACE_SF_(
                       WPP_GLOBAL_Control->AttachedDevice,
                       v15,
                       v16,
                       (_DWORD)gRimLog,
                       4,
                       1,
                       42,
                       (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
          }
          goto LABEL_24;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v4, v21, v5 + 1, v6, 1);
      *(_DWORD *)(v21 + 2340) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v21);
      v27 = 1;
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v4, v16);
    result = RIMCompletePointerDeviceFrame(a1, v4);
    goto LABEL_26;
  }
LABEL_24:
  if ( v27 )
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, 0LL, 0LL);
LABEL_26:
  LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v15,
             v16,
             (_DWORD)gRimLog,
             4,
             1,
             43,
             (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
  }
  return result;
}
