/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C018C2BC
 * Callers:
 *     RIMResetPointerDevices @ 0x1C017AF00 (RIMResetPointerDevices.c)
 *     RIMSetDeviceOutputConfig @ 0x1C018FED8 (RIMSetDeviceOutputConfig.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C0191DE0 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?SuppressionReasonToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00D3BEC (-SuppressionReasonToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00DFD94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C00E0BF2 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmActiveContactsBegin @ 0x1C00E34D4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E3530 (RIMCmActiveContactsEnd.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C017D324 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C019F6F0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C019F844 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A005C (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01A6DA4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsNext @ 0x1C01AFE8C (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01AFF90 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B08E8 (RIMCmIsContactDeliveringAnyData.c)
 */

char __fastcall RIMSuppressAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 v5; // r8
  __int64 v6; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  struct RIMDEV *v8; // r14
  LARGE_INTEGER v9; // rbx
  int v10; // r12d
  __int64 active; // rax
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // xmm1_8
  char result; // al
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // xmm1_8
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int128 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h]
  _BYTE v25[24]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+58h] BYREF

  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
  {
    v26 = (__int64)InputTraceLogging::SuppressionReasonToString(v4);
    v27 = *(_QWORD *)(a2 + 16);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0289810,
      byte_1C0258536,
      v5,
      v6,
      (__int64)&v27,
      (void **)&v26);
  }
  v20 = *(_QWORD *)(a2 + 864) + 1LL;
  LODWORD(v27) = *(_DWORD *)(a2 + 836) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = *(struct RIMDEV **)(a2 + 16);
  v9 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v8);
  LODWORD(v26) = 0;
  v10 = 0;
  active = RIMCmActiveContactsBegin((__int64)v25, a2);
  v12 = *(_QWORD *)(active + 16);
  v23 = *(_OWORD *)active;
  v24 = v12;
  v13 = RIMCmActiveContactsEnd((__int64)v25, a2);
  v14 = *(_QWORD *)(v13 + 16);
  v21 = *(_OWORD *)v13;
  v22 = v14;
  result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v23, (__int64)&v21);
  if ( result )
  {
    do
    {
      v16 = v24 - 16;
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v24 - 16) )
      {
        RIMCmAddContactSuppressionReasons(a2, v16);
        if ( !(_DWORD)v26 )
        {
          LODWORD(v26) = 1;
          v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                  a1,
                  v8,
                  (LARGE_INTEGER)v9.QuadPart);
        }
        if ( v10 )
          RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v8, v16, v20, v27, 1);
      }
      RIMCmActiveContactsNext(a2, &v23);
      v17 = RIMCmActiveContactsEnd((__int64)v25, a2);
      v18 = *(_QWORD *)(v17 + 16);
      v21 = *(_OWORD *)v17;
      v22 = v18;
      result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v23, (__int64)&v21);
    }
    while ( result );
    if ( v10 )
    {
      RIMAbArbitratePointerDeviceFrame(a1, (__int64)v8, v19);
      return RIMCompletePointerDeviceFrame(a1, v8);
    }
  }
  return result;
}
