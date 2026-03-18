/*
 * XREFs of rimEndAllActiveContactsWorker @ 0x1C018E494
 * Callers:
 *     _lambda_7defdb4f8a89d43cd844866b7ff54225_::_lambda_invoker_cdecl_ @ 0x1C0172040 (_lambda_7defdb4f8a89d43cd844866b7ff54225_--_lambda_invoker_cdecl_.c)
 *     RIMEndAllActiveContacts @ 0x1C01776D0 (RIMEndAllActiveContacts.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FE8 (RIMIDERemoveInjectionDevice.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1C019ADD8 (rimOnPnpRemoveCompleteInUserCrit.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00E34D4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E3530 (RIMCmActiveContactsEnd.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C017D324 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C019F6F0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C019F844 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A005C (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01A6DA4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A75A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmActiveContactsNext @ 0x1C01AFE8C (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01B064C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B08E8 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimEndAllActiveContactsWorker(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  struct RIMDEV *v4; // r14
  __int64 v5; // r12
  int v6; // r13d
  int v9; // r15d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rbx
  __int128 v20; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h]
  __int128 v22; // [rsp+58h] [rbp-11h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  _BYTE v24[80]; // [rsp+70h] [rbp+7h] BYREF
  int v25; // [rsp+D8h] [rbp+6Fh]
  LARGE_INTEGER PerformanceCounter; // [rsp+E0h] [rbp+77h]

  v4 = *(struct RIMDEV **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 864);
  v6 = *(_DWORD *)(a2 + 836) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v25 = 0;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin((__int64)&v22, a2);
  v11 = *(_QWORD *)(active + 16);
  v20 = *(_OWORD *)active;
  v21 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd((__int64)v24, a2);
    v15 = *(_OWORD *)v12;
    v16 = *(_QWORD *)(v12 + 16);
    v17 = *(_QWORD *)v12;
    v23 = v16;
    v22 = v15;
    if ( (_QWORD)v20 == v17 )
    {
      result = DWORD2(v22);
      if ( DWORD2(v20) == DWORD2(v22) && v21 == v23 )
        break;
    }
    v19 = v21 - 16;
    if ( (*(_DWORD *)(v21 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v20);
    if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v19) )
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
          LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            result = WPP_RECORDER_AND_TRACE_SF_(
                       WPP_GLOBAL_Control->AttachedDevice,
                       v13,
                       v14,
                       (_DWORD)gRimLog,
                       4,
                       1,
                       42,
                       (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
          }
          goto LABEL_24;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v4, v19, v5 + 1, v6, 1);
      *(_DWORD *)(v19 + 2364) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v19);
      v25 = 1;
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v4, v14);
    result = RIMCompletePointerDeviceFrame(a1, v4);
    goto LABEL_26;
  }
LABEL_24:
  if ( v25 )
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, 0LL, 0LL);
LABEL_26:
  LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v13,
             v14,
             (_DWORD)gRimLog,
             4,
             1,
             43,
             (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
  }
  return result;
}
