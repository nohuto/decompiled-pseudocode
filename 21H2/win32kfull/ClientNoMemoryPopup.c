/*
 * XREFs of ClientNoMemoryPopup @ 0x1C0222ACC
 * Callers:
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00EF5D4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 __fastcall ClientNoMemoryPopup(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int Count; // eax
  __int64 v4; // rcx
  int v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0;
  Count = AtomicExecutionCheck::GetCount(a1, a2, a3);
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v4);
  EtwTraceBeginCallback(86LL);
  KeUserModeCallback(86LL, 0LL, 0LL, &v7, &v6);
  EtwTraceEndCallback(86LL);
  return EnterCrit(1LL, 0LL);
}
