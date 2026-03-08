/*
 * XREFs of ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01F1224
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01FCDE4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FD690 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01FDB10 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C0207AAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01E70E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 */

void InputTraceLogging::Pointer::DropInput()
{
  __int64 v0; // r8
  __int64 v1; // r9
  _WORD *v2; // r10
  const char *v3; // rax
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h] BYREF
  __int64 v6[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    if ( (_DWORD)v0 )
    {
      v0 = (unsigned int)(v0 - 1);
      if ( (_DWORD)v0 )
      {
        v0 = (unsigned int)(v0 - 1);
        if ( (_DWORD)v0 )
        {
          v0 = (unsigned int)(v0 - 1);
          if ( (_DWORD)v0 )
          {
            v0 = (unsigned int)(v0 - 1);
            if ( (_DWORD)v0 )
            {
              v0 = (unsigned int)(v0 - 1);
              if ( (_DWORD)v0 )
              {
                v0 = (unsigned int)(v0 - 1);
                if ( (_DWORD)v0 )
                {
                  if ( (_DWORD)v0 == 1 )
                    v3 = "VirtualPTP";
                  else
                    v3 = "UNKNOWN";
                }
                else
                {
                  v3 = "UIPI";
                }
              }
              else
              {
                v3 = "HitTestFailed";
              }
            }
            else
            {
              v3 = "InvalidStateTransition";
            }
          }
          else
          {
            v3 = "PointerTypeChanged";
          }
        }
        else
        {
          v3 = "CreateNodeFailed";
        }
      }
      else
      {
        v3 = "NoPointerFlags";
      }
    }
    else
    {
      v3 = "Suppressed";
    }
    v4 = (__int64)v3;
    LOWORD(v7) = *v2;
    v5 = *(_QWORD *)(v1 + 72);
    v6[0] = *(_QWORD *)(v1 + 216);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029B15D,
      v0,
      v1,
      (__int64)v6,
      (__int64)&v5,
      (__int64)&v7,
      (void **)&v4);
  }
}
