/*
 * XREFs of ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C01AC13C
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AC80C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01F9FE8 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C024A564 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01ABC54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void InputTraceLogging::Mouse::InjectInput()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  const char *v3; // rax
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 64LL) )
  {
    if ( (_DWORD)v1 )
    {
      v1 = (unsigned int)(v1 - 1);
      if ( (_DWORD)v1 )
      {
        v1 = (unsigned int)(v1 - 1);
        if ( (_DWORD)v1 )
        {
          v1 = (unsigned int)(v1 - 1);
          if ( (_DWORD)v1 )
          {
            v1 = (unsigned int)(v1 - 1);
            if ( (_DWORD)v1 )
            {
              if ( (_DWORD)v1 == 1 )
                v3 = "Dial";
              else
                v3 = "UNKNOWN";
            }
            else
            {
              v3 = "PTPMouseOperation";
            }
          }
          else
          {
            v3 = "MousePromotion";
          }
        }
        else
        {
          v3 = "SendInput";
        }
      }
      else
      {
        v3 = "PTPMarshalNotification";
      }
    }
    else
    {
      v3 = "SynthesizeMouseInput";
    }
    v4 = (__int64)v3;
    v5 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C035C080,
      byte_1C031BA18,
      v0,
      v1,
      (__int64)&v5,
      (void **)&v4);
  }
}
