void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(__int64 **this)
{
  __int64 CurrentThreadWin32Thread; // rax
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( (unsigned int)dword_1C035C080 > 6 && tlgKeywordOn((__int64)&dword_1C035C080, 1LL) )
  {
    v3 = (const GUID *)(*this + 1);
    v4 = (const GUID *)(*this)[5];
    v5 = **this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1C035C080,
      byte_1C031B929,
      v3,
      v4,
      (void **)&v5);
  }
  Win32FreeToPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside, *this);
}
