/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01AA6D0
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z @ 0x1C01AA540 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01AA558 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

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
