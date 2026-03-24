/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x1409F71B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x14024E708 (RtlULongLongMult.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1405C41B4 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F34CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1409F7704 (BgpGxDrawBitmapImage.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONGLONG v4; // rax
  NTSTATUS v5; // edi
  ULONGLONG v6; // rbx
  _BOOL8 v7; // rcx
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  pullResult = 0LL;
  v9 = 0LL;
  v4 = ((__int64 (__fastcall *)(unsigned __int64 *, PVOID, PVOID, PVOID))off_140C007F0)(
         &v9,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  v5 = RtlULongLongMult(v4, 0x3E8uLL, &pullResult);
  if ( v5 >= 0 )
  {
    v6 = pullResult / v9;
    BgpFwAcquireLock();
    if ( v6 >= qword_140C13590 )
    {
      if ( byte_140CF5330 )
      {
        AnFwpDisableProgressTimer(v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( qword_140C13538 )
        {
          BgpClearScreen(HIDWORD(qword_140C13670));
          v5 = BgpGxDrawBitmapImage(qword_140C13538, &qword_140C1354C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_140C13670));
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
