/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140AE90B8
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140AE907C (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x14066F510 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEC6DC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140AEF720 (BgpGxDrawBitmapImage.c)
 */

NTSTATUS __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  NTSTATUS result; // eax
  ULONGLONG v2; // rax
  ULONGLONG v3; // rdi
  __int64 v4; // rsi
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  pullResult = 0LL;
  v6 = 0LL;
  if ( (dword_140C0E3B0 & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( byte_140D17DA8 )
    return -1073741823;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C01C00)(&v6);
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result < 0 )
    return result;
  v3 = pullResult / v6;
  if ( qword_140C0E450 + v3 < v3 )
    return -1073741675;
  v4 = v3 + qword_140C0E450;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_140C0E450 >= 0x64 )
  {
    qword_140C0E450 = v4;
    KeInitializeTimerEx(&stru_140D1AE60, NotificationTimer);
    KeInitializeDpc(&stru_140D1AEA0, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140D1AE60, 0LL, 0x64u, 0, &stru_140D1AEA0) )
    {
      KeCancelTimer(&stru_140D1AE60);
      byte_140D17DA8 = 0;
      return BgpClearScreen(HIDWORD(qword_140C0E530));
    }
    byte_140D17DA8 = 1;
    return 0;
  }
  BgpClearScreen(HIDWORD(qword_140C0E530));
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
  result = BgpGxDrawBitmapImage(qword_140C0E3F8, &qword_140C0E40C);
  if ( result < 0 )
    return BgpClearScreen(HIDWORD(qword_140C0E530));
  return result;
}
