/*
 * XREFs of SetContentOrientation @ 0x1C0218748
 * Callers:
 *     NtSetShellCursorState @ 0x1C016D020 (NtSetShellCursorState.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C02139C4 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     SendOrientationChanged @ 0x1C0218410 (SendOrientationChanged.c)
 */

char __fastcall SetContentOrientation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 MouseProcessor; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  double v9; // xmm0_8
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( !MouseProcessor )
    return MouseProcessor;
  *(_DWORD *)(MouseProcessor + 2784) = v4;
  v8 = (unsigned int)(v4 - 1);
  if ( v4 != 1 )
  {
    v8 = (unsigned int)(v4 - 2);
    if ( v4 == 2 )
    {
      v9 = DOUBLE_1_570796326794897;
      goto LABEL_8;
    }
    v8 = (unsigned int)(v4 - 3);
    if ( v4 == 3 )
    {
      v9 = DOUBLE_3_141592653589793;
      goto LABEL_8;
    }
    if ( v4 == 4 )
    {
      v9 = DOUBLE_4_71238898038469;
      goto LABEL_8;
    }
    LODWORD(v11) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5288);
  }
  v9 = 0.0;
LABEL_8:
  LOBYTE(MouseProcessor) = SendOrientationChanged(v9, v8, v6, v7);
  if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    LOBYTE(MouseProcessor) = tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL);
    if ( (_BYTE)MouseProcessor )
    {
      v11 = (__int64)InputTraceLogging::OrientationToString(v4);
      LOBYTE(MouseProcessor) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                                 (__int64)&dword_1C02CA7E0,
                                 byte_1C029D98C,
                                 0LL,
                                 0LL,
                                 (void **)&v11);
    }
  }
  return MouseProcessor;
}
