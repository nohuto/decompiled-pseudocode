/*
 * XREFs of ClientNoMemoryPopup @ 0x1C0208910
 * Callers:
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00B8314 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 __fastcall ClientNoMemoryPopup(__int64 a1)
{
  unsigned int Count; // eax
  __int64 v2; // rcx
  int v4; // [rsp+60h] [rbp+8h] BYREF
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  Count = AtomicExecutionCheck::GetCount(a1);
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v2);
  EtwTraceBeginCallback(86LL);
  KeUserModeCallback(86LL, 0LL, 0LL, &v5, &v4);
  EtwTraceEndCallback(86LL);
  return EnterCrit(1LL, 0LL);
}
