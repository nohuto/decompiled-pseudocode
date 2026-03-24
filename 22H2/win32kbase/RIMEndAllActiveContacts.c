/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C015D000
 * Callers:
 *     RIMResetPointerDevices @ 0x1C00535F0 (RIMResetPointerDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C00B3D38 (RIMDoOnPnpNotification.c)
 *     _lambda_853903f4a8935f92af3ddbe6242dc426_::_lambda_invoker_cdecl_ @ 0x1C0150420 (_lambda_853903f4a8935f92af3ddbe6242dc426_--_lambda_invoker_cdecl_.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156DF4 (RIMIDERemoveInjectionDevice.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164B4C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A07C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0171344 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0171424 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171C28 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017825C (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C017FB48 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FC4C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FCBC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01800E0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180324 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  struct RIMDEV *v4; // r15
  __int64 v5; // r12
  int v6; // r13d
  int v9; // esi
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  int v13; // edx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rbx
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  _BYTE v23[32]; // [rsp+60h] [rbp-20h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+B8h] [rbp+38h]

  v4 = *(struct RIMDEV **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 816);
  v6 = *(_DWORD *)(a2 + 788) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin(&v21, a2);
  v11 = *(_QWORD *)(active + 16);
  v19 = *(_OWORD *)active;
  v20 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v23, a2);
    v14 = *(_OWORD *)v12;
    v15 = *(_QWORD *)(v12 + 16);
    v16 = *(_QWORD *)v12;
    v22 = v15;
    v21 = v14;
    if ( (_QWORD)v19 == v16 )
    {
      result = DWORD2(v21);
      if ( DWORD2(v19) == DWORD2(v21) && v20 == v22 )
        break;
    }
    v18 = v20 - 16;
    if ( (*(_DWORD *)(v20 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v19);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) )
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
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            result = WPP_RECORDER_SF_(
                       (_DWORD)gRimLog,
                       v13,
                       1,
                       42,
                       (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
          }
          v9 = 0;
          break;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v4, v18, v5 + 1, v6, 1);
      *(_DWORD *)(v18 + 2340) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v18);
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v4);
    result = RIMCompletePointerDeviceFrame(a1, v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    return WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 43, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
  }
  return result;
}
