/*
 * XREFs of ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x1C01FC7F0
 * Callers:
 *     _lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_ @ 0x1C01ECBE0 (_lambda_c9e4fec9532ca8e5b5101c78de254c3e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1C0208FE0 (DCompositionBoostCompositionClockForInput.c)
 */

void __fastcall CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer(CCompositionRefreshRateBooster *this)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-30h] BYREF

  CPushLock::AcquireLockExclusive(this);
  if ( !gbIgnoreStressedOutStuff && !*((_BYTE *)this + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 509);
  *((_BYTE *)this + 16) = 0;
  v2 = DCompositionBoostCompositionClockForInput(0);
  if ( !gbIgnoreStressedOutStuff && v2 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 513);
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 512LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0289810, (unsigned __int8 *)dword_1C025F625, 0LL, 0LL, 2u, &v3);
  CPushLock::ReleaseLock(this);
}
