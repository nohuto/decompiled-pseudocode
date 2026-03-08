/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C0168CC0
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z @ 0x1C0168A20 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00A3274 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(__int64 **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThreadWin32Thread; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this, a2, a3, a4, v9);
  if ( CurrentThreadWin32Thread )
    _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( (unsigned int)dword_1C02CA7E0 > 6 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 1LL) )
  {
    v7 = (const GUID *)(*this + 1);
    v8 = (const GUID *)(*this)[5];
    v10 = **this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0294EA1,
      v7,
      v8,
      (void **)&v10);
  }
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
    v6,
    (char *)WPP_MAIN_CB.Dpc.SystemArgument2,
    (char *)*this);
}
