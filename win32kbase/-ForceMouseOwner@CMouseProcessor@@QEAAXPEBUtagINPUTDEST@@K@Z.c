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
