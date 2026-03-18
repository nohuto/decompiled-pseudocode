/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C0152A1C
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CAXPEAX@Z @ 0x1C0152650 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CAXPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152710 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(__int64 **this, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  NSInstrumentation::CLeakTrackingAllocator *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 1LL) )
  {
    v6 = (const GUID *)(*this + 1);
    v7 = (const GUID *)(*this)[5];
    v8 = **this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1C028EE70,
      byte_1C025B9ED,
      v6,
      v7,
      (void **)&v8);
  }
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
    v5,
    (char *)InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside,
    (struct _SLIST_ENTRY *)*this);
}
