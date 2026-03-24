/*
 * XREFs of ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0166784
 * Callers:
 *     RIMQueueKeyboardInput @ 0x1C016A30C (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1C016A46C (RIMQueueMouseInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175060 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessHidInput @ 0x1C017566C (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C01757C8 (rimProcessInjectedDeviceBuffers.c)
 *     rimSignalReadComplete @ 0x1C0175E58 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01784F4 (RIMProcessAnyPointerDeviceInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017EEF8 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012840C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1C01668AC (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::DropInput(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 *v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF

  LOBYTE(v1) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v1 )
  {
    if ( (_BYTE)v1 == 2 )
    {
      v1 = *(_DWORD *)(a1 + 200);
      if ( (v1 & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C024AA90 > 4 )
        {
          LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024AA90, 256LL);
          if ( (_BYTE)v1 )
          {
            v3 = InputTraceLogging::DropReasonToString(v8);
            v6 = (unsigned __int8 *)&unk_1C021AC6E;
            goto LABEL_17;
          }
        }
      }
      else if ( (unsigned int)dword_1C024AA90 > 4 )
      {
        LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024AA90, 256LL);
        if ( (_BYTE)v1 )
        {
          v3 = InputTraceLogging::DropReasonToString(v7);
          v6 = (unsigned __int8 *)&unk_1C021AC38;
          goto LABEL_17;
        }
      }
    }
    else if ( (_BYTE)v1 == 1 && (unsigned int)dword_1C024AA90 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024AA90, 256LL);
      if ( (_BYTE)v1 )
      {
        v3 = InputTraceLogging::DropReasonToString(v9);
        v6 = (unsigned __int8 *)&unk_1C021AC01;
        goto LABEL_17;
      }
    }
  }
  else if ( (unsigned int)dword_1C024AA90 > 4 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024AA90, 256LL);
    if ( (_BYTE)v1 )
    {
      v3 = InputTraceLogging::DropReasonToString(v2);
      v6 = (unsigned __int8 *)&unk_1C021ABCD;
LABEL_17:
      v11 = v3;
      v12 = v4;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                     (__int64)&dword_1C024AA90,
                     v6,
                     v4,
                     v5,
                     (__int64)&v12,
                     (void **)&v11);
    }
  }
  return v1;
}
