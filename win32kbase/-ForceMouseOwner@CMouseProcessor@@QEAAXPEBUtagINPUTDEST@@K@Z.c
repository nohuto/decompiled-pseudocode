/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C022CF5C
 * Callers:
 *     ForceCapture @ 0x1C00D4890 (ForceCapture.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C02311F4 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  const struct tagINPUTDEST *v3; // rdi
  _BYTE v5[128]; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+D0h] [rbp-38h] BYREF

  v3 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      19,
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids,
      a3);
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v5, v3);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3576), (const struct CInputDest *)v5);
    CInputDest::SetEmpty((CInputDest *)v5);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3576));
    _InterlockedExchange((volatile __int32 *)this + 924, 0);
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C029D468,
        0LL,
        0LL,
        2u,
        &v6);
  }
}
