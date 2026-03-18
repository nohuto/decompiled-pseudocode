/*
 * XREFs of ClientNoMemoryPopup @ 0x1C0205D40
 * Callers:
 *     xxxSnapWindow @ 0x1C02281E8 (xxxSnapWindow.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0089E68 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 __fastcall ClientNoMemoryPopup(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int Count; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  v9 = 0;
  Count = AtomicExecutionCheck::GetCount(a1, a2, a3);
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  EtwTraceBeginCallback(86LL);
  KeUserModeCallback(86LL, 0LL, 0LL, &v10, &v9);
  EtwTraceEndCallback(86LL);
  return EnterCrit(1LL, 0LL);
}
