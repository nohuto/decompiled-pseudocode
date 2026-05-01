/*
 * XREFs of ?SetClickFlyoutShowing@ShellFeedsDesktopExperienceView@@UEAAX_N@Z @ 0x1800C5990
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001DF50 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800C338C (-GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x1800C38C4 (-IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 */

void __fastcall ShellFeedsDesktopExperienceView::SetClickFlyoutShowing(ShellFeedsDesktopExperienceView *this, char a2)
{
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  HWND TrayWindowFromLastActivatedMonitor; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
  {
    v8 = 0x2000000LL;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v5,
      byte_180580164,
      0LL,
      v6,
      (__int64)&v9,
      (__int64)&v8);
  }
  *((_BYTE *)this + 150) = a2;
  if ( ShellFeedsDesktopExperienceView::IsViewVisible((ShellFeedsDesktopExperienceView *)((char *)this - 8)) && a2 )
  {
    TrayWindowFromLastActivatedMonitor = ShellFeedsDesktopExperienceView::GetTrayWindowFromLastActivatedMonitor((ShellFeedsDesktopExperienceView *)((char *)this - 8));
    if ( TrayWindowFromLastActivatedMonitor )
      PostMessageW(TrayWindowFromLastActivatedMonitor, *((_DWORD *)this + 38), 5uLL, *((unsigned __int8 *)this + 150));
  }
}
